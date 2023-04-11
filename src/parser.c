#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 98
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
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
  anon_sym_DOT = 14,
  anon_sym_e = 15,
  anon_sym_E = 16,
  anon_sym_DQUOTE = 17,
  anon_sym_SQUOTE = 18,
  aux_sym__string_character_token1 = 19,
  anon_sym_void = 20,
  anon_sym_nothing = 21,
  anon_sym_bool = 22,
  anon_sym_int = 23,
  anon_sym_uint = 24,
  anon_sym_real = 25,
  anon_sym_imag = 26,
  anon_sym_complex = 27,
  anon_sym_string = 28,
  anon_sym_bytes = 29,
  anon_sym_enum = 30,
  anon_sym_record = 31,
  anon_sym_class = 32,
  anon_sym_owned = 33,
  anon_sym_shared = 34,
  anon_sym_unmanaged = 35,
  anon_sym_borrowed = 36,
  anon_sym_param = 37,
  anon_sym_const = 38,
  anon_sym_var = 39,
  anon_sym_ref = 40,
  anon_sym_constref = 41,
  anon_sym_return = 42,
  sym_identifier = 43,
  anon_sym_DOLLAR = 44,
  anon_sym__ = 45,
  sym__anything = 46,
  sym__letter = 47,
  sym__digit = 48,
  sym__binary_digit = 49,
  anon_sym_PLUS = 50,
  anon_sym_DASH = 51,
  anon_sym_PLUS_EQ = 52,
  anon_sym_DASH_EQ = 53,
  anon_sym_STAR_EQ = 54,
  anon_sym_SLASH_EQ = 55,
  anon_sym_PERCENT_EQ = 56,
  anon_sym_STAR_STAR_EQ = 57,
  anon_sym_AMP_EQ = 58,
  anon_sym_PIPE_EQ = 59,
  anon_sym_CARET_EQ = 60,
  anon_sym_AMP_AMP_EQ = 61,
  anon_sym_PIPE_PIPE_EQ = 62,
  anon_sym_LT_LT_EQ = 63,
  anon_sym_GT_GT_EQ = 64,
  sym_source_file = 65,
  sym__comment = 66,
  sym_inline_comment = 67,
  sym_privacy_specifier = 68,
  sym__statement = 69,
  sym_block_statement = 70,
  sym_expression_statement = 71,
  sym_statements = 72,
  sym_variable_declaration_statement = 73,
  sym_variable_declaration_list = 74,
  sym_variable_declaration = 75,
  sym_type_part = 76,
  sym_initialization_part = 77,
  sym__expression = 78,
  sym_literal_expression = 79,
  sym_type_expression = 80,
  sym_bool_literal = 81,
  sym_integer_literal = 82,
  sym_real_literal = 83,
  sym__exponent_part = 84,
  sym_string_literal = 85,
  sym_interpreted_string_literal = 86,
  sym__double_quote_delimited_characters = 87,
  sym__single_quote_delimited_characters = 88,
  sym__string_character = 89,
  sym_primitive_type = 90,
  sym_variable_kind = 91,
  sym_return_statement = 92,
  sym_identifier_list = 93,
  sym__digits = 94,
  sym__separator_digits = 95,
  sym__sign = 96,
  aux_sym_source_file_repeat1 = 97,
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
  [anon_sym_DOT] = ".",
  [anon_sym_e] = "e",
  [anon_sym_E] = "E",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__string_character_token1] = "_string_character_token1",
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
  [sym_identifier] = "identifier",
  [anon_sym_DOLLAR] = "$",
  [anon_sym__] = "_",
  [sym__anything] = "_anything",
  [sym__letter] = "_letter",
  [sym__digit] = "_digit",
  [sym__binary_digit] = "_binary_digit",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
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
  [sym_type_expression] = "type_expression",
  [sym_bool_literal] = "bool_literal",
  [sym_integer_literal] = "integer_literal",
  [sym_real_literal] = "real_literal",
  [sym__exponent_part] = "_exponent_part",
  [sym_string_literal] = "string_literal",
  [sym_interpreted_string_literal] = "interpreted_string_literal",
  [sym__double_quote_delimited_characters] = "_double_quote_delimited_characters",
  [sym__single_quote_delimited_characters] = "_single_quote_delimited_characters",
  [sym__string_character] = "_string_character",
  [sym_primitive_type] = "primitive_type",
  [sym_variable_kind] = "variable_kind",
  [sym_return_statement] = "return_statement",
  [sym_identifier_list] = "identifier_list",
  [sym__digits] = "_digits",
  [sym__separator_digits] = "_separator_digits",
  [sym__sign] = "_sign",
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
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__string_character_token1] = aux_sym__string_character_token1,
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
  [sym_identifier] = sym_identifier,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym__] = anon_sym__,
  [sym__anything] = sym__anything,
  [sym__letter] = sym__letter,
  [sym__digit] = sym__digit,
  [sym__binary_digit] = sym__binary_digit,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
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
  [sym_type_expression] = sym_type_expression,
  [sym_bool_literal] = sym_bool_literal,
  [sym_integer_literal] = sym_integer_literal,
  [sym_real_literal] = sym_real_literal,
  [sym__exponent_part] = sym__exponent_part,
  [sym_string_literal] = sym_string_literal,
  [sym_interpreted_string_literal] = sym_interpreted_string_literal,
  [sym__double_quote_delimited_characters] = sym__double_quote_delimited_characters,
  [sym__single_quote_delimited_characters] = sym__single_quote_delimited_characters,
  [sym__string_character] = sym__string_character,
  [sym_primitive_type] = sym_primitive_type,
  [sym_variable_kind] = sym_variable_kind,
  [sym_return_statement] = sym_return_statement,
  [sym_identifier_list] = sym_identifier_list,
  [sym__digits] = sym__digits,
  [sym__separator_digits] = sym__separator_digits,
  [sym__sign] = sym__sign,
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_character_token1] = {
    .visible = false,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
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
  [sym_real_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__exponent_part] = {
    .visible = false,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_interpreted_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__double_quote_delimited_characters] = {
    .visible = false,
    .named = true,
  },
  [sym__single_quote_delimited_characters] = {
    .visible = false,
    .named = true,
  },
  [sym__string_character] = {
    .visible = false,
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
  [sym_identifier_list] = {
    .visible = true,
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
  [sym__sign] = {
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
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(113);
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(131);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '+') ADVANCE(165);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(123);
      if (lookahead == ';') ADVANCE(121);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead == '=') ADVANCE(124);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == 'E') ADVANCE(129);
      if (lookahead == '^') ADVANCE(9);
      if (lookahead == '_') ADVANCE(159);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(10);
      if (lookahead == '}') ADVANCE(120);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == '\'') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '=') ADVANCE(174);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '=') ADVANCE(170);
      END_STATE();
    case 4:
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == ';') ADVANCE(121);
      if (lookahead == '=') ADVANCE(124);
      if (lookahead == 'E') ADVANCE(129);
      if (lookahead == '_') ADVANCE(159);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(114);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == '=') ADVANCE(171);
      END_STATE();
    case 7:
      if (lookahead == '<') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(172);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(176);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '|') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(177);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(173);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(179);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(180);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(178);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'c') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(154);
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(64);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(149);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(155);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(140);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(142);
      END_STATE();
    case 50:
      if (lookahead == 'g') ADVANCE(135);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 52:
      if (lookahead == 'h') ADVANCE(26);
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 53:
      if (lookahead == 'h') ADVANCE(59);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 66:
      if (lookahead == 'm') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(144);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 69:
      if (lookahead == 'm') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 70:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'y') ADVANCE(102);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 83:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 104:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 105:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 106:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 107:
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 108:
      if (lookahead == 'w') ADVANCE(74);
      END_STATE();
    case 109:
      if (lookahead == 'w') ADVANCE(45);
      END_STATE();
    case 110:
      if (lookahead == 'x') ADVANCE(141);
      END_STATE();
    case 111:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(111)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 112:
      if (eof) ADVANCE(113);
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == '\'') ADVANCE(131);
      if (lookahead == '+') ADVANCE(164);
      if (lookahead == '-') ADVANCE(166);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(121);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead == 's') ADVANCE(52);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == 'u') ADVANCE(57);
      if (lookahead == 'v') ADVANCE(22);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '}') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(112)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__string_character_token1);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__string_character_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_nothing);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_real);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_imag);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_complex);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_owned);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_shared);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_unmanaged);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_borrowed);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_param);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_constref);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__anything);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__anything);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__letter);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__digit);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(168);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(169);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_EQ);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_AMP_AMP_EQ);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE_EQ);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 112},
  [2] = {.lex_state = 112},
  [3] = {.lex_state = 112},
  [4] = {.lex_state = 112},
  [5] = {.lex_state = 112},
  [6] = {.lex_state = 112},
  [7] = {.lex_state = 112},
  [8] = {.lex_state = 112},
  [9] = {.lex_state = 112},
  [10] = {.lex_state = 112},
  [11] = {.lex_state = 112},
  [12] = {.lex_state = 112},
  [13] = {.lex_state = 112},
  [14] = {.lex_state = 112},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 112},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 112},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 112},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 111},
  [35] = {.lex_state = 111},
  [36] = {.lex_state = 111},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 112},
  [52] = {.lex_state = 112},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 160},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 111},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [sym__letter] = ACTIONS(1),
    [sym__digit] = ACTIONS(1),
    [sym__binary_digit] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
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
    [sym_source_file] = STATE(62),
    [sym__comment] = STATE(6),
    [sym_inline_comment] = STATE(6),
    [sym_privacy_specifier] = STATE(18),
    [sym__statement] = STATE(6),
    [sym_block_statement] = STATE(6),
    [sym_expression_statement] = STATE(6),
    [sym_variable_declaration_statement] = STATE(6),
    [sym_variable_kind] = STATE(34),
    [sym_return_statement] = STATE(6),
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
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      sym__digit,
    STATE(17), 1,
      sym__digits,
    STATE(41), 1,
      sym_primitive_type,
    STATE(42), 1,
      sym_interpreted_string_literal,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 3,
      sym__expression,
      sym_literal_expression,
      sym_type_expression,
    STATE(43), 4,
      sym_bool_literal,
      sym_integer_literal,
      sym_real_literal,
      sym_string_literal,
    ACTIONS(27), 17,
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
  [59] = 11,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      sym__digit,
    STATE(17), 1,
      sym__digits,
    STATE(42), 1,
      sym_interpreted_string_literal,
    STATE(44), 1,
      sym_type_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 3,
      sym__expression,
      sym_literal_expression,
      sym_primitive_type,
    STATE(43), 4,
      sym_bool_literal,
      sym_integer_literal,
      sym_real_literal,
      sym_string_literal,
    ACTIONS(27), 17,
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
  [115] = 11,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      sym__digit,
    STATE(17), 1,
      sym__digits,
    STATE(41), 1,
      sym_primitive_type,
    STATE(42), 1,
      sym_interpreted_string_literal,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 3,
      sym__expression,
      sym_literal_expression,
      sym_type_expression,
    STATE(43), 4,
      sym_bool_literal,
      sym_integer_literal,
      sym_real_literal,
      sym_string_literal,
    ACTIONS(27), 17,
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
  [171] = 10,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_const,
    ACTIONS(48), 1,
      anon_sym_return,
    STATE(18), 1,
      sym_privacy_specifier,
    STATE(34), 1,
      sym_variable_kind,
    ACTIONS(36), 2,
      anon_sym_private,
      anon_sym_public,
    ACTIONS(42), 4,
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
  [213] = 10,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_privacy_specifier,
    STATE(34), 1,
      sym_variable_kind,
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
  [255] = 10,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_privacy_specifier,
    STATE(34), 1,
      sym_variable_kind,
    STATE(57), 1,
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
  [294] = 10,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_privacy_specifier,
    STATE(34), 1,
      sym_variable_kind,
    STATE(59), 1,
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
  [333] = 2,
    ACTIONS(59), 1,
      anon_sym_const,
    ACTIONS(57), 11,
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
  [350] = 2,
    ACTIONS(63), 1,
      anon_sym_const,
    ACTIONS(61), 11,
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
  [367] = 2,
    ACTIONS(67), 1,
      anon_sym_const,
    ACTIONS(65), 11,
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
  [384] = 2,
    ACTIONS(71), 1,
      anon_sym_const,
    ACTIONS(69), 11,
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
  [401] = 2,
    ACTIONS(75), 1,
      anon_sym_const,
    ACTIONS(73), 11,
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
  [418] = 2,
    ACTIONS(79), 1,
      anon_sym_const,
    ACTIONS(77), 10,
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
  [434] = 3,
    STATE(20), 1,
      sym__separator_digits,
    ACTIONS(83), 2,
      anon_sym__,
      sym__digit,
    ACTIONS(81), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [450] = 3,
    STATE(22), 1,
      sym__separator_digits,
    ACTIONS(83), 2,
      anon_sym__,
      sym__digit,
    ACTIONS(85), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [466] = 4,
    ACTIONS(89), 1,
      anon_sym_DOT,
    STATE(45), 1,
      sym__exponent_part,
    ACTIONS(91), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(87), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [482] = 3,
    ACTIONS(13), 1,
      anon_sym_const,
    STATE(36), 1,
      sym_variable_kind,
    ACTIONS(11), 4,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
  [495] = 5,
    ACTIONS(95), 1,
      anon_sym_COLON,
    ACTIONS(97), 1,
      anon_sym_EQ,
    STATE(31), 1,
      sym_type_part,
    STATE(50), 1,
      sym_initialization_part,
    ACTIONS(93), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [512] = 1,
    ACTIONS(99), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [521] = 3,
    STATE(49), 1,
      sym__exponent_part,
    ACTIONS(91), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(101), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [534] = 1,
    ACTIONS(103), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [543] = 3,
    STATE(40), 1,
      sym__exponent_part,
    ACTIONS(91), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(105), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [556] = 2,
    ACTIONS(109), 1,
      anon_sym_const,
    ACTIONS(107), 4,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
  [566] = 5,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      aux_sym__string_character_token1,
    STATE(30), 1,
      sym__string_character,
    STATE(68), 1,
      sym__double_quote_delimited_characters,
  [582] = 5,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      aux_sym__string_character_token1,
    STATE(29), 1,
      sym__string_character,
    STATE(67), 1,
      sym__single_quote_delimited_characters,
  [598] = 4,
    ACTIONS(29), 1,
      sym__digit,
    STATE(38), 1,
      sym__digits,
    STATE(52), 1,
      sym__sign,
    ACTIONS(121), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [612] = 4,
    ACTIONS(29), 1,
      sym__digit,
    STATE(23), 1,
      sym__digits,
    STATE(49), 1,
      sym__exponent_part,
    ACTIONS(91), 2,
      anon_sym_e,
      anon_sym_E,
  [626] = 5,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      aux_sym__string_character_token1,
    ACTIONS(123), 1,
      anon_sym_SQUOTE,
    STATE(29), 1,
      sym__string_character,
    STATE(60), 1,
      sym__single_quote_delimited_characters,
  [642] = 5,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      aux_sym__string_character_token1,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym__string_character,
    STATE(58), 1,
      sym__double_quote_delimited_characters,
  [658] = 3,
    ACTIONS(97), 1,
      anon_sym_EQ,
    STATE(55), 1,
      sym_initialization_part,
    ACTIONS(127), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [669] = 1,
    ACTIONS(129), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [676] = 1,
    ACTIONS(131), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [683] = 4,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(19), 1,
      sym_identifier_list,
    STATE(53), 1,
      sym_variable_declaration,
    STATE(61), 1,
      sym_variable_declaration_list,
  [696] = 4,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(19), 1,
      sym_identifier_list,
    STATE(53), 1,
      sym_variable_declaration,
    STATE(65), 1,
      sym_variable_declaration_list,
  [709] = 4,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(19), 1,
      sym_identifier_list,
    STATE(53), 1,
      sym_variable_declaration,
    STATE(63), 1,
      sym_variable_declaration_list,
  [722] = 1,
    ACTIONS(135), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [728] = 1,
    ACTIONS(137), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [734] = 1,
    ACTIONS(139), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [740] = 1,
    ACTIONS(141), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [746] = 1,
    ACTIONS(143), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [752] = 1,
    ACTIONS(145), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [758] = 1,
    ACTIONS(147), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [764] = 1,
    ACTIONS(149), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [770] = 1,
    ACTIONS(101), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [776] = 1,
    ACTIONS(151), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [782] = 1,
    ACTIONS(153), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [788] = 1,
    ACTIONS(155), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [794] = 1,
    ACTIONS(105), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [800] = 1,
    ACTIONS(127), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [805] = 2,
    ACTIONS(29), 1,
      sym__digit,
    STATE(21), 1,
      sym__digits,
  [812] = 2,
    ACTIONS(29), 1,
      sym__digit,
    STATE(39), 1,
      sym__digits,
  [819] = 2,
    ACTIONS(157), 1,
      anon_sym_SEMI,
    ACTIONS(159), 1,
      anon_sym_COMMA,
  [826] = 1,
    ACTIONS(143), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [831] = 1,
    ACTIONS(161), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [836] = 1,
    ACTIONS(163), 1,
      sym__anything,
  [840] = 1,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
  [844] = 1,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
  [848] = 1,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
  [852] = 1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
  [856] = 1,
    ACTIONS(173), 1,
      anon_sym_SEMI,
  [860] = 1,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
  [864] = 1,
    ACTIONS(177), 1,
      anon_sym_SEMI,
  [868] = 1,
    ACTIONS(179), 1,
      sym_identifier,
  [872] = 1,
    ACTIONS(181), 1,
      anon_sym_SEMI,
  [876] = 1,
    ACTIONS(143), 1,
      anon_sym_SEMI,
  [880] = 1,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
  [884] = 1,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 115,
  [SMALL_STATE(5)] = 171,
  [SMALL_STATE(6)] = 213,
  [SMALL_STATE(7)] = 255,
  [SMALL_STATE(8)] = 294,
  [SMALL_STATE(9)] = 333,
  [SMALL_STATE(10)] = 350,
  [SMALL_STATE(11)] = 367,
  [SMALL_STATE(12)] = 384,
  [SMALL_STATE(13)] = 401,
  [SMALL_STATE(14)] = 418,
  [SMALL_STATE(15)] = 434,
  [SMALL_STATE(16)] = 450,
  [SMALL_STATE(17)] = 466,
  [SMALL_STATE(18)] = 482,
  [SMALL_STATE(19)] = 495,
  [SMALL_STATE(20)] = 512,
  [SMALL_STATE(21)] = 521,
  [SMALL_STATE(22)] = 534,
  [SMALL_STATE(23)] = 543,
  [SMALL_STATE(24)] = 556,
  [SMALL_STATE(25)] = 566,
  [SMALL_STATE(26)] = 582,
  [SMALL_STATE(27)] = 598,
  [SMALL_STATE(28)] = 612,
  [SMALL_STATE(29)] = 626,
  [SMALL_STATE(30)] = 642,
  [SMALL_STATE(31)] = 658,
  [SMALL_STATE(32)] = 669,
  [SMALL_STATE(33)] = 676,
  [SMALL_STATE(34)] = 683,
  [SMALL_STATE(35)] = 696,
  [SMALL_STATE(36)] = 709,
  [SMALL_STATE(37)] = 722,
  [SMALL_STATE(38)] = 728,
  [SMALL_STATE(39)] = 734,
  [SMALL_STATE(40)] = 740,
  [SMALL_STATE(41)] = 746,
  [SMALL_STATE(42)] = 752,
  [SMALL_STATE(43)] = 758,
  [SMALL_STATE(44)] = 764,
  [SMALL_STATE(45)] = 770,
  [SMALL_STATE(46)] = 776,
  [SMALL_STATE(47)] = 782,
  [SMALL_STATE(48)] = 788,
  [SMALL_STATE(49)] = 794,
  [SMALL_STATE(50)] = 800,
  [SMALL_STATE(51)] = 805,
  [SMALL_STATE(52)] = 812,
  [SMALL_STATE(53)] = 819,
  [SMALL_STATE(54)] = 826,
  [SMALL_STATE(55)] = 831,
  [SMALL_STATE(56)] = 836,
  [SMALL_STATE(57)] = 840,
  [SMALL_STATE(58)] = 844,
  [SMALL_STATE(59)] = 848,
  [SMALL_STATE(60)] = 852,
  [SMALL_STATE(61)] = 856,
  [SMALL_STATE(62)] = 860,
  [SMALL_STATE(63)] = 864,
  [SMALL_STATE(64)] = 868,
  [SMALL_STATE(65)] = 872,
  [SMALL_STATE(66)] = 876,
  [SMALL_STATE(67)] = 880,
  [SMALL_STATE(68)] = 884,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_statement, 4),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration_statement, 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_statement, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration_statement, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__digits, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__separator_digits, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__digits, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_literal, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__separator_digits, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_literal, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privacy_specifier, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_privacy_specifier, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_delimited_characters, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_delimited_characters, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent_part, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent_part, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_literal, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_expression, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_part, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_list, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_delimited_characters, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_delimited_characters, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [175] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_kind, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_list, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
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
