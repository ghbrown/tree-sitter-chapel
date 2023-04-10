#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 84
#define ALIAS_COUNT 0
#define TOKEN_COUNT 55
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
  anon_sym_true = 12,
  anon_sym_false = 13,
  anon_sym_void = 14,
  anon_sym_nothing = 15,
  anon_sym_bool = 16,
  anon_sym_int = 17,
  anon_sym_uint = 18,
  anon_sym_real = 19,
  anon_sym_imag = 20,
  anon_sym_complex = 21,
  anon_sym_string = 22,
  anon_sym_bytes = 23,
  anon_sym_enum = 24,
  anon_sym_record = 25,
  anon_sym_class = 26,
  anon_sym_owned = 27,
  anon_sym_shared = 28,
  anon_sym_unmanaged = 29,
  anon_sym_borrowed = 30,
  anon_sym_param = 31,
  anon_sym_const = 32,
  anon_sym_var = 33,
  anon_sym_ref = 34,
  anon_sym_constref = 35,
  anon_sym_return = 36,
  anon_sym__ = 37,
  sym__anything = 38,
  sym__letter = 39,
  sym__digit = 40,
  sym__binary_digit = 41,
  anon_sym_PLUS_EQ = 42,
  anon_sym_DASH_EQ = 43,
  anon_sym_STAR_EQ = 44,
  anon_sym_SLASH_EQ = 45,
  anon_sym_PERCENT_EQ = 46,
  anon_sym_STAR_STAR_EQ = 47,
  anon_sym_AMP_EQ = 48,
  anon_sym_PIPE_EQ = 49,
  anon_sym_CARET_EQ = 50,
  anon_sym_AMP_AMP_EQ = 51,
  anon_sym_PIPE_PIPE_EQ = 52,
  anon_sym_LT_LT_EQ = 53,
  anon_sym_GT_GT_EQ = 54,
  sym_source_file = 55,
  sym__comment = 56,
  sym_inline_comment = 57,
  sym_privacy_specifier = 58,
  sym__statement = 59,
  sym_block_statement = 60,
  sym_expression_statement = 61,
  sym_statements = 62,
  sym_variable_declaration_statement = 63,
  sym_variable_declaration_list = 64,
  sym_variable_declaration = 65,
  sym_type_part = 66,
  sym_initialization_part = 67,
  sym__expression = 68,
  sym_literal_expression = 69,
  sym_variable_expression = 70,
  sym_type_expression = 71,
  sym_bool_literal = 72,
  sym_integer_literal = 73,
  sym_primitive_type = 74,
  sym_variable_kind = 75,
  sym_return_statement = 76,
  sym_identifier = 77,
  sym_identifier_list = 78,
  sym__legal_identifier_chars = 79,
  sym__letter_or_underscore = 80,
  sym__digits = 81,
  sym__separator_digits = 82,
  aux_sym_source_file_repeat1 = 83,
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
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
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
  [sym_literal_expression] = "literal_expression",
  [sym_variable_expression] = "variable_expression",
  [sym_type_expression] = "type_expression",
  [sym_bool_literal] = "bool_literal",
  [sym_integer_literal] = "integer_literal",
  [sym_primitive_type] = "primitive_type",
  [sym_variable_kind] = "variable_kind",
  [sym_return_statement] = "return_statement",
  [sym_identifier] = "identifier",
  [sym_identifier_list] = "identifier_list",
  [sym__legal_identifier_chars] = "_legal_identifier_chars",
  [sym__letter_or_underscore] = "_letter_or_underscore",
  [sym__digits] = "_digits",
  [sym__separator_digits] = "_separator_digits",
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
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
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
  [sym_literal_expression] = sym_literal_expression,
  [sym_variable_expression] = sym_variable_expression,
  [sym_type_expression] = sym_type_expression,
  [sym_bool_literal] = sym_bool_literal,
  [sym_integer_literal] = sym_integer_literal,
  [sym_primitive_type] = sym_primitive_type,
  [sym_variable_kind] = sym_variable_kind,
  [sym_return_statement] = sym_return_statement,
  [sym_identifier] = sym_identifier,
  [sym_identifier_list] = sym_identifier_list,
  [sym__legal_identifier_chars] = sym__legal_identifier_chars,
  [sym__letter_or_underscore] = sym__letter_or_underscore,
  [sym__digits] = sym__digits,
  [sym__separator_digits] = sym__separator_digits,
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
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
  [sym_literal_expression] = {
    .visible = true,
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
  [sym_bool_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
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
  [sym__digits] = {
    .visible = false,
    .named = true,
  },
  [sym__separator_digits] = {
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
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(105);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == ',') ADVANCE(114);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(115);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead == '=') ADVANCE(116);
      if (lookahead == '>') ADVANCE(18);
      if (lookahead == '^') ADVANCE(11);
      if (lookahead == '_') ADVANCE(142);
      if (lookahead == 'b') ADVANCE(159);
      if (lookahead == 'c') ADVANCE(155);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == 'p') ADVANCE(147);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == 'u') ADVANCE(154);
      if (lookahead == 'v') ADVANCE(149);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '|') ADVANCE(12);
      if (lookahead == '}') ADVANCE(112);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 1:
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '=') ADVANCE(172);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '=') ADVANCE(168);
      END_STATE();
    case 3:
      if (lookahead == ',') ADVANCE(114);
      if (lookahead == ':') ADVANCE(115);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '=') ADVANCE(116);
      if (lookahead == '_') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(106);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == '=') ADVANCE(169);
      END_STATE();
    case 6:
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '_') ADVANCE(142);
      if (lookahead == 'b') ADVANCE(159);
      if (lookahead == 'c') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == 'r') ADVANCE(152);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == 'u') ADVANCE(154);
      if (lookahead == 'v') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 7:
      if (lookahead == '<') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(170);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(166);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(167);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(174);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(173);
      if (lookahead == '|') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(175);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(171);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(177);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(178);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(176);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(61);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(140);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(127);
      END_STATE();
    case 50:
      if (lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(45);
      END_STATE();
    case 52:
      if (lookahead == 'h') ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 65:
      if (lookahead == 'm') ADVANCE(129);
      END_STATE();
    case 66:
      if (lookahead == 'm') ADVANCE(136);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 78:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 100:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 101:
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 102:
      if (lookahead == 'w') ADVANCE(44);
      END_STATE();
    case 103:
      if (lookahead == 'x') ADVANCE(126);
      END_STATE();
    case 104:
      if (eof) ADVANCE(105);
      if (lookahead == ',') ADVANCE(114);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '=') ADVANCE(116);
      if (lookahead == '_') ADVANCE(142);
      if (lookahead == 'c') ADVANCE(162);
      if (lookahead == 'p') ADVANCE(147);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead == 'v') ADVANCE(148);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '}') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(104)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_nothing);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_real);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_imag);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_complex);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_owned);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_shared);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_unmanaged);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_borrowed);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_param);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == ' ') ADVANCE(85);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_constref);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__anything);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__anything);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__letter);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'h') ADVANCE(26);
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'm') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'o') ADVANCE(76);
      if (lookahead == 'y') ADVANCE(92);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'w') ADVANCE(69);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__digit);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_EQ);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_AMP_AMP_EQ);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE_EQ);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 104},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 104},
  [6] = {.lex_state = 104},
  [7] = {.lex_state = 104},
  [8] = {.lex_state = 104},
  [9] = {.lex_state = 104},
  [10] = {.lex_state = 104},
  [11] = {.lex_state = 104},
  [12] = {.lex_state = 104},
  [13] = {.lex_state = 104},
  [14] = {.lex_state = 104},
  [15] = {.lex_state = 104},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 104},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 104},
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
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 143},
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
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
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
    [sym_source_file] = STATE(46),
    [sym__comment] = STATE(6),
    [sym_inline_comment] = STATE(6),
    [sym_privacy_specifier] = STATE(24),
    [sym__statement] = STATE(6),
    [sym_block_statement] = STATE(6),
    [sym_expression_statement] = STATE(6),
    [sym_variable_declaration_statement] = STATE(6),
    [sym_variable_expression] = STATE(50),
    [sym_variable_kind] = STATE(19),
    [sym_return_statement] = STATE(6),
    [sym_identifier] = STATE(37),
    [sym__letter_or_underscore] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(6),
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
  [0] = 12,
    ACTIONS(17), 1,
      anon_sym__,
    ACTIONS(19), 1,
      sym__letter,
    ACTIONS(21), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      sym__digit,
    STATE(17), 1,
      sym__letter_or_underscore,
    STATE(37), 1,
      sym_identifier,
    STATE(38), 1,
      sym__digits,
    STATE(39), 1,
      sym_primitive_type,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 2,
      sym_bool_literal,
      sym_integer_literal,
    STATE(48), 4,
      sym__expression,
      sym_literal_expression,
      sym_variable_expression,
      sym_type_expression,
    ACTIONS(25), 17,
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
  [58] = 11,
    ACTIONS(17), 1,
      anon_sym__,
    ACTIONS(19), 1,
      sym__letter,
    ACTIONS(27), 1,
      sym__digit,
    STATE(17), 1,
      sym__letter_or_underscore,
    STATE(37), 1,
      sym_identifier,
    STATE(38), 1,
      sym__digits,
    STATE(39), 1,
      sym_primitive_type,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 2,
      sym_bool_literal,
      sym_integer_literal,
    STATE(42), 4,
      sym__expression,
      sym_literal_expression,
      sym_variable_expression,
      sym_type_expression,
    ACTIONS(25), 17,
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
  [113] = 11,
    ACTIONS(17), 1,
      anon_sym__,
    ACTIONS(19), 1,
      sym__letter,
    ACTIONS(27), 1,
      sym__digit,
    STATE(17), 1,
      sym__letter_or_underscore,
    STATE(35), 1,
      sym_type_expression,
    STATE(37), 1,
      sym_identifier,
    STATE(38), 1,
      sym__digits,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 2,
      sym_bool_literal,
      sym_integer_literal,
    STATE(39), 4,
      sym__expression,
      sym_literal_expression,
      sym_variable_expression,
      sym_primitive_type,
    ACTIONS(25), 17,
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
  [168] = 15,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_const,
    ACTIONS(46), 1,
      anon_sym_return,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(52), 1,
      sym__letter,
    STATE(17), 1,
      sym__letter_or_underscore,
    STATE(19), 1,
      sym_variable_kind,
    STATE(24), 1,
      sym_privacy_specifier,
    STATE(37), 1,
      sym_identifier,
    STATE(50), 1,
      sym_variable_expression,
    ACTIONS(34), 2,
      anon_sym_private,
      anon_sym_public,
    ACTIONS(40), 4,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
    STATE(5), 8,
      sym__comment,
      sym_inline_comment,
      sym__statement,
      sym_block_statement,
      sym_expression_statement,
      sym_variable_declaration_statement,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [225] = 15,
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
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym__letter_or_underscore,
    STATE(19), 1,
      sym_variable_kind,
    STATE(24), 1,
      sym_privacy_specifier,
    STATE(37), 1,
      sym_identifier,
    STATE(50), 1,
      sym_variable_expression,
    ACTIONS(7), 2,
      anon_sym_private,
      anon_sym_public,
    ACTIONS(11), 4,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
    STATE(5), 8,
      sym__comment,
      sym_inline_comment,
      sym__statement,
      sym_block_statement,
      sym_expression_statement,
      sym_variable_declaration_statement,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [282] = 15,
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
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym__letter_or_underscore,
    STATE(19), 1,
      sym_variable_kind,
    STATE(24), 1,
      sym_privacy_specifier,
    STATE(37), 1,
      sym_identifier,
    STATE(45), 1,
      sym_statements,
    STATE(50), 1,
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
  [336] = 15,
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
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym__letter_or_underscore,
    STATE(19), 1,
      sym_variable_kind,
    STATE(24), 1,
      sym_privacy_specifier,
    STATE(37), 1,
      sym_identifier,
    STATE(50), 1,
      sym_variable_expression,
    STATE(51), 1,
      sym_statements,
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
  [390] = 2,
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
  [409] = 2,
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
  [428] = 2,
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
  [447] = 2,
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
  [466] = 2,
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
  [485] = 2,
    ACTIONS(83), 2,
      anon_sym_const,
      sym__letter,
    ACTIONS(81), 12,
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
  [504] = 2,
    ACTIONS(87), 2,
      anon_sym_const,
      sym__letter,
    ACTIONS(85), 11,
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
  [522] = 4,
    STATE(16), 1,
      sym__letter_or_underscore,
    STATE(27), 1,
      sym__legal_identifier_chars,
    ACTIONS(91), 2,
      anon_sym__,
      sym__letter,
    ACTIONS(89), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [539] = 4,
    STATE(16), 1,
      sym__letter_or_underscore,
    STATE(30), 1,
      sym__legal_identifier_chars,
    ACTIONS(91), 2,
      anon_sym__,
      sym__letter,
    ACTIONS(93), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [556] = 6,
    STATE(17), 1,
      sym__letter_or_underscore,
    STATE(22), 1,
      sym_identifier_list,
    STATE(29), 1,
      sym_identifier,
    STATE(40), 1,
      sym_variable_declaration,
    STATE(47), 1,
      sym_variable_declaration_list,
    ACTIONS(17), 2,
      anon_sym__,
      sym__letter,
  [576] = 6,
    STATE(17), 1,
      sym__letter_or_underscore,
    STATE(22), 1,
      sym_identifier_list,
    STATE(29), 1,
      sym_identifier,
    STATE(40), 1,
      sym_variable_declaration,
    STATE(52), 1,
      sym_variable_declaration_list,
    ACTIONS(17), 2,
      anon_sym__,
      sym__letter,
  [596] = 6,
    STATE(17), 1,
      sym__letter_or_underscore,
    STATE(22), 1,
      sym_identifier_list,
    STATE(29), 1,
      sym_identifier,
    STATE(40), 1,
      sym_variable_declaration,
    STATE(49), 1,
      sym_variable_declaration_list,
    ACTIONS(17), 2,
      anon_sym__,
      sym__letter,
  [616] = 3,
    STATE(36), 1,
      sym__separator_digits,
    ACTIONS(97), 2,
      anon_sym__,
      sym__digit,
    ACTIONS(95), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [629] = 5,
    ACTIONS(101), 1,
      anon_sym_COLON,
    ACTIONS(103), 1,
      anon_sym_EQ,
    STATE(26), 1,
      sym_type_part,
    STATE(44), 1,
      sym_initialization_part,
    ACTIONS(99), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [646] = 3,
    STATE(32), 1,
      sym__separator_digits,
    ACTIONS(97), 2,
      anon_sym__,
      sym__digit,
    ACTIONS(105), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [659] = 3,
    ACTIONS(13), 1,
      anon_sym_const,
    STATE(18), 1,
      sym_variable_kind,
    ACTIONS(11), 4,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
  [672] = 2,
    ACTIONS(109), 1,
      anon_sym_const,
    ACTIONS(107), 4,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
  [682] = 3,
    ACTIONS(103), 1,
      anon_sym_EQ,
    STATE(41), 1,
      sym_initialization_part,
    ACTIONS(111), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [693] = 1,
    ACTIONS(113), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [700] = 1,
    ACTIONS(115), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [707] = 1,
    ACTIONS(117), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [714] = 1,
    ACTIONS(119), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [721] = 1,
    ACTIONS(121), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [727] = 1,
    ACTIONS(123), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [733] = 1,
    ACTIONS(125), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [739] = 1,
    ACTIONS(127), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [745] = 1,
    ACTIONS(129), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [751] = 1,
    ACTIONS(131), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [757] = 1,
    ACTIONS(133), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [763] = 1,
    ACTIONS(135), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [769] = 1,
    ACTIONS(137), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [775] = 2,
    ACTIONS(139), 1,
      anon_sym_SEMI,
    ACTIONS(141), 1,
      anon_sym_COMMA,
  [782] = 1,
    ACTIONS(143), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [787] = 1,
    ACTIONS(145), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [792] = 1,
    ACTIONS(147), 2,
      anon_sym__,
      sym__letter,
  [797] = 1,
    ACTIONS(111), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [802] = 1,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
  [806] = 1,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
  [810] = 1,
    ACTIONS(153), 1,
      anon_sym_SEMI,
  [814] = 1,
    ACTIONS(137), 1,
      anon_sym_SEMI,
  [818] = 1,
    ACTIONS(155), 1,
      anon_sym_SEMI,
  [822] = 1,
    ACTIONS(157), 1,
      anon_sym_SEMI,
  [826] = 1,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
  [830] = 1,
    ACTIONS(161), 1,
      anon_sym_SEMI,
  [834] = 1,
    ACTIONS(163), 1,
      sym__anything,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 113,
  [SMALL_STATE(5)] = 168,
  [SMALL_STATE(6)] = 225,
  [SMALL_STATE(7)] = 282,
  [SMALL_STATE(8)] = 336,
  [SMALL_STATE(9)] = 390,
  [SMALL_STATE(10)] = 409,
  [SMALL_STATE(11)] = 428,
  [SMALL_STATE(12)] = 447,
  [SMALL_STATE(13)] = 466,
  [SMALL_STATE(14)] = 485,
  [SMALL_STATE(15)] = 504,
  [SMALL_STATE(16)] = 522,
  [SMALL_STATE(17)] = 539,
  [SMALL_STATE(18)] = 556,
  [SMALL_STATE(19)] = 576,
  [SMALL_STATE(20)] = 596,
  [SMALL_STATE(21)] = 616,
  [SMALL_STATE(22)] = 629,
  [SMALL_STATE(23)] = 646,
  [SMALL_STATE(24)] = 659,
  [SMALL_STATE(25)] = 672,
  [SMALL_STATE(26)] = 682,
  [SMALL_STATE(27)] = 693,
  [SMALL_STATE(28)] = 700,
  [SMALL_STATE(29)] = 707,
  [SMALL_STATE(30)] = 714,
  [SMALL_STATE(31)] = 721,
  [SMALL_STATE(32)] = 727,
  [SMALL_STATE(33)] = 733,
  [SMALL_STATE(34)] = 739,
  [SMALL_STATE(35)] = 745,
  [SMALL_STATE(36)] = 751,
  [SMALL_STATE(37)] = 757,
  [SMALL_STATE(38)] = 763,
  [SMALL_STATE(39)] = 769,
  [SMALL_STATE(40)] = 775,
  [SMALL_STATE(41)] = 782,
  [SMALL_STATE(42)] = 787,
  [SMALL_STATE(43)] = 792,
  [SMALL_STATE(44)] = 797,
  [SMALL_STATE(45)] = 802,
  [SMALL_STATE(46)] = 806,
  [SMALL_STATE(47)] = 810,
  [SMALL_STATE(48)] = 814,
  [SMALL_STATE(49)] = 818,
  [SMALL_STATE(50)] = 822,
  [SMALL_STATE(51)] = 826,
  [SMALL_STATE(52)] = 830,
  [SMALL_STATE(53)] = 834,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_statement, 4),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration_statement, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_statement, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration_statement, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legal_identifier_chars, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__separator_digits, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__digits, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privacy_specifier, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_privacy_specifier, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legal_identifier_chars, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__digits, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_expression, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_part, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__separator_digits, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expression, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_list, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initialization_part, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_kind, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [151] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_list, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
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
