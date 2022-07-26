#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 77
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_SEMI = 1,
  anon_sym_COMMA = 2,
  anon_sym_COLON = 3,
  anon_sym_if = 4,
  anon_sym_else = 5,
  anon_sym_echo = 6,
  anon_sym_true = 7,
  anon_sym_false = 8,
  sym__whitespace = 9,
  sym_comment = 10,
  sym_routine_proc = 11,
  sym_routine_method = 12,
  sym_routine_func = 13,
  sym_routine_iterator = 14,
  sym_routine_macro = 15,
  sym_routine_template = 16,
  sym_routine_converter = 17,
  sym__newline = 18,
  sym__indent = 19,
  sym__dedent = 20,
  sym_source_file = 21,
  sym__stmt_root = 22,
  sym_stmt = 23,
  sym__simple_stmt = 24,
  sym__complex_or_simple_stmt = 25,
  sym_routine = 26,
  sym__section = 27,
  sym__routine_kind = 28,
  sym_stmt_if = 29,
  sym__stmt_cond = 30,
  sym_stmt_echo = 31,
  sym__expr = 32,
  sym_literal = 33,
  aux_sym_source_file_repeat1 = 34,
  aux_sym__stmt_root_repeat1 = 35,
  aux_sym_stmt_repeat1 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_echo] = "echo",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym__whitespace] = "_whitespace",
  [sym_comment] = "comment",
  [sym_routine_proc] = "routine_proc",
  [sym_routine_method] = "routine_method",
  [sym_routine_func] = "routine_func",
  [sym_routine_iterator] = "routine_iterator",
  [sym_routine_macro] = "routine_macro",
  [sym_routine_template] = "routine_template",
  [sym_routine_converter] = "routine_converter",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_source_file] = "source_file",
  [sym__stmt_root] = "_stmt_root",
  [sym_stmt] = "stmt",
  [sym__simple_stmt] = "_simple_stmt",
  [sym__complex_or_simple_stmt] = "_complex_or_simple_stmt",
  [sym_routine] = "routine",
  [sym__section] = "_section",
  [sym__routine_kind] = "_routine_kind",
  [sym_stmt_if] = "stmt_if",
  [sym__stmt_cond] = "_stmt_cond",
  [sym_stmt_echo] = "stmt_echo",
  [sym__expr] = "_expr",
  [sym_literal] = "literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__stmt_root_repeat1] = "_stmt_root_repeat1",
  [aux_sym_stmt_repeat1] = "stmt_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_echo] = anon_sym_echo,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym__whitespace] = sym__whitespace,
  [sym_comment] = sym_comment,
  [sym_routine_proc] = sym_routine_proc,
  [sym_routine_method] = sym_routine_method,
  [sym_routine_func] = sym_routine_func,
  [sym_routine_iterator] = sym_routine_iterator,
  [sym_routine_macro] = sym_routine_macro,
  [sym_routine_template] = sym_routine_template,
  [sym_routine_converter] = sym_routine_converter,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_source_file] = sym_source_file,
  [sym__stmt_root] = sym__stmt_root,
  [sym_stmt] = sym_stmt,
  [sym__simple_stmt] = sym__simple_stmt,
  [sym__complex_or_simple_stmt] = sym__complex_or_simple_stmt,
  [sym_routine] = sym_routine,
  [sym__section] = sym__section,
  [sym__routine_kind] = sym__routine_kind,
  [sym_stmt_if] = sym_stmt_if,
  [sym__stmt_cond] = sym__stmt_cond,
  [sym_stmt_echo] = sym_stmt_echo,
  [sym__expr] = sym__expr,
  [sym_literal] = sym_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__stmt_root_repeat1] = aux_sym__stmt_root_repeat1,
  [aux_sym_stmt_repeat1] = aux_sym_stmt_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_echo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_routine_proc] = {
    .visible = true,
    .named = true,
  },
  [sym_routine_method] = {
    .visible = true,
    .named = true,
  },
  [sym_routine_func] = {
    .visible = true,
    .named = true,
  },
  [sym_routine_iterator] = {
    .visible = true,
    .named = true,
  },
  [sym_routine_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_routine_template] = {
    .visible = true,
    .named = true,
  },
  [sym_routine_converter] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__stmt_root] = {
    .visible = false,
    .named = true,
  },
  [sym_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__complex_or_simple_stmt] = {
    .visible = false,
    .named = true,
  },
  [sym_routine] = {
    .visible = true,
    .named = true,
  },
  [sym__section] = {
    .visible = false,
    .named = true,
  },
  [sym__routine_kind] = {
    .visible = false,
    .named = true,
  },
  [sym_stmt_if] = {
    .visible = true,
    .named = true,
  },
  [sym__stmt_cond] = {
    .visible = false,
    .named = true,
  },
  [sym_stmt_echo] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stmt_root_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_cond = 1,
  field_false_clause = 2,
  field_true_clause = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_cond] = "cond",
  [field_false_clause] = "false_clause",
  [field_true_clause] = "true_clause",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_cond, 1, .inherited = true},
    {field_false_clause, 1, .inherited = true},
    {field_true_clause, 1, .inherited = true},
  [3] =
    {field_cond, 0},
    {field_false_clause, 6},
    {field_true_clause, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(48);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'm') ADVANCE(3);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'h') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'h') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 47:
      if (lookahead == 'v') ADVANCE(17);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_echo);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_routine_proc);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_routine_method);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_routine_func);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_routine_iterator);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_routine_macro);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_routine_template);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_routine_converter);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 1},
  [12] = {.lex_state = 0, .external_lex_state = 2},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 3},
  [16] = {.lex_state = 0, .external_lex_state = 4},
  [17] = {.lex_state = 0, .external_lex_state = 5},
  [18] = {.lex_state = 0, .external_lex_state = 4},
  [19] = {.lex_state = 0, .external_lex_state = 3},
  [20] = {.lex_state = 0, .external_lex_state = 5},
  [21] = {.lex_state = 0, .external_lex_state = 5},
  [22] = {.lex_state = 0, .external_lex_state = 4},
  [23] = {.lex_state = 0, .external_lex_state = 5},
  [24] = {.lex_state = 0, .external_lex_state = 5},
  [25] = {.lex_state = 0, .external_lex_state = 4},
  [26] = {.lex_state = 0, .external_lex_state = 1},
  [27] = {.lex_state = 0, .external_lex_state = 4},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0, .external_lex_state = 4},
  [31] = {.lex_state = 0, .external_lex_state = 4},
  [32] = {.lex_state = 0, .external_lex_state = 4},
  [33] = {.lex_state = 0, .external_lex_state = 5},
  [34] = {.lex_state = 0, .external_lex_state = 5},
  [35] = {.lex_state = 0, .external_lex_state = 5},
  [36] = {.lex_state = 0, .external_lex_state = 5},
  [37] = {.lex_state = 0, .external_lex_state = 5},
  [38] = {.lex_state = 0, .external_lex_state = 5},
  [39] = {.lex_state = 0, .external_lex_state = 5},
  [40] = {.lex_state = 0, .external_lex_state = 5},
  [41] = {.lex_state = 0, .external_lex_state = 5},
  [42] = {.lex_state = 0, .external_lex_state = 5},
  [43] = {.lex_state = 0, .external_lex_state = 4},
  [44] = {.lex_state = 0, .external_lex_state = 5},
  [45] = {.lex_state = 0, .external_lex_state = 4},
  [46] = {.lex_state = 0, .external_lex_state = 5},
  [47] = {.lex_state = 0, .external_lex_state = 4},
  [48] = {.lex_state = 0, .external_lex_state = 5},
  [49] = {.lex_state = 0, .external_lex_state = 4},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0, .external_lex_state = 4},
  [52] = {.lex_state = 0, .external_lex_state = 5},
  [53] = {.lex_state = 0, .external_lex_state = 4},
  [54] = {.lex_state = 0, .external_lex_state = 5},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0, .external_lex_state = 4},
  [57] = {.lex_state = 0, .external_lex_state = 4},
  [58] = {.lex_state = 0, .external_lex_state = 5},
  [59] = {.lex_state = 0, .external_lex_state = 4},
  [60] = {.lex_state = 0, .external_lex_state = 4},
  [61] = {.lex_state = 0, .external_lex_state = 4},
  [62] = {.lex_state = 0, .external_lex_state = 4},
  [63] = {.lex_state = 0, .external_lex_state = 5},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0, .external_lex_state = 5},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0, .external_lex_state = 5},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [2] = {
    [ts_external_token__indent] = true,
  },
  [3] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
  },
  [4] = {
    [ts_external_token__newline] = true,
    [ts_external_token__dedent] = true,
  },
  [5] = {
    [ts_external_token__newline] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_echo] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(1),
    [sym_routine_proc] = ACTIONS(1),
    [sym_routine_method] = ACTIONS(1),
    [sym_routine_func] = ACTIONS(1),
    [sym_routine_iterator] = ACTIONS(1),
    [sym_routine_macro] = ACTIONS(1),
    [sym_routine_template] = ACTIONS(1),
    [sym_routine_converter] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(71),
    [sym__stmt_root] = STATE(38),
    [sym__simple_stmt] = STATE(21),
    [sym__complex_or_simple_stmt] = STATE(21),
    [sym_routine] = STATE(21),
    [sym__section] = STATE(21),
    [sym__routine_kind] = STATE(15),
    [sym_stmt_if] = STATE(21),
    [sym_stmt_echo] = STATE(40),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_if] = ACTIONS(5),
    [anon_sym_echo] = ACTIONS(7),
    [sym__whitespace] = ACTIONS(9),
    [sym_routine_proc] = ACTIONS(11),
    [sym_routine_method] = ACTIONS(11),
    [sym_routine_func] = ACTIONS(11),
    [sym_routine_iterator] = ACTIONS(11),
    [sym_routine_macro] = ACTIONS(11),
    [sym_routine_template] = ACTIONS(11),
    [sym_routine_converter] = ACTIONS(11),
  },
  [2] = {
    [sym__stmt_root] = STATE(58),
    [sym__simple_stmt] = STATE(21),
    [sym__complex_or_simple_stmt] = STATE(21),
    [sym_routine] = STATE(21),
    [sym__section] = STATE(21),
    [sym__routine_kind] = STATE(15),
    [sym_stmt_if] = STATE(21),
    [sym_stmt_echo] = STATE(40),
    [aux_sym_source_file_repeat1] = STATE(7),
    [anon_sym_if] = ACTIONS(5),
    [anon_sym_echo] = ACTIONS(7),
    [sym__whitespace] = ACTIONS(13),
    [sym_routine_proc] = ACTIONS(11),
    [sym_routine_method] = ACTIONS(11),
    [sym_routine_func] = ACTIONS(11),
    [sym_routine_iterator] = ACTIONS(11),
    [sym_routine_macro] = ACTIONS(11),
    [sym_routine_template] = ACTIONS(11),
    [sym_routine_converter] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_echo,
    STATE(11), 1,
      sym__routine_kind,
    STATE(43), 1,
      sym_stmt_echo,
    STATE(51), 5,
      sym__simple_stmt,
      sym__complex_or_simple_stmt,
      sym_routine,
      sym__section,
      sym_stmt_if,
    ACTIONS(19), 7,
      sym_routine_proc,
      sym_routine_method,
      sym_routine_func,
      sym_routine_iterator,
      sym_routine_macro,
      sym_routine_template,
      sym_routine_converter,
  [32] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_echo,
    STATE(11), 1,
      sym__routine_kind,
    STATE(43), 1,
      sym_stmt_echo,
    STATE(30), 5,
      sym__simple_stmt,
      sym__complex_or_simple_stmt,
      sym_routine,
      sym__section,
      sym_stmt_if,
    ACTIONS(19), 7,
      sym_routine_proc,
      sym_routine_method,
      sym_routine_func,
      sym_routine_iterator,
      sym_routine_macro,
      sym_routine_template,
      sym_routine_converter,
  [64] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_echo,
    STATE(11), 1,
      sym__routine_kind,
    STATE(43), 1,
      sym_stmt_echo,
    STATE(31), 5,
      sym__simple_stmt,
      sym__complex_or_simple_stmt,
      sym_routine,
      sym__section,
      sym_stmt_if,
    ACTIONS(19), 7,
      sym_routine_proc,
      sym_routine_method,
      sym_routine_func,
      sym_routine_iterator,
      sym_routine_macro,
      sym_routine_template,
      sym_routine_converter,
  [96] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_if,
    ACTIONS(7), 1,
      anon_sym_echo,
    STATE(15), 1,
      sym__routine_kind,
    STATE(40), 1,
      sym_stmt_echo,
    STATE(35), 5,
      sym__simple_stmt,
      sym__complex_or_simple_stmt,
      sym_routine,
      sym__section,
      sym_stmt_if,
    ACTIONS(11), 7,
      sym_routine_proc,
      sym_routine_method,
      sym_routine_func,
      sym_routine_iterator,
      sym_routine_macro,
      sym_routine_template,
      sym_routine_converter,
  [128] = 3,
    ACTIONS(23), 1,
      sym__whitespace,
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(21), 9,
      anon_sym_if,
      anon_sym_echo,
      sym_routine_proc,
      sym_routine_method,
      sym_routine_func,
      sym_routine_iterator,
      sym_routine_macro,
      sym_routine_template,
      sym_routine_converter,
  [146] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      anon_sym_echo,
    ACTIONS(26), 1,
      sym__indent,
    STATE(16), 1,
      sym__simple_stmt,
    STATE(43), 1,
      sym_stmt_echo,
    STATE(60), 1,
      sym_stmt,
  [165] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    STATE(42), 1,
      sym__stmt_cond,
    STATE(66), 1,
      sym_literal,
    STATE(67), 1,
      sym__expr,
    ACTIONS(28), 2,
      anon_sym_true,
      anon_sym_false,
  [182] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(7), 1,
      anon_sym_echo,
    ACTIONS(30), 1,
      sym__indent,
    STATE(23), 1,
      sym__simple_stmt,
    STATE(40), 1,
      sym_stmt_echo,
    STATE(41), 1,
      sym_stmt,
  [201] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(34), 1,
      sym_comment,
    ACTIONS(36), 1,
      sym__indent,
    ACTIONS(32), 3,
      sym__newline,
      sym__dedent,
      anon_sym_SEMI,
  [216] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(7), 1,
      anon_sym_echo,
    ACTIONS(30), 1,
      sym__indent,
    STATE(40), 1,
      sym_stmt_echo,
    STATE(48), 1,
      sym__simple_stmt,
    STATE(74), 1,
      sym_stmt,
  [235] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    STATE(45), 1,
      sym__stmt_cond,
    STATE(66), 1,
      sym_literal,
    STATE(76), 1,
      sym__expr,
    ACTIONS(28), 2,
      anon_sym_true,
      anon_sym_false,
  [252] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(7), 1,
      anon_sym_echo,
    ACTIONS(30), 1,
      sym__indent,
    STATE(40), 1,
      sym_stmt_echo,
    STATE(48), 1,
      sym__simple_stmt,
    STATE(68), 1,
      sym_stmt,
  [271] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym__indent,
    ACTIONS(32), 3,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [286] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    STATE(27), 1,
      aux_sym_stmt_repeat1,
    ACTIONS(42), 3,
      sym__newline,
      sym__dedent,
      anon_sym_SEMI,
  [298] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      aux_sym__stmt_root_repeat1,
    ACTIONS(46), 2,
      sym__newline,
      anon_sym_SEMI,
  [312] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(49), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      aux_sym_stmt_repeat1,
    ACTIONS(52), 2,
      sym__newline,
      sym__dedent,
  [326] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(56), 1,
      sym__indent,
    ACTIONS(54), 3,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [338] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    STATE(33), 1,
      aux_sym_stmt_repeat1,
    ACTIONS(58), 3,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [350] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      aux_sym__stmt_root_repeat1,
    ACTIONS(62), 2,
      sym__newline,
      anon_sym_SEMI,
  [364] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__dedent,
    STATE(25), 1,
      aux_sym__stmt_root_repeat1,
    ACTIONS(65), 2,
      sym__newline,
      anon_sym_SEMI,
  [378] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    STATE(20), 1,
      aux_sym_stmt_repeat1,
    ACTIONS(42), 3,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [390] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      aux_sym__stmt_root_repeat1,
    ACTIONS(71), 2,
      sym__newline,
      anon_sym_SEMI,
  [404] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__dedent,
    STATE(25), 1,
      aux_sym__stmt_root_repeat1,
    ACTIONS(74), 2,
      sym__newline,
      anon_sym_SEMI,
  [418] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(77), 1,
      sym__indent,
    ACTIONS(54), 3,
      sym__newline,
      sym__dedent,
      anon_sym_SEMI,
  [430] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    STATE(18), 1,
      aux_sym_stmt_repeat1,
    ACTIONS(58), 3,
      sym__newline,
      sym__dedent,
      anon_sym_SEMI,
  [442] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    STATE(46), 1,
      sym_literal,
    STATE(52), 1,
      sym__expr,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
  [456] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    STATE(47), 1,
      sym__expr,
    STATE(62), 1,
      sym_literal,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
  [470] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(83), 1,
      sym__dedent,
    STATE(32), 1,
      aux_sym__stmt_root_repeat1,
    ACTIONS(65), 2,
      sym__newline,
      anon_sym_SEMI,
  [484] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(85), 1,
      sym__dedent,
    STATE(22), 1,
      aux_sym__stmt_root_repeat1,
    ACTIONS(65), 2,
      sym__newline,
      anon_sym_SEMI,
  [498] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(87), 1,
      sym__dedent,
    STATE(25), 1,
      aux_sym__stmt_root_repeat1,
    ACTIONS(65), 2,
      sym__newline,
      anon_sym_SEMI,
  [512] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    STATE(33), 1,
      aux_sym_stmt_repeat1,
    ACTIONS(52), 2,
      sym__newline,
      ts_builtin_sym_end,
  [526] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(52), 3,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [535] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(69), 3,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [544] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(58), 1,
      sym__newline,
    ACTIONS(92), 1,
      anon_sym_SEMI,
    STATE(33), 1,
      aux_sym_stmt_repeat1,
  [557] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(94), 3,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [566] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 2,
      sym__newline,
      anon_sym_SEMI,
  [577] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(100), 3,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [586] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(102), 3,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [595] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(104), 3,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [604] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(106), 3,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [613] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(102), 3,
      sym__newline,
      sym__dedent,
      anon_sym_SEMI,
  [622] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(108), 3,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [631] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(106), 3,
      sym__newline,
      sym__dedent,
      anon_sym_SEMI,
  [640] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(110), 3,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [649] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(112), 3,
      sym__newline,
      sym__dedent,
      anon_sym_SEMI,
  [658] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(42), 1,
      sym__newline,
    ACTIONS(92), 1,
      anon_sym_SEMI,
    STATE(36), 1,
      aux_sym_stmt_repeat1,
  [671] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(54), 3,
      sym__newline,
      sym__dedent,
      anon_sym_SEMI,
  [680] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(17), 1,
      anon_sym_echo,
    STATE(43), 1,
      sym_stmt_echo,
    STATE(57), 1,
      sym__simple_stmt,
  [693] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(69), 3,
      sym__newline,
      sym__dedent,
      anon_sym_SEMI,
  [702] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(112), 3,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [711] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(114), 3,
      sym__newline,
      sym__dedent,
      anon_sym_SEMI,
  [720] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(114), 3,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [729] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(7), 1,
      anon_sym_echo,
    STATE(34), 1,
      sym__simple_stmt,
    STATE(40), 1,
      sym_stmt_echo,
  [742] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(94), 3,
      sym__newline,
      sym__dedent,
      anon_sym_SEMI,
  [751] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(52), 3,
      sym__newline,
      sym__dedent,
      anon_sym_SEMI,
  [760] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 2,
      sym__newline,
      anon_sym_SEMI,
  [771] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(100), 3,
      sym__newline,
      sym__dedent,
      anon_sym_SEMI,
  [780] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(104), 3,
      sym__newline,
      sym__dedent,
      anon_sym_SEMI,
  [789] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(108), 3,
      sym__newline,
      sym__dedent,
      anon_sym_SEMI,
  [798] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(110), 3,
      sym__newline,
      sym__dedent,
      anon_sym_SEMI,
  [807] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(54), 3,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [816] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
  [823] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
  [830] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(110), 1,
      anon_sym_COLON,
  [837] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(122), 1,
      anon_sym_COLON,
  [844] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(124), 1,
      sym__newline,
  [851] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(126), 1,
      anon_sym_else,
  [858] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(108), 1,
      anon_sym_COLON,
  [865] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
  [872] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(130), 1,
      anon_sym_COLON,
  [879] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(132), 1,
      anon_sym_else,
  [886] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(134), 1,
      sym__newline,
  [893] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(136), 1,
      anon_sym_COLON,
  [900] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(138), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 32,
  [SMALL_STATE(5)] = 64,
  [SMALL_STATE(6)] = 96,
  [SMALL_STATE(7)] = 128,
  [SMALL_STATE(8)] = 146,
  [SMALL_STATE(9)] = 165,
  [SMALL_STATE(10)] = 182,
  [SMALL_STATE(11)] = 201,
  [SMALL_STATE(12)] = 216,
  [SMALL_STATE(13)] = 235,
  [SMALL_STATE(14)] = 252,
  [SMALL_STATE(15)] = 271,
  [SMALL_STATE(16)] = 286,
  [SMALL_STATE(17)] = 298,
  [SMALL_STATE(18)] = 312,
  [SMALL_STATE(19)] = 326,
  [SMALL_STATE(20)] = 338,
  [SMALL_STATE(21)] = 350,
  [SMALL_STATE(22)] = 364,
  [SMALL_STATE(23)] = 378,
  [SMALL_STATE(24)] = 390,
  [SMALL_STATE(25)] = 404,
  [SMALL_STATE(26)] = 418,
  [SMALL_STATE(27)] = 430,
  [SMALL_STATE(28)] = 442,
  [SMALL_STATE(29)] = 456,
  [SMALL_STATE(30)] = 470,
  [SMALL_STATE(31)] = 484,
  [SMALL_STATE(32)] = 498,
  [SMALL_STATE(33)] = 512,
  [SMALL_STATE(34)] = 526,
  [SMALL_STATE(35)] = 535,
  [SMALL_STATE(36)] = 544,
  [SMALL_STATE(37)] = 557,
  [SMALL_STATE(38)] = 566,
  [SMALL_STATE(39)] = 577,
  [SMALL_STATE(40)] = 586,
  [SMALL_STATE(41)] = 595,
  [SMALL_STATE(42)] = 604,
  [SMALL_STATE(43)] = 613,
  [SMALL_STATE(44)] = 622,
  [SMALL_STATE(45)] = 631,
  [SMALL_STATE(46)] = 640,
  [SMALL_STATE(47)] = 649,
  [SMALL_STATE(48)] = 658,
  [SMALL_STATE(49)] = 671,
  [SMALL_STATE(50)] = 680,
  [SMALL_STATE(51)] = 693,
  [SMALL_STATE(52)] = 702,
  [SMALL_STATE(53)] = 711,
  [SMALL_STATE(54)] = 720,
  [SMALL_STATE(55)] = 729,
  [SMALL_STATE(56)] = 742,
  [SMALL_STATE(57)] = 751,
  [SMALL_STATE(58)] = 760,
  [SMALL_STATE(59)] = 771,
  [SMALL_STATE(60)] = 780,
  [SMALL_STATE(61)] = 789,
  [SMALL_STATE(62)] = 798,
  [SMALL_STATE(63)] = 807,
  [SMALL_STATE(64)] = 816,
  [SMALL_STATE(65)] = 823,
  [SMALL_STATE(66)] = 830,
  [SMALL_STATE(67)] = 837,
  [SMALL_STATE(68)] = 844,
  [SMALL_STATE(69)] = 851,
  [SMALL_STATE(70)] = 858,
  [SMALL_STATE(71)] = 865,
  [SMALL_STATE(72)] = 872,
  [SMALL_STATE(73)] = 879,
  [SMALL_STATE(74)] = 886,
  [SMALL_STATE(75)] = 893,
  [SMALL_STATE(76)] = 900,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stmt_root, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__stmt_root, 2), SHIFT(6),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_repeat1, 2), SHIFT_REPEAT(50),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stmt_repeat1, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stmt_root, 1),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__stmt_root, 1), SHIFT(6),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stmt_root_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stmt_root_repeat1, 2), SHIFT_REPEAT(6),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stmt_root_repeat1, 2), SHIFT_REPEAT(3),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_repeat1, 2), SHIFT_REPEAT(55),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_stmt, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stmt_cond, 7, .production_id = 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_if, 2, .production_id = 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_echo, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [128] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_nim_external_scanner_create(void);
void tree_sitter_nim_external_scanner_destroy(void *);
bool tree_sitter_nim_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_nim_external_scanner_serialize(void *, char *);
void tree_sitter_nim_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_nim(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_nim_external_scanner_create,
      tree_sitter_nim_external_scanner_destroy,
      tree_sitter_nim_external_scanner_scan,
      tree_sitter_nim_external_scanner_serialize,
      tree_sitter_nim_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
