function optseq(...args) {
    return optional(seq(...args))
}

function sep(rule, delimiter) {
  return seq(rule, repeat(seq(delimiter, rule)));
}

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
        _opt_ind: $ => seq(optional($.comment), optional($._indent)),

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
            // $._opt_ind,
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
            $.literal,
        ),

        literal: $ => choice("true", "false"),

        ... tokensFunc
    }
});
