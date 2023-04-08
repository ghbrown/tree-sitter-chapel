#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SLASH_SLASH = 1,
  anon_sym_proc = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_bool = 5,
  anon_sym_int = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_COLON = 9,
  anon_sym_SEMI = 10,
  anon_sym_EQ = 11,
  anon_sym_param = 12,
  anon_sym_const = 13,
  anon_sym_var = 14,
  anon_sym_ref = 15,
  anon_sym_constref = 16,
  anon_sym_return = 17,
  anon_sym_DOLLAR = 18,
  anon_sym__ = 19,
  sym_anything = 20,
  sym_letter = 21,
  sym_digit = 22,
  sym_number = 23,
  sym_source_file = 24,
  sym__comment = 25,
  sym_inline_comment = 26,
  sym__definition = 27,
  sym_function_definition = 28,
  sym_parameter_list = 29,
  sym__type = 30,
  sym_block = 31,
  sym__statement = 32,
  sym_variable_declaration_statement = 33,
  sym_variable_kind = 34,
  sym_return_statement = 35,
  sym__expression = 36,
  sym_variable_expression = 37,
  sym_identifier = 38,
  sym_legal_identifier_chars = 39,
  sym_letter_or_underscore = 40,
  aux_sym_source_file_repeat1 = 41,
  aux_sym_block_repeat1 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_proc] = "proc",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_bool] = "bool",
  [anon_sym_int] = "int",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_param] = "param",
  [anon_sym_const] = "const",
  [anon_sym_var] = "var",
  [anon_sym_ref] = "ref",
  [anon_sym_constref] = "const ref",
  [anon_sym_return] = "return",
  [anon_sym_DOLLAR] = "$",
  [anon_sym__] = "_",
  [sym_anything] = "anything",
  [sym_letter] = "letter",
  [sym_digit] = "digit",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__comment] = "_comment",
  [sym_inline_comment] = "inline_comment",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym__type] = "_type",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_variable_declaration_statement] = "variable_declaration_statement",
  [sym_variable_kind] = "variable_kind",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [sym_variable_expression] = "variable_expression",
  [sym_identifier] = "identifier",
  [sym_legal_identifier_chars] = "legal_identifier_chars",
  [sym_letter_or_underscore] = "letter_or_underscore",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_proc] = anon_sym_proc,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_param] = anon_sym_param,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_constref] = anon_sym_constref,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym__] = anon_sym__,
  [sym_anything] = sym_anything,
  [sym_letter] = sym_letter,
  [sym_digit] = sym_digit,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__comment] = sym__comment,
  [sym_inline_comment] = sym_inline_comment,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym__type] = sym__type,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_variable_declaration_statement] = sym_variable_declaration_statement,
  [sym_variable_kind] = sym_variable_kind,
  [sym_return_statement] = sym_return_statement,
  [sym__expression] = sym__expression,
  [sym_variable_expression] = sym_variable_expression,
  [sym_identifier] = sym_identifier,
  [sym_legal_identifier_chars] = sym_legal_identifier_chars,
  [sym_letter_or_underscore] = sym_letter_or_underscore,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_proc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_param] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [sym_anything] = {
    .visible = true,
    .named = true,
  },
  [sym_letter] = {
    .visible = true,
    .named = true,
  },
  [sym_digit] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym_inline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_declaration_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_kind] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_legal_identifier_chars] = {
    .visible = true,
    .named = true,
  },
  [sym_letter_or_underscore] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      if (lookahead == '$') ADVANCE(48);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '_') ADVANCE(49);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 1:
      if (lookahead == '/') ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == '_') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'f') ADVANCE(46);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 28:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(19);
      if (lookahead == 'c') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'p') ADVANCE(3);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 'v') ADVANCE(5);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_proc);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_param);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_constref);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_anything);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_anything);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_letter);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_digit);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 29},
  [2] = {.lex_state = 29},
  [3] = {.lex_state = 29},
  [4] = {.lex_state = 29},
  [5] = {.lex_state = 29},
  [6] = {.lex_state = 29},
  [7] = {.lex_state = 29},
  [8] = {.lex_state = 29},
  [9] = {.lex_state = 29},
  [10] = {.lex_state = 29},
  [11] = {.lex_state = 29},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 29},
  [14] = {.lex_state = 29},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 29},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 29},
  [24] = {.lex_state = 29},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 50},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [sym_letter] = ACTIONS(1),
    [sym_digit] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(29),
    [sym__comment] = STATE(3),
    [sym_inline_comment] = STATE(3),
    [sym__definition] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym__statement] = STATE(3),
    [sym_variable_declaration_statement] = STATE(3),
    [sym_variable_kind] = STATE(19),
    [sym_return_statement] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_proc] = ACTIONS(7),
    [anon_sym_param] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(9),
    [anon_sym_ref] = ACTIONS(9),
    [anon_sym_constref] = ACTIONS(9),
    [anon_sym_return] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(20), 1,
      anon_sym_proc,
    ACTIONS(26), 1,
      anon_sym_const,
    ACTIONS(29), 1,
      anon_sym_return,
    STATE(19), 1,
      sym_variable_kind,
    ACTIONS(23), 4,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
    STATE(2), 8,
      sym__comment,
      sym_inline_comment,
      sym__definition,
      sym_function_definition,
      sym__statement,
      sym_variable_declaration_statement,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [35] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_proc,
    ACTIONS(11), 1,
      anon_sym_const,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      sym_variable_kind,
    ACTIONS(9), 4,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
    STATE(2), 8,
      sym__comment,
      sym_inline_comment,
      sym__definition,
      sym_function_definition,
      sym__statement,
      sym_variable_declaration_statement,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [70] = 6,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      anon_sym_const,
    ACTIONS(42), 1,
      anon_sym_return,
    STATE(19), 1,
      sym_variable_kind,
    ACTIONS(36), 4,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
    STATE(4), 4,
      sym__statement,
      sym_variable_declaration_statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [95] = 6,
    ACTIONS(11), 1,
      anon_sym_const,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_variable_kind,
    ACTIONS(9), 4,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
    STATE(4), 4,
      sym__statement,
      sym_variable_declaration_statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [120] = 6,
    ACTIONS(11), 1,
      anon_sym_const,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_variable_kind,
    ACTIONS(9), 4,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
    STATE(5), 4,
      sym__statement,
      sym_variable_declaration_statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [145] = 2,
    ACTIONS(51), 1,
      anon_sym_const,
    ACTIONS(49), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_proc,
      anon_sym_RBRACE,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
      anon_sym_return,
  [160] = 2,
    ACTIONS(55), 1,
      anon_sym_const,
    ACTIONS(53), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_proc,
      anon_sym_RBRACE,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
      anon_sym_return,
  [175] = 2,
    ACTIONS(59), 1,
      anon_sym_const,
    ACTIONS(57), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_proc,
      anon_sym_RBRACE,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
      anon_sym_return,
  [190] = 2,
    ACTIONS(63), 1,
      anon_sym_const,
    ACTIONS(61), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_proc,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
      anon_sym_return,
  [204] = 2,
    ACTIONS(67), 1,
      anon_sym_const,
    ACTIONS(65), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_proc,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
      anon_sym_return,
  [218] = 5,
    STATE(21), 1,
      sym_letter_or_underscore,
    STATE(22), 1,
      sym_legal_identifier_chars,
    ACTIONS(71), 2,
      anon_sym_DOLLAR,
      sym_digit,
    ACTIONS(73), 2,
      anon_sym__,
      sym_letter,
    ACTIONS(69), 3,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
  [238] = 2,
    ACTIONS(77), 1,
      anon_sym_const,
    ACTIONS(75), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_proc,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
      anon_sym_return,
  [252] = 2,
    ACTIONS(81), 1,
      anon_sym_const,
    ACTIONS(79), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_proc,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
      anon_sym_return,
  [266] = 5,
    ACTIONS(83), 1,
      sym_number,
    STATE(12), 1,
      sym_letter_or_underscore,
    STATE(34), 1,
      sym_identifier,
    ACTIONS(73), 2,
      anon_sym__,
      sym_letter,
    STATE(35), 2,
      sym__expression,
      sym_variable_expression,
  [284] = 5,
    ACTIONS(85), 1,
      sym_number,
    STATE(12), 1,
      sym_letter_or_underscore,
    STATE(34), 1,
      sym_identifier,
    ACTIONS(73), 2,
      anon_sym__,
      sym_letter,
    STATE(33), 2,
      sym__expression,
      sym_variable_expression,
  [302] = 1,
    ACTIONS(87), 7,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym__,
      sym_letter,
      sym_digit,
  [312] = 3,
    STATE(12), 1,
      sym_letter_or_underscore,
    STATE(27), 1,
      sym_identifier,
    ACTIONS(73), 2,
      anon_sym__,
      sym_letter,
  [323] = 3,
    STATE(12), 1,
      sym_letter_or_underscore,
    STATE(32), 1,
      sym_identifier,
    ACTIONS(73), 2,
      anon_sym__,
      sym_letter,
  [334] = 2,
    STATE(26), 1,
      sym__type,
    ACTIONS(89), 2,
      anon_sym_bool,
      anon_sym_int,
  [342] = 1,
    ACTIONS(91), 3,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
  [348] = 1,
    ACTIONS(93), 3,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
  [354] = 2,
    STATE(25), 1,
      sym__type,
    ACTIONS(95), 2,
      anon_sym_bool,
      anon_sym_int,
  [362] = 1,
    ACTIONS(97), 2,
      anon_sym_bool,
      anon_sym_int,
  [367] = 2,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    ACTIONS(101), 1,
      anon_sym_EQ,
  [374] = 2,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_block,
  [381] = 2,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_parameter_list,
  [388] = 1,
    ACTIONS(107), 2,
      anon_sym__,
      sym_letter,
  [393] = 1,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
  [397] = 1,
    ACTIONS(111), 1,
      sym_anything,
  [401] = 1,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
  [405] = 1,
    ACTIONS(115), 1,
      anon_sym_COLON,
  [409] = 1,
    ACTIONS(117), 1,
      anon_sym_SEMI,
  [413] = 1,
    ACTIONS(119), 1,
      anon_sym_SEMI,
  [417] = 1,
    ACTIONS(121), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 95,
  [SMALL_STATE(6)] = 120,
  [SMALL_STATE(7)] = 145,
  [SMALL_STATE(8)] = 160,
  [SMALL_STATE(9)] = 175,
  [SMALL_STATE(10)] = 190,
  [SMALL_STATE(11)] = 204,
  [SMALL_STATE(12)] = 218,
  [SMALL_STATE(13)] = 238,
  [SMALL_STATE(14)] = 252,
  [SMALL_STATE(15)] = 266,
  [SMALL_STATE(16)] = 284,
  [SMALL_STATE(17)] = 302,
  [SMALL_STATE(18)] = 312,
  [SMALL_STATE(19)] = 323,
  [SMALL_STATE(20)] = 334,
  [SMALL_STATE(21)] = 342,
  [SMALL_STATE(22)] = 348,
  [SMALL_STATE(23)] = 354,
  [SMALL_STATE(24)] = 362,
  [SMALL_STATE(25)] = 367,
  [SMALL_STATE(26)] = 374,
  [SMALL_STATE(27)] = 381,
  [SMALL_STATE(28)] = 388,
  [SMALL_STATE(29)] = 393,
  [SMALL_STATE(30)] = 397,
  [SMALL_STATE(31)] = 401,
  [SMALL_STATE(32)] = 405,
  [SMALL_STATE(33)] = 409,
  [SMALL_STATE(34)] = 413,
  [SMALL_STATE(35)] = 417,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(28),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(28),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_statement, 7),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration_statement, 7),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_statement, 5),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration_statement, 5),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letter_or_underscore, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legal_identifier_chars, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_kind, 1),
  [109] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expression, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Chapel(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
