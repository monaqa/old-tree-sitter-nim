/// general functions

function optseq(...args) {
    return optional(seq(...args))
}

function sep(rule, delimiter) {
    return seq(rule, repeat(seq(delimiter, rule)));
}

/// precedence

const PREC = {
    arrow: 0,
    assign: 1,
    colon: 2,
    or: 3,
    and: 4,
    cmp: 5,
    slice: 6,
    amp: 7,
    plus: 8,
    mul: 9,
    dollar: 10,
    hat: 10,
};

function binary_operator_table($) {
    return {
        arrow: [PREC.arrow, $.op_arrow, choice("->", "=>")],
        assign: [PREC.assign, $.op_assign, choice("+=", "-=", "*=", "/=")],
        colon: [PREC.colon, $.op_colon, /[@:?][-+*\/\\''!?^.|=%&$@~:]+/],
        or: [PREC.or, $.op_or, choice("or", "xor")],
        and: [PREC.and, $.op_and, choice("and")],
        cmp: [PREC.cmp, $.op_cmp, choice(
            "==", "<=", "<", ">=", ">", "in", "notin", "is", "isnot", "not", "of", "as", "from",
            /[=<>!][-+*\/\\''!?^.|=%&$@~:]+/,
        )],
        slice: [PREC.slice, $.op_slice, choice(
            "..",
            /[.][-+*\/\\''!?^.|=%&$@~:]+/,
        )],
        amp: [PREC.amp, $.op_amp, choice("&", /[&][-+*\/\\''!?^.|=%&$@~:]+/,)],
        plus: [PREC.plus, $.op_plus, choice("+", "-", /[-+~|][-+*\/\\''!?^.|=%&$@~:]+/,)],
        mul: [PREC.mul, $.op_mul, choice(
            "*", "/", "div", "mod", "shl", "shr", "%",
            /[*/%\\][-+*\/\\''!?^.|=%&$@~:]+/,
        )],
        dollar: [PREC.dollar, $.op_dollar, choice(/[$][-+*\/\\''!?^.|=%&$@~:]+/,)],
        hat: [PREC.hat, $.op_hat, choice(/\^[-+*\/\\''!?^.|=%&$@~:]+/,)],
    }
};

const tokens = {
    _whitespace: /\s+/,
    comment: /#.*\n/,

    routine_proc: "proc",
    routine_method: "method",
    routine_func: "func",
    routine_iterator: "iterator",
    routine_macro: "macro",
    routine_template: "template",
    routine_converter: "converter",
}

const tokensFunc = Object.fromEntries(
    Object.entries(tokens).map(
        ([k, v]) => [k, (_) => v]
    )
)

/// special rules

// Since tree-sitter does not support syntactic rules that match the empty string,
// these rules have to be defined as functions.

function opt_ind($) {
    return seq(optional($.comment), optional($._indent))
}

function opt_par($) {
    return optional(choice($._indent, $._newline))
}

function section($, rule) {
    return choice(
        seq(optional($._comment), rule),
        seq(
            $._indent,
            sep(choice(rule, $._comment), $._newline),
            $._dedent,
        )
    )
}

module.exports = grammar({
    /// meta information
    name: 'nim',

    externals: $ => [
        $._newline,
        $._indent,
        $._dedent,
    ],

    extras: $ => [
        $._whitespace,
    ],

    conflicts: $ => [
        [$._stmt_root,],
    ],

    supertypes: $ => [
        $._simple_stmt,
        $._expr,
    ],

    rules: {
        source_file: $ => seq(
            repeat($._whitespace),
            $._stmt_root,
            optional(choice($._newline, ";")),
        ),

        _stmt_root: $ => (sep($._complex_or_simple_stmt, choice($._newline, ";"))),

        /// tokens

        comma: $ => seq(",", optional($.comment)),
        semicolon: $ => seq(";", optional($.comment)),
        colon: $ => seq(":", optional($.comment)),

        /// statements

        stmt: $ => choice(
            seq(
                $._indent,
                sep($._complex_or_simple_stmt, choice($._newline, ";")),
                $._dedent,
            ),
            prec.left(sep($._simple_stmt, ";")),
        ),

        _simple_stmt: $ => choice(
            $.stmt_echo,
        ),

        _complex_or_simple_stmt: $ => choice(
            $.stmt_if,
            // $.stmt_when,
            // $.stmt_while,
            // $.stmt_try,
            // $.stmt_for,
            // $.stmt_block,
            // $.stmt_static,
            // $.stmt_defer,
            // $.stmt_asm,
            $.routine,
            $._section,
            // $.stmt_bind,
            // $.stmt_mixin,
            $._simple_stmt,
        ),

        routine: $ => seq(
            $._routine_kind,
            opt_ind($),
            // $.ident_vis,
            // optional($.pattern),
            // optional($.generic_param_list),
            // $.param_list_colon,
            // optional($.pragma),
            // optseq("=", optional($.comment), $.stmt),
            // $.ind_and_comment
        ),

        _section: $ => choice(
            // $.stmt_section_type,
            // $.stmt_section_const,
            // $.stmt_section_let,
            // $.stmt_section_var,
            // $.stmt_section_using,
        ),

        _routine_kind: $ => choice(
            $.routine_proc,
            $.routine_method,
            $.routine_func,
            $.routine_iterator,
            $.routine_macro,
            $.routine_template,
            $.routine_converter,
        ),

        // stmt_expr: $ => choice(
        //     $.dollar_expr,
        // ),
        // 
        // dollar_expr: $ => seq(
        //     $.primary,
        // ),
        // 
        // primary: $ => choice(
        //     $.ident_or_literal,
        // ),
        // 
        // ident_or_literal: $ => choice(
        //     $.literal,
        // ),

        stmt_if: $ => seq(
            "if",
            $._stmt_cond,
        ),

        _stmt_cond: $ => seq(
            field("cond", $._expr),
            ":",
            field("true_clause", $.stmt),
            $._newline,
            "else",
            ":",
            field("false_clause", $.stmt),
        ),

        stmt_echo: $ => seq("echo", $._expr),

        /// expressions

        _expr: $ => choice(
            // $.expr_block,
            // $.expr_if,
            // $.expr_when,
            // $.expr_case,
            // $.expr_for,
            // $.expr_try,
            $._simple_expr,
        ),

        _simple_expr: $ => choice(
            $.expr_binop,
            $.primary,
        ),

        expr_binop: $ => choice(
            ...Object.entries(binary_operator_table($)).map(([key, [precedence, name, operator]]) =>
                {
                    const assoc = key == "hat" ? prec.right : prec.left;
                    return assoc(
                        precedence,
                        seq(
                            field("left", $._simple_expr),
                            field("operator", alias(operator, name)),
                            field("right", $._simple_expr),
                        ),
                    )
                }
            ),
        ),

        primary: $ => choice($.literal),

        literal: $ => choice("true", "false"),

        ... tokensFunc
    }
});
