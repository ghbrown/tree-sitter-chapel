#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 73
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 100
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
  sym_variable_expression = 80,
  sym_type_expression = 81,
  sym_lvalue_expression = 82,
  sym_bool_literal = 83,
  sym_integer_literal = 84,
  sym_real_literal = 85,
  sym__exponent_part = 86,
  sym_string_literal = 87,
  sym_interpreted_string_literal = 88,
  sym__double_quote_delimited_characters = 89,
  sym__single_quote_delimited_characters = 90,
  sym__string_character = 91,
  sym_primitive_type = 92,
  sym_variable_kind = 93,
  sym_return_statement = 94,
  sym_identifier_list = 95,
  sym__digits = 96,
  sym__separator_digits = 97,
  sym__sign = 98,
  aux_sym_source_file_repeat1 = 99,
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
  [sym_variable_expression] = "variable_expression",
  [sym_type_expression] = "type_expression",
  [sym_lvalue_expression] = "lvalue_expression",
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
  [sym_variable_expression] = sym_variable_expression,
  [sym_type_expression] = sym_type_expression,
  [sym_lvalue_expression] = sym_lvalue_expression,
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
  [sym_variable_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_type_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_lvalue_expression] = {
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
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(35);
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(53);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '+') ADVANCE(187);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == 'E') ADVANCE(51);
      if (lookahead == '^') ADVANCE(10);
      if (lookahead == '_') ADVANCE(181);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '|') ADVANCE(11);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(53);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == 'b') ADVANCE(146);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == 'u') ADVANCE(123);
      if (lookahead == 'v') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '=') ADVANCE(196);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '=') ADVANCE(192);
      END_STATE();
    case 5:
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == 'E') ADVANCE(51);
      if (lookahead == '_') ADVANCE(181);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == 'v') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '=') ADVANCE(193);
      END_STATE();
    case 8:
      if (lookahead == '<') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(194);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(198);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(197);
      if (lookahead == '|') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(199);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(195);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(201);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(202);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(200);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(81);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(79);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      if (lookahead == '+') ADVANCE(186);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == 'v') ADVANCE(86);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__string_character_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__string_character_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_nothing);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_real);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_imag);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_complex);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_record);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_owned);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_shared);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_unmanaged);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_borrowed);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_param);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_param);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_ref);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_constref);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(94);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'c') ADVANCE(151);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(128);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(40);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(70);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(72);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(71);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(62);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(64);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(57);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(112);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(93);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(125);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(121);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(165);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(133);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(152);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(137);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead == 'y') ADVANCE(171);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(122);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(157);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(131);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(174);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(147);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(166);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(163);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(155);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(134);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(105);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(89);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(142);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(111);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(63);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__anything);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__anything);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__letter);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__digit);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(190);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(191);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_EQ);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_AMP_AMP_EQ);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE_EQ);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 34},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 34},
  [6] = {.lex_state = 34},
  [7] = {.lex_state = 34},
  [8] = {.lex_state = 34},
  [9] = {.lex_state = 34},
  [10] = {.lex_state = 34},
  [11] = {.lex_state = 34},
  [12] = {.lex_state = 34},
  [13] = {.lex_state = 34},
  [14] = {.lex_state = 34},
  [15] = {.lex_state = 34},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 34},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 33},
  [34] = {.lex_state = 33},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 33},
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
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 34},
  [56] = {.lex_state = 34},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 33},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 182},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
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
    [sym_source_file] = STATE(61),
    [sym__comment] = STATE(6),
    [sym_inline_comment] = STATE(6),
    [sym_privacy_specifier] = STATE(22),
    [sym__statement] = STATE(6),
    [sym_block_statement] = STATE(6),
    [sym_expression_statement] = STATE(6),
    [sym_variable_declaration_statement] = STATE(6),
    [sym_variable_expression] = STATE(66),
    [sym_variable_kind] = STATE(37),
    [sym_return_statement] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(7),
    [anon_sym_public] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_param] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_constref] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_SEMI,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__digit,
    STATE(18), 1,
      sym__digits,
    STATE(43), 1,
      sym_primitive_type,
    STATE(45), 1,
      sym_interpreted_string_literal,
    STATE(47), 1,
      sym_variable_expression,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 4,
      sym_bool_literal,
      sym_integer_literal,
      sym_real_literal,
      sym_string_literal,
    STATE(72), 4,
      sym__expression,
      sym_literal_expression,
      sym_type_expression,
      sym_lvalue_expression,
    ACTIONS(29), 17,
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
  [66] = 13,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__digit,
    STATE(18), 1,
      sym__digits,
    STATE(43), 1,
      sym_primitive_type,
    STATE(45), 1,
      sym_interpreted_string_literal,
    STATE(47), 1,
      sym_variable_expression,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 4,
      sym_bool_literal,
      sym_integer_literal,
      sym_real_literal,
      sym_string_literal,
    STATE(57), 4,
      sym__expression,
      sym_literal_expression,
      sym_type_expression,
      sym_lvalue_expression,
    ACTIONS(29), 17,
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
  [129] = 13,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__digit,
    STATE(18), 1,
      sym__digits,
    STATE(42), 1,
      sym_type_expression,
    STATE(45), 1,
      sym_interpreted_string_literal,
    STATE(47), 1,
      sym_variable_expression,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 4,
      sym_bool_literal,
      sym_integer_literal,
      sym_real_literal,
      sym_string_literal,
    STATE(43), 4,
      sym__expression,
      sym_literal_expression,
      sym_lvalue_expression,
      sym_primitive_type,
    ACTIONS(29), 17,
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
  [192] = 12,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_constref,
    ACTIONS(50), 1,
      anon_sym_return,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(22), 1,
      sym_privacy_specifier,
    STATE(37), 1,
      sym_variable_kind,
    STATE(66), 1,
      sym_variable_expression,
    ACTIONS(38), 2,
      anon_sym_private,
      anon_sym_public,
    ACTIONS(44), 4,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
    STATE(5), 8,
      sym__comment,
      sym_inline_comment,
      sym__statement,
      sym_block_statement,
      sym_expression_statement,
      sym_variable_declaration_statement,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [240] = 12,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_constref,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_privacy_specifier,
    STATE(37), 1,
      sym_variable_kind,
    STATE(66), 1,
      sym_variable_expression,
    ACTIONS(7), 2,
      anon_sym_private,
      anon_sym_public,
    ACTIONS(11), 4,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
    STATE(5), 8,
      sym__comment,
      sym_inline_comment,
      sym__statement,
      sym_block_statement,
      sym_expression_statement,
      sym_variable_declaration_statement,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [288] = 12,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_constref,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_privacy_specifier,
    STATE(37), 1,
      sym_variable_kind,
    STATE(66), 1,
      sym_variable_expression,
    STATE(70), 1,
      sym_statements,
    ACTIONS(7), 2,
      anon_sym_private,
      anon_sym_public,
    ACTIONS(11), 4,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
    STATE(8), 5,
      sym__statement,
      sym_block_statement,
      sym_expression_statement,
      sym_variable_declaration_statement,
      sym_return_statement,
  [333] = 12,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_constref,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_privacy_specifier,
    STATE(37), 1,
      sym_variable_kind,
    STATE(66), 1,
      sym_variable_expression,
    STATE(67), 1,
      sym_statements,
    ACTIONS(7), 2,
      anon_sym_private,
      anon_sym_public,
    ACTIONS(11), 4,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
    STATE(8), 5,
      sym__statement,
      sym_block_statement,
      sym_expression_statement,
      sym_variable_declaration_statement,
      sym_return_statement,
  [378] = 2,
    ACTIONS(62), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_constref,
    ACTIONS(64), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [396] = 2,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_constref,
    ACTIONS(68), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [414] = 2,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_constref,
    ACTIONS(72), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [432] = 2,
    ACTIONS(74), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_constref,
    ACTIONS(76), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [450] = 2,
    ACTIONS(78), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_constref,
    ACTIONS(80), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [468] = 2,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_constref,
    ACTIONS(84), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [486] = 2,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_constref,
    ACTIONS(88), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [503] = 3,
    STATE(23), 1,
      sym__separator_digits,
    ACTIONS(92), 2,
      anon_sym__,
      sym__digit,
    ACTIONS(90), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [519] = 3,
    STATE(21), 1,
      sym__separator_digits,
    ACTIONS(92), 2,
      anon_sym__,
      sym__digit,
    ACTIONS(94), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [535] = 4,
    ACTIONS(98), 1,
      anon_sym_DOT,
    STATE(49), 1,
      sym__exponent_part,
    ACTIONS(100), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(96), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [551] = 5,
    ACTIONS(104), 1,
      anon_sym_COLON,
    ACTIONS(106), 1,
      anon_sym_EQ,
    STATE(32), 1,
      sym_type_part,
    STATE(54), 1,
      sym_initialization_part,
    ACTIONS(102), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [568] = 3,
    STATE(46), 1,
      sym__exponent_part,
    ACTIONS(100), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(108), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [581] = 1,
    ACTIONS(110), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [590] = 3,
    ACTIONS(11), 1,
      anon_sym_const,
    STATE(34), 1,
      sym_variable_kind,
    ACTIONS(13), 4,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
  [603] = 1,
    ACTIONS(112), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [612] = 3,
    STATE(48), 1,
      sym__exponent_part,
    ACTIONS(100), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(114), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [625] = 5,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      aux_sym__string_character_token1,
    STATE(30), 1,
      sym__string_character,
    STATE(65), 1,
      sym__double_quote_delimited_characters,
  [641] = 5,
    ACTIONS(116), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      aux_sym__string_character_token1,
    STATE(29), 1,
      sym__string_character,
    STATE(64), 1,
      sym__single_quote_delimited_characters,
  [657] = 4,
    ACTIONS(31), 1,
      sym__digit,
    STATE(39), 1,
      sym__digits,
    STATE(56), 1,
      sym__sign,
    ACTIONS(126), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [671] = 4,
    ACTIONS(31), 1,
      sym__digit,
    STATE(24), 1,
      sym__digits,
    STATE(46), 1,
      sym__exponent_part,
    ACTIONS(100), 2,
      anon_sym_e,
      anon_sym_E,
  [685] = 5,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      aux_sym__string_character_token1,
    ACTIONS(128), 1,
      anon_sym_SQUOTE,
    STATE(29), 1,
      sym__string_character,
    STATE(63), 1,
      sym__single_quote_delimited_characters,
  [701] = 5,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      aux_sym__string_character_token1,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym__string_character,
    STATE(62), 1,
      sym__double_quote_delimited_characters,
  [717] = 2,
    ACTIONS(134), 1,
      anon_sym_const,
    ACTIONS(132), 4,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
  [727] = 3,
    ACTIONS(106), 1,
      anon_sym_EQ,
    STATE(58), 1,
      sym_initialization_part,
    ACTIONS(136), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [738] = 4,
    ACTIONS(138), 1,
      sym_identifier,
    STATE(19), 1,
      sym_identifier_list,
    STATE(53), 1,
      sym_variable_declaration,
    STATE(69), 1,
      sym_variable_declaration_list,
  [751] = 4,
    ACTIONS(138), 1,
      sym_identifier,
    STATE(19), 1,
      sym_identifier_list,
    STATE(53), 1,
      sym_variable_declaration,
    STATE(60), 1,
      sym_variable_declaration_list,
  [764] = 1,
    ACTIONS(140), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [771] = 1,
    ACTIONS(142), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [778] = 4,
    ACTIONS(138), 1,
      sym_identifier,
    STATE(19), 1,
      sym_identifier_list,
    STATE(53), 1,
      sym_variable_declaration,
    STATE(71), 1,
      sym_variable_declaration_list,
  [791] = 1,
    ACTIONS(144), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [797] = 1,
    ACTIONS(146), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [803] = 1,
    ACTIONS(148), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [809] = 1,
    ACTIONS(150), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [815] = 1,
    ACTIONS(152), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [821] = 1,
    ACTIONS(154), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [827] = 1,
    ACTIONS(156), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [833] = 1,
    ACTIONS(158), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [839] = 1,
    ACTIONS(114), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [845] = 1,
    ACTIONS(160), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [851] = 1,
    ACTIONS(162), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [857] = 1,
    ACTIONS(108), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [863] = 1,
    ACTIONS(164), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [869] = 1,
    ACTIONS(166), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [875] = 1,
    ACTIONS(168), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [881] = 2,
    ACTIONS(170), 1,
      anon_sym_SEMI,
    ACTIONS(172), 1,
      anon_sym_COMMA,
  [888] = 1,
    ACTIONS(136), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [893] = 2,
    ACTIONS(31), 1,
      sym__digit,
    STATE(20), 1,
      sym__digits,
  [900] = 2,
    ACTIONS(31), 1,
      sym__digit,
    STATE(52), 1,
      sym__digits,
  [907] = 1,
    ACTIONS(174), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [912] = 1,
    ACTIONS(176), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [917] = 1,
    ACTIONS(178), 1,
      sym_identifier,
  [921] = 1,
    ACTIONS(180), 1,
      anon_sym_SEMI,
  [925] = 1,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
  [929] = 1,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
  [933] = 1,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
  [937] = 1,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
  [941] = 1,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
  [945] = 1,
    ACTIONS(190), 1,
      anon_sym_SEMI,
  [949] = 1,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
  [953] = 1,
    ACTIONS(194), 1,
      sym__anything,
  [957] = 1,
    ACTIONS(196), 1,
      anon_sym_SEMI,
  [961] = 1,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
  [965] = 1,
    ACTIONS(200), 1,
      anon_sym_SEMI,
  [969] = 1,
    ACTIONS(154), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 66,
  [SMALL_STATE(4)] = 129,
  [SMALL_STATE(5)] = 192,
  [SMALL_STATE(6)] = 240,
  [SMALL_STATE(7)] = 288,
  [SMALL_STATE(8)] = 333,
  [SMALL_STATE(9)] = 378,
  [SMALL_STATE(10)] = 396,
  [SMALL_STATE(11)] = 414,
  [SMALL_STATE(12)] = 432,
  [SMALL_STATE(13)] = 450,
  [SMALL_STATE(14)] = 468,
  [SMALL_STATE(15)] = 486,
  [SMALL_STATE(16)] = 503,
  [SMALL_STATE(17)] = 519,
  [SMALL_STATE(18)] = 535,
  [SMALL_STATE(19)] = 551,
  [SMALL_STATE(20)] = 568,
  [SMALL_STATE(21)] = 581,
  [SMALL_STATE(22)] = 590,
  [SMALL_STATE(23)] = 603,
  [SMALL_STATE(24)] = 612,
  [SMALL_STATE(25)] = 625,
  [SMALL_STATE(26)] = 641,
  [SMALL_STATE(27)] = 657,
  [SMALL_STATE(28)] = 671,
  [SMALL_STATE(29)] = 685,
  [SMALL_STATE(30)] = 701,
  [SMALL_STATE(31)] = 717,
  [SMALL_STATE(32)] = 727,
  [SMALL_STATE(33)] = 738,
  [SMALL_STATE(34)] = 751,
  [SMALL_STATE(35)] = 764,
  [SMALL_STATE(36)] = 771,
  [SMALL_STATE(37)] = 778,
  [SMALL_STATE(38)] = 791,
  [SMALL_STATE(39)] = 797,
  [SMALL_STATE(40)] = 803,
  [SMALL_STATE(41)] = 809,
  [SMALL_STATE(42)] = 815,
  [SMALL_STATE(43)] = 821,
  [SMALL_STATE(44)] = 827,
  [SMALL_STATE(45)] = 833,
  [SMALL_STATE(46)] = 839,
  [SMALL_STATE(47)] = 845,
  [SMALL_STATE(48)] = 851,
  [SMALL_STATE(49)] = 857,
  [SMALL_STATE(50)] = 863,
  [SMALL_STATE(51)] = 869,
  [SMALL_STATE(52)] = 875,
  [SMALL_STATE(53)] = 881,
  [SMALL_STATE(54)] = 888,
  [SMALL_STATE(55)] = 893,
  [SMALL_STATE(56)] = 900,
  [SMALL_STATE(57)] = 907,
  [SMALL_STATE(58)] = 912,
  [SMALL_STATE(59)] = 917,
  [SMALL_STATE(60)] = 921,
  [SMALL_STATE(61)] = 925,
  [SMALL_STATE(62)] = 929,
  [SMALL_STATE(63)] = 933,
  [SMALL_STATE(64)] = 937,
  [SMALL_STATE(65)] = 941,
  [SMALL_STATE(66)] = 945,
  [SMALL_STATE(67)] = 949,
  [SMALL_STATE(68)] = 953,
  [SMALL_STATE(69)] = 957,
  [SMALL_STATE(70)] = 961,
  [SMALL_STATE(71)] = 965,
  [SMALL_STATE(72)] = 969,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_statement, 4),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration_statement, 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_statement, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration_statement, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__separator_digits, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__digits, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_literal, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__digits, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__separator_digits, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_literal, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_delimited_characters, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_delimited_characters, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privacy_specifier, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_privacy_specifier, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_expression, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent_part, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_part, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvalue_expression, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_literal, 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expression, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent_part, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_list, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initialization_part, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_kind, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [182] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_delimited_characters, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_delimited_characters, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_list, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
