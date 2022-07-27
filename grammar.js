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


function tokens() {

    const identifier = /[A-Za-z\x80-\xff](_[0-9A-Za-z\x80-\xff])*/;

    const _literal_int_hex = /-?0[xX][0-9a-fA-F](_?[0-9a-fA-F])*/;
    const _literal_int_dec = /-?[0-9](_?[0-9])*/;
    const _literal_int_oct = /-?0[o][0-7](_?[0-7])*/;
    const _literal_int_bin = /-?0[bB][01](_?[01])*/;
    const literal_int = token.immediate(choice(
        _literal_int_hex,
        _literal_int_dec,
        _literal_int_oct,
        _literal_int_bin,
    ));
    const _exponent = /[eE][+-]?[0-9](_?[0-9])*/;

    const literal_float = token.immediate(seq(
        /-?[0-9](_?[0-9])*/,
        choice(
            _exponent,
            seq(/\.[0-9](_?[0-9])*/, optional(_exponent))
        ))
    );

    const _float_body = token.immediate(choice(
        seq(_literal_int_hex, "'"),
        seq(
            choice(
                literal_float,
                _literal_int_dec,
                _literal_int_oct,
                _literal_int_bin,
            ),
            optional("'"),
        )
    ));

    return {
        _whitespace: /\s+/,
        comment: /#.*\n/,

        routine_proc: "proc",
        routine_method: "method",
        routine_func: "func",
        routine_iterator: "iterator",
        routine_macro: "macro",
        routine_template: "template",
        routine_converter: "converter",

        identifier,

        literal_int,

        literal_int8:  token.immediate(seq(literal_int, optional("'"), choice("i8", "I8"))),
        literal_int16: token.immediate(seq(literal_int, optional("'"), choice("i16", "I16"))),
        literal_int32: token.immediate(seq(literal_int, optional("'"), choice("i32", "I32"))),
        literal_int64: token.immediate(seq(literal_int, optional("'"), choice("i64", "I64"))),

        literal_uint:   token.immediate(seq(literal_int, optional("'"), choice("u", "U"))),
        literal_uint8:  token.immediate(seq(literal_int, optional("'"), choice("u8", "U8"))),
        literal_uint16: token.immediate(seq(literal_int, optional("'"), choice("u16", "U16"))),
        literal_uint32: token.immediate(seq(literal_int, optional("'"), choice("u32", "U32"))),
        literal_uint64: token.immediate(seq(literal_int, optional("'"), choice("u64", "U64"))),

        literal_float,

        literal_float32: token.immediate(seq(_float_body, choice("f32", "F32", "f", "F"))),
        literal_float64: token.immediate(seq(_float_body, choice("f64", "F64", "d", "D"))),

        literal_custom_numeric: token.immediate(seq(
            choice(
                literal_int,
                literal_float,
            ),
            "'",
            identifier,
        ))

    }
}

const grammarToken = Object.fromEntries(
    Object.entries(tokens()).map(
        ([k, v]) => [k, (_) => v]
    )
)

/// special rules

// Since tree-sitter does not support syntactic rules that match the empty string,
// these rules have to be defined as functions.

function opt_ind($) {
    return seq(repeat($.comment), optional($._indent))
}

function opt_par($) {
    return optional(choice($._indent, $._newline))
}

function section($, rule) {
    return choice(
        seq(repeat($.comment), rule),
        seq(
            $._indent,
            sep(choice(rule, $.comment), $._newline),
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

        comma: $ => seq(",", repeat($.comment)),
        semicolon: $ => seq(";", repeat($.comment)),
        colon: $ => seq(":", repeat($.comment)),

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
            // optseq("=", repeat($.comment), $.stmt),
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

        operator: $ => choice(
            "static",
            ...Object.entries(binary_operator_table($)).map(([_, [_prec, _name, operator]]) => operator),
        ),

        prefix_operator: $ => $.operator,

        operator_b: $ => choice(
            ...Object.entries(binary_operator_table($)).map(([_, [_prec, _name, operator]]) => operator),
        ),

        primary: $ => choice(
            // seq($.operator_b, $.primary, repeat($.primary_suffix)),
            // $.decl_tuple,
            // $.expr_routine,
            // $.decl_enum,
            // $.decl_object,
            // $.decl_concept,
            seq(alias("bind", $.primary_prefix_bind), $.primary),
            seq(alias("var", $.primary_prefix_var), $.primary),
            seq(alias("out", $.primary_prefix_out), $.primary),
            seq(alias("ref", $.primary_prefix_ref), $.primary),
            seq(alias("ptr", $.primary_prefix_ptr), $.primary),
            seq(alias("distinct", $.primary_prefix_distinct), $.primary),
            seq(repeat($.prefix_operator), $._identifier_or_literal, repeat($.primary_suffix)),
        ),

        _identifier_or_literal: $ => choice(
            // $.symbol,
            // $._generalized_string,
            $._literal,
            // $.parenthesized_expr,
            // $.array_constructor,
            // $.set_or_table_constructor,
            // $.tuple_constructor,
            // $.expr_cast,
        ),

        // decl_tuple: $ => choice(
        //     seq("tuple", "[", "]"),
        //     seq(
        //         repeat($.comment),
        //         $._indent,
        //         sep($.identifier, $._newline),
        //     )
        // ),

        primary_suffix: $ => choice(
            seq("(", ")")
        ),

        _literal: $ => choice(
            $.literal_int,
            $.literal_int8,
            $.literal_int16,
            $.literal_int32,
            $.literal_int64,
            $.literal_uint,
            $.literal_uint8,
            $.literal_uint16,
            $.literal_uint32,
            $.literal_uint64,

            $.literal_float,
            $.literal_float32,
            $.literal_float64,
            // $.literal_str,
            // $.literal_rawstr,
            // $.literal_triplestr,
            // $.literal_char,
            // $.literal_custom_numeric,
            // $.literal_nil,
        ),


        ... grammarToken
    }
});
