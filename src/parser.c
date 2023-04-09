#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 47
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 0
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SLASH_SLASH = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_private = 4,
  anon_sym_public = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_SEMI = 8,
  anon_sym_COMMA = 9,
  anon_sym_COLON = 10,
  anon_sym_EQ = 11,
  anon_sym_void = 12,
  anon_sym_nothing = 13,
  anon_sym_bool = 14,
  anon_sym_int = 15,
  anon_sym_uint = 16,
  anon_sym_real = 17,
  anon_sym_imag = 18,
  anon_sym_complex = 19,
  anon_sym_string = 20,
  anon_sym_bytes = 21,
  anon_sym_enum = 22,
  anon_sym_record = 23,
  anon_sym_class = 24,
  anon_sym_owned = 25,
  anon_sym_shared = 26,
  anon_sym_unmanaged = 27,
  anon_sym_borrowed = 28,
  anon_sym_param = 29,
  anon_sym_const = 30,
  anon_sym_var = 31,
  anon_sym_ref = 32,
  anon_sym_constref = 33,
  anon_sym_return = 34,
  anon_sym__ = 35,
  sym__anything = 36,
  sym__letter = 37,
  sym__digit = 38,
  sym__binary_digit = 39,
  sym__number = 40,
  anon_sym_PLUS_EQ = 41,
  anon_sym_DASH_EQ = 42,
  anon_sym_STAR_EQ = 43,
  anon_sym_SLASH_EQ = 44,
  anon_sym_PERCENT_EQ = 45,
  anon_sym_STAR_STAR_EQ = 46,
  anon_sym_AMP_EQ = 47,
  anon_sym_PIPE_EQ = 48,
  anon_sym_CARET_EQ = 49,
  anon_sym_AMP_AMP_EQ = 50,
  anon_sym_PIPE_PIPE_EQ = 51,
  anon_sym_LT_LT_EQ = 52,
  anon_sym_GT_GT_EQ = 53,
  sym_source_file = 54,
  sym__comment = 55,
  sym_inline_comment = 56,
  sym_privacy_specifier = 57,
  sym__statement = 58,
  sym_block_statement = 59,
  sym_expression_statement = 60,
  sym_statements = 61,
  sym_variable_declaration_statement = 62,
  sym_variable_declaration_list = 63,
  sym_variable_declaration = 64,
  sym_type_part = 65,
  sym_initialization_part = 66,
  sym__expression = 67,
  sym_variable_expression = 68,
  sym_type_expression = 69,
  sym_primitive_type = 70,
  sym_variable_kind = 71,
  sym_return_statement = 72,
  sym_identifier = 73,
  sym_identifier_list = 74,
  sym__legal_identifier_chars = 75,
  sym__letter_or_underscore = 76,
  aux_sym_source_file_repeat1 = 77,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_private] = "private",
  [anon_sym_public] = "public",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_void] = "void",
  [anon_sym_nothing] = "nothing",
  [anon_sym_bool] = "bool",
  [anon_sym_int] = "int",
  [anon_sym_uint] = "uint",
  [anon_sym_real] = "real",
  [anon_sym_imag] = "imag",
  [anon_sym_complex] = "complex",
  [anon_sym_string] = "string",
  [anon_sym_bytes] = "bytes",
  [anon_sym_enum] = "enum",
  [anon_sym_record] = "record",
  [anon_sym_class] = "class",
  [anon_sym_owned] = "owned",
  [anon_sym_shared] = "shared",
  [anon_sym_unmanaged] = "unmanaged",
  [anon_sym_borrowed] = "borrowed",
  [anon_sym_param] = "param",
  [anon_sym_const] = "const",
  [anon_sym_var] = "var",
  [anon_sym_ref] = "ref",
  [anon_sym_constref] = "const ref",
  [anon_sym_return] = "return",
  [anon_sym__] = "_",
  [sym__anything] = "_anything",
  [sym__letter] = "_letter",
  [sym__digit] = "_digit",
  [sym__binary_digit] = "_binary_digit",
  [sym__number] = "_number",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_STAR_STAR_EQ] = "**=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_AMP_AMP_EQ] = "&&=",
  [anon_sym_PIPE_PIPE_EQ] = "||=",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_GT_GT_EQ] = ">>=",
  [sym_source_file] = "source_file",
  [sym__comment] = "_comment",
  [sym_inline_comment] = "inline_comment",
  [sym_privacy_specifier] = "privacy_specifier",
  [sym__statement] = "_statement",
  [sym_block_statement] = "block_statement",
  [sym_expression_statement] = "expression_statement",
  [sym_statements] = "statements",
  [sym_variable_declaration_statement] = "variable_declaration_statement",
  [sym_variable_declaration_list] = "variable_declaration_list",
  [sym_variable_declaration] = "variable_declaration",
  [sym_type_part] = "type_part",
  [sym_initialization_part] = "initialization_part",
  [sym__expression] = "_expression",
  [sym_variable_expression] = "variable_expression",
  [sym_type_expression] = "type_expression",
  [sym_primitive_type] = "primitive_type",
  [sym_variable_kind] = "variable_kind",
  [sym_return_statement] = "return_statement",
  [sym_identifier] = "identifier",
  [sym_identifier_list] = "identifier_list",
  [sym__legal_identifier_chars] = "_legal_identifier_chars",
  [sym__letter_or_underscore] = "_letter_or_underscore",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_nothing] = anon_sym_nothing,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_uint] = anon_sym_uint,
  [anon_sym_real] = anon_sym_real,
  [anon_sym_imag] = anon_sym_imag,
  [anon_sym_complex] = anon_sym_complex,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_owned] = anon_sym_owned,
  [anon_sym_shared] = anon_sym_shared,
  [anon_sym_unmanaged] = anon_sym_unmanaged,
  [anon_sym_borrowed] = anon_sym_borrowed,
  [anon_sym_param] = anon_sym_param,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_constref] = anon_sym_constref,
  [anon_sym_return] = anon_sym_return,
  [anon_sym__] = anon_sym__,
  [sym__anything] = sym__anything,
  [sym__letter] = sym__letter,
  [sym__digit] = sym__digit,
  [sym__binary_digit] = sym__binary_digit,
  [sym__number] = sym__number,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_STAR_STAR_EQ] = anon_sym_STAR_STAR_EQ,
  [anon_sym_AMP_EQ] = anon_sym_AMP_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_AMP_AMP_EQ] = anon_sym_AMP_AMP_EQ,
  [anon_sym_PIPE_PIPE_EQ] = anon_sym_PIPE_PIPE_EQ,
  [anon_sym_LT_LT_EQ] = anon_sym_LT_LT_EQ,
  [anon_sym_GT_GT_EQ] = anon_sym_GT_GT_EQ,
  [sym_source_file] = sym_source_file,
  [sym__comment] = sym__comment,
  [sym_inline_comment] = sym_inline_comment,
  [sym_privacy_specifier] = sym_privacy_specifier,
  [sym__statement] = sym__statement,
  [sym_block_statement] = sym_block_statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym_statements] = sym_statements,
  [sym_variable_declaration_statement] = sym_variable_declaration_statement,
  [sym_variable_declaration_list] = sym_variable_declaration_list,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_type_part] = sym_type_part,
  [sym_initialization_part] = sym_initialization_part,
  [sym__expression] = sym__expression,
  [sym_variable_expression] = sym_variable_expression,
  [sym_type_expression] = sym_type_expression,
  [sym_primitive_type] = sym_primitive_type,
  [sym_variable_kind] = sym_variable_kind,
  [sym_return_statement] = sym_return_statement,
  [sym_identifier] = sym_identifier,
  [sym_identifier_list] = sym_identifier_list,
  [sym__legal_identifier_chars] = sym__legal_identifier_chars,
  [sym__letter_or_underscore] = sym__letter_or_underscore,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nothing] = {
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
  [anon_sym_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_real] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_imag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_complex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_record] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_owned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shared] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unmanaged] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_borrowed] = {
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
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [sym__anything] = {
    .visible = false,
    .named = true,
  },
  [sym__letter] = {
    .visible = false,
    .named = true,
  },
  [sym__digit] = {
    .visible = false,
    .named = true,
  },
  [sym__binary_digit] = {
    .visible = false,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_EQ] = {
    .visible = true,
    .named = false,
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
  [sym_privacy_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_block_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_statements] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration_list] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_part] = {
    .visible = true,
    .named = true,
  },
  [sym_initialization_part] = {
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
  [sym_type_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_list] = {
    .visible = true,
    .named = true,
  },
  [sym__legal_identifier_chars] = {
    .visible = false,
    .named = true,
  },
  [sym__letter_or_underscore] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(100);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == '>') ADVANCE(18);
      if (lookahead == '^') ADVANCE(11);
      if (lookahead == '_') ADVANCE(135);
      if (lookahead == 'b') ADVANCE(151);
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'n') ADVANCE(153);
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead == 'p') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(142);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead == 'u') ADVANCE(146);
      if (lookahead == 'v') ADVANCE(141);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '|') ADVANCE(12);
      if (lookahead == '}') ADVANCE(107);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 1:
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '=') ADVANCE(164);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '=') ADVANCE(160);
      END_STATE();
    case 3:
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == '_') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(101);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == '=') ADVANCE(161);
      END_STATE();
    case 6:
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '_') ADVANCE(135);
      if (lookahead == 'b') ADVANCE(151);
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'n') ADVANCE(153);
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead == 'r') ADVANCE(144);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead == 'u') ADVANCE(146);
      if (lookahead == 'v') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 7:
      if (lookahead == '<') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(162);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(158);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(159);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(166);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(165);
      if (lookahead == '|') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(167);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(163);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(169);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(170);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(168);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(59);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 44:
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 45:
      if (lookahead == 'f') ADVANCE(133);
      END_STATE();
    case 46:
      if (lookahead == 'g') ADVANCE(118);
      END_STATE();
    case 47:
      if (lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(113);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 50:
      if (lookahead == 'h') ADVANCE(55);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(129);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 94:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 95:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 96:
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 97:
      if (lookahead == 'w') ADVANCE(42);
      END_STATE();
    case 98:
      if (lookahead == 'x') ADVANCE(119);
      END_STATE();
    case 99:
      if (eof) ADVANCE(100);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '_') ADVANCE(135);
      if (lookahead == 'c') ADVANCE(154);
      if (lookahead == 'p') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == 'v') ADVANCE(140);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '}') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(99)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_nothing);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_real);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_imag);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_complex);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_owned);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_shared);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_unmanaged);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_borrowed);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_param);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_constref);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__anything);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__anything);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__letter);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'h') ADVANCE(26);
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'm') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == 'y') ADVANCE(88);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'w') ADVANCE(66);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__digit);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__number);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_EQ);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_AMP_AMP_EQ);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE_EQ);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 99},
  [2] = {.lex_state = 99},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 99},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 99},
  [8] = {.lex_state = 99},
  [9] = {.lex_state = 99},
  [10] = {.lex_state = 99},
  [11] = {.lex_state = 99},
  [12] = {.lex_state = 99},
  [13] = {.lex_state = 99},
  [14] = {.lex_state = 99},
  [15] = {.lex_state = 99},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 136},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_nothing] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_uint] = ACTIONS(1),
    [anon_sym_real] = ACTIONS(1),
    [anon_sym_imag] = ACTIONS(1),
    [anon_sym_complex] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_owned] = ACTIONS(1),
    [anon_sym_shared] = ACTIONS(1),
    [anon_sym_unmanaged] = ACTIONS(1),
    [anon_sym_borrowed] = ACTIONS(1),
    [anon_sym_param] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_constref] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [sym__letter] = ACTIONS(1),
    [sym__digit] = ACTIONS(1),
    [sym__binary_digit] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP_EQ] = ACTIONS(1),
    [anon_sym_PIPE_PIPE_EQ] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(45),
    [sym__comment] = STATE(4),
    [sym_inline_comment] = STATE(4),
    [sym_privacy_specifier] = STATE(21),
    [sym__statement] = STATE(4),
    [sym_block_statement] = STATE(4),
    [sym_expression_statement] = STATE(4),
    [sym_variable_declaration_statement] = STATE(4),
    [sym_variable_expression] = STATE(44),
    [sym_variable_kind] = STATE(18),
    [sym_return_statement] = STATE(4),
    [sym_identifier] = STATE(29),
    [sym__letter_or_underscore] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(7),
    [anon_sym_public] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_param] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(13),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_constref] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym__] = ACTIONS(17),
    [sym__letter] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_const,
    ACTIONS(38), 1,
      anon_sym_return,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(44), 1,
      sym__letter,
    STATE(16), 1,
      sym__letter_or_underscore,
    STATE(18), 1,
      sym_variable_kind,
    STATE(21), 1,
      sym_privacy_specifier,
    STATE(29), 1,
      sym_identifier,
    STATE(44), 1,
      sym_variable_expression,
    ACTIONS(26), 2,
      anon_sym_private,
      anon_sym_public,
    ACTIONS(32), 4,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
    STATE(2), 8,
      sym__comment,
      sym_inline_comment,
      sym__statement,
      sym_block_statement,
      sym_expression_statement,
      sym_variable_declaration_statement,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [57] = 8,
    ACTIONS(17), 1,
      anon_sym__,
    ACTIONS(19), 1,
      sym__letter,
    ACTIONS(47), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      sym__letter_or_underscore,
    STATE(29), 1,
      sym_identifier,
    STATE(30), 1,
      sym_primitive_type,
    STATE(42), 3,
      sym__expression,
      sym_variable_expression,
      sym_type_expression,
    ACTIONS(49), 17,
      anon_sym_void,
      anon_sym_nothing,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_real,
      anon_sym_imag,
      anon_sym_complex,
      anon_sym_string,
      anon_sym_bytes,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_class,
      anon_sym_owned,
      anon_sym_shared,
      anon_sym_unmanaged,
      anon_sym_borrowed,
  [100] = 15,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      anon_sym__,
    ACTIONS(19), 1,
      sym__letter,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym__letter_or_underscore,
    STATE(18), 1,
      sym_variable_kind,
    STATE(21), 1,
      sym_privacy_specifier,
    STATE(29), 1,
      sym_identifier,
    STATE(44), 1,
      sym_variable_expression,
    ACTIONS(7), 2,
      anon_sym_private,
      anon_sym_public,
    ACTIONS(11), 4,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
    STATE(2), 8,
      sym__comment,
      sym_inline_comment,
      sym__statement,
      sym_block_statement,
      sym_expression_statement,
      sym_variable_declaration_statement,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [157] = 7,
    ACTIONS(17), 1,
      anon_sym__,
    ACTIONS(19), 1,
      sym__letter,
    STATE(16), 1,
      sym__letter_or_underscore,
    STATE(29), 1,
      sym_identifier,
    STATE(32), 1,
      sym_type_expression,
    STATE(30), 3,
      sym__expression,
      sym_variable_expression,
      sym_primitive_type,
    ACTIONS(49), 17,
      anon_sym_void,
      anon_sym_nothing,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_real,
      anon_sym_imag,
      anon_sym_complex,
      anon_sym_string,
      anon_sym_bytes,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_class,
      anon_sym_owned,
      anon_sym_shared,
      anon_sym_unmanaged,
      anon_sym_borrowed,
  [197] = 7,
    ACTIONS(17), 1,
      anon_sym__,
    ACTIONS(19), 1,
      sym__letter,
    STATE(16), 1,
      sym__letter_or_underscore,
    STATE(29), 1,
      sym_identifier,
    STATE(30), 1,
      sym_primitive_type,
    STATE(36), 3,
      sym__expression,
      sym_variable_expression,
      sym_type_expression,
    ACTIONS(49), 17,
      anon_sym_void,
      anon_sym_nothing,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_real,
      anon_sym_imag,
      anon_sym_complex,
      anon_sym_string,
      anon_sym_bytes,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_class,
      anon_sym_owned,
      anon_sym_shared,
      anon_sym_unmanaged,
      anon_sym_borrowed,
  [237] = 15,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      anon_sym__,
    ACTIONS(19), 1,
      sym__letter,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym__letter_or_underscore,
    STATE(18), 1,
      sym_variable_kind,
    STATE(21), 1,
      sym_privacy_specifier,
    STATE(29), 1,
      sym_identifier,
    STATE(43), 1,
      sym_statements,
    STATE(44), 1,
      sym_variable_expression,
    ACTIONS(7), 2,
      anon_sym_private,
      anon_sym_public,
    ACTIONS(11), 4,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
    STATE(8), 5,
      sym__statement,
      sym_block_statement,
      sym_expression_statement,
      sym_variable_declaration_statement,
      sym_return_statement,
  [291] = 15,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      anon_sym__,
    ACTIONS(19), 1,
      sym__letter,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym__letter_or_underscore,
    STATE(18), 1,
      sym_variable_kind,
    STATE(21), 1,
      sym_privacy_specifier,
    STATE(29), 1,
      sym_identifier,
    STATE(39), 1,
      sym_statements,
    STATE(44), 1,
      sym_variable_expression,
    ACTIONS(7), 2,
      anon_sym_private,
      anon_sym_public,
    ACTIONS(11), 4,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
    STATE(8), 5,
      sym__statement,
      sym_block_statement,
      sym_expression_statement,
      sym_variable_declaration_statement,
      sym_return_statement,
  [345] = 2,
    ACTIONS(59), 2,
      anon_sym_const,
      sym__letter,
    ACTIONS(57), 12,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_private,
      anon_sym_public,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
      anon_sym_return,
      anon_sym__,
  [364] = 2,
    ACTIONS(63), 2,
      anon_sym_const,
      sym__letter,
    ACTIONS(61), 12,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_private,
      anon_sym_public,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
      anon_sym_return,
      anon_sym__,
  [383] = 2,
    ACTIONS(67), 2,
      anon_sym_const,
      sym__letter,
    ACTIONS(65), 12,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_private,
      anon_sym_public,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
      anon_sym_return,
      anon_sym__,
  [402] = 2,
    ACTIONS(71), 2,
      anon_sym_const,
      sym__letter,
    ACTIONS(69), 12,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_private,
      anon_sym_public,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
      anon_sym_return,
      anon_sym__,
  [421] = 2,
    ACTIONS(75), 2,
      anon_sym_const,
      sym__letter,
    ACTIONS(73), 12,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_private,
      anon_sym_public,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
      anon_sym_return,
      anon_sym__,
  [440] = 2,
    ACTIONS(79), 2,
      anon_sym_const,
      sym__letter,
    ACTIONS(77), 12,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_private,
      anon_sym_public,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
      anon_sym_return,
      anon_sym__,
  [459] = 2,
    ACTIONS(83), 2,
      anon_sym_const,
      sym__letter,
    ACTIONS(81), 11,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_private,
      anon_sym_public,
      anon_sym_LBRACE,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
      anon_sym_return,
      anon_sym__,
  [477] = 4,
    STATE(17), 1,
      sym__letter_or_underscore,
    STATE(28), 1,
      sym__legal_identifier_chars,
    ACTIONS(87), 2,
      anon_sym__,
      sym__letter,
    ACTIONS(85), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [494] = 4,
    STATE(17), 1,
      sym__letter_or_underscore,
    STATE(26), 1,
      sym__legal_identifier_chars,
    ACTIONS(87), 2,
      anon_sym__,
      sym__letter,
    ACTIONS(89), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [511] = 6,
    STATE(16), 1,
      sym__letter_or_underscore,
    STATE(22), 1,
      sym_identifier_list,
    STATE(27), 1,
      sym_identifier,
    STATE(33), 1,
      sym_variable_declaration,
    STATE(38), 1,
      sym_variable_declaration_list,
    ACTIONS(17), 2,
      anon_sym__,
      sym__letter,
  [531] = 6,
    STATE(16), 1,
      sym__letter_or_underscore,
    STATE(22), 1,
      sym_identifier_list,
    STATE(27), 1,
      sym_identifier,
    STATE(33), 1,
      sym_variable_declaration,
    STATE(46), 1,
      sym_variable_declaration_list,
    ACTIONS(17), 2,
      anon_sym__,
      sym__letter,
  [551] = 6,
    STATE(16), 1,
      sym__letter_or_underscore,
    STATE(22), 1,
      sym_identifier_list,
    STATE(27), 1,
      sym_identifier,
    STATE(33), 1,
      sym_variable_declaration,
    STATE(40), 1,
      sym_variable_declaration_list,
    ACTIONS(17), 2,
      anon_sym__,
      sym__letter,
  [571] = 3,
    ACTIONS(13), 1,
      anon_sym_const,
    STATE(20), 1,
      sym_variable_kind,
    ACTIONS(11), 4,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
  [584] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON,
    ACTIONS(95), 1,
      anon_sym_EQ,
    STATE(25), 1,
      sym_type_part,
    STATE(34), 1,
      sym_initialization_part,
    ACTIONS(91), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [601] = 2,
    ACTIONS(99), 1,
      anon_sym_const,
    ACTIONS(97), 4,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
  [611] = 1,
    ACTIONS(101), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [618] = 3,
    ACTIONS(95), 1,
      anon_sym_EQ,
    STATE(37), 1,
      sym_initialization_part,
    ACTIONS(103), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [629] = 1,
    ACTIONS(105), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [636] = 1,
    ACTIONS(107), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [643] = 1,
    ACTIONS(109), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [650] = 1,
    ACTIONS(111), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [656] = 1,
    ACTIONS(113), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [662] = 1,
    ACTIONS(115), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [668] = 1,
    ACTIONS(117), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [674] = 2,
    ACTIONS(119), 1,
      anon_sym_SEMI,
    ACTIONS(121), 1,
      anon_sym_COMMA,
  [681] = 1,
    ACTIONS(103), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [686] = 1,
    ACTIONS(123), 2,
      anon_sym__,
      sym__letter,
  [691] = 1,
    ACTIONS(125), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [696] = 1,
    ACTIONS(127), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [701] = 1,
    ACTIONS(129), 1,
      anon_sym_SEMI,
  [705] = 1,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
  [709] = 1,
    ACTIONS(133), 1,
      anon_sym_SEMI,
  [713] = 1,
    ACTIONS(135), 1,
      sym__anything,
  [717] = 1,
    ACTIONS(113), 1,
      anon_sym_SEMI,
  [721] = 1,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
  [725] = 1,
    ACTIONS(139), 1,
      anon_sym_SEMI,
  [729] = 1,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
  [733] = 1,
    ACTIONS(143), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 157,
  [SMALL_STATE(6)] = 197,
  [SMALL_STATE(7)] = 237,
  [SMALL_STATE(8)] = 291,
  [SMALL_STATE(9)] = 345,
  [SMALL_STATE(10)] = 364,
  [SMALL_STATE(11)] = 383,
  [SMALL_STATE(12)] = 402,
  [SMALL_STATE(13)] = 421,
  [SMALL_STATE(14)] = 440,
  [SMALL_STATE(15)] = 459,
  [SMALL_STATE(16)] = 477,
  [SMALL_STATE(17)] = 494,
  [SMALL_STATE(18)] = 511,
  [SMALL_STATE(19)] = 531,
  [SMALL_STATE(20)] = 551,
  [SMALL_STATE(21)] = 571,
  [SMALL_STATE(22)] = 584,
  [SMALL_STATE(23)] = 601,
  [SMALL_STATE(24)] = 611,
  [SMALL_STATE(25)] = 618,
  [SMALL_STATE(26)] = 629,
  [SMALL_STATE(27)] = 636,
  [SMALL_STATE(28)] = 643,
  [SMALL_STATE(29)] = 650,
  [SMALL_STATE(30)] = 656,
  [SMALL_STATE(31)] = 662,
  [SMALL_STATE(32)] = 668,
  [SMALL_STATE(33)] = 674,
  [SMALL_STATE(34)] = 681,
  [SMALL_STATE(35)] = 686,
  [SMALL_STATE(36)] = 691,
  [SMALL_STATE(37)] = 696,
  [SMALL_STATE(38)] = 701,
  [SMALL_STATE(39)] = 705,
  [SMALL_STATE(40)] = 709,
  [SMALL_STATE(41)] = 713,
  [SMALL_STATE(42)] = 717,
  [SMALL_STATE(43)] = 721,
  [SMALL_STATE(44)] = 725,
  [SMALL_STATE(45)] = 729,
  [SMALL_STATE(46)] = 733,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_statement, 4),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration_statement, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_statement, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration_statement, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legal_identifier_chars, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privacy_specifier, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_privacy_specifier, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legal_identifier_chars, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expression, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_part, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_list, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_kind, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initialization_part, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [141] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_list, 3),
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
