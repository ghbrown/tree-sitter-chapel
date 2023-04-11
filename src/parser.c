#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 102
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
  sym_assignment_statement = 72,
  sym_statements = 73,
  sym_variable_declaration_statement = 74,
  sym_variable_declaration_list = 75,
  sym_variable_declaration = 76,
  sym_type_part = 77,
  sym_initialization_part = 78,
  sym__expression = 79,
  sym_literal_expression = 80,
  sym_variable_expression = 81,
  sym_type_expression = 82,
  sym_lvalue_expression = 83,
  sym_bool_literal = 84,
  sym_integer_literal = 85,
  sym_real_literal = 86,
  sym__exponent_part = 87,
  sym_string_literal = 88,
  sym_interpreted_string_literal = 89,
  sym__double_quote_delimited_characters = 90,
  sym__single_quote_delimited_characters = 91,
  sym__string_character = 92,
  sym_primitive_type = 93,
  sym_variable_kind = 94,
  sym_return_statement = 95,
  sym_identifier_list = 96,
  sym__digits = 97,
  sym__separator_digits = 98,
  sym__sign = 99,
  sym_assignment_operator = 100,
  aux_sym_source_file_repeat1 = 101,
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
  [sym_assignment_statement] = "assignment_statement",
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
  [sym_assignment_operator] = "assignment_operator",
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
  [sym_assignment_statement] = sym_assignment_statement,
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
  [sym_assignment_operator] = sym_assignment_operator,
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
  [sym_assignment_statement] = {
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
  [sym_assignment_operator] = {
    .visible = true,
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
  [21] = 12,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 11,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 24,
  [38] = 33,
  [39] = 39,
  [40] = 40,
  [41] = 20,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 12,
  [48] = 11,
  [49] = 13,
  [50] = 20,
  [51] = 51,
  [52] = 24,
  [53] = 17,
  [54] = 32,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 56,
  [62] = 62,
  [63] = 57,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 76,
  [78] = 75,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(41);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '$') ADVANCE(188);
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(61);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == '>') ADVANCE(20);
      if (lookahead == 'E') ADVANCE(59);
      if (lookahead == '_') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(187);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(61);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == 'b') ADVANCE(154);
      if (lookahead == 'c') ADVANCE(138);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 'n') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == 'u') ADVANCE(131);
      if (lookahead == 'v') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == '>') ADVANCE(20);
      if (lookahead == 'E') ADVANCE(58);
      if (lookahead == '^') ADVANCE(19);
      if (lookahead == '_') ADVANCE(189);
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 'v') ADVANCE(23);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '=') ADVANCE(204);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '=') ADVANCE(200);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '=') ADVANCE(201);
      END_STATE();
    case 8:
      if (lookahead == '<') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(202);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(198);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(199);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(201);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(205);
      if (lookahead == '|') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(207);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(203);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(209);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(210);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(208);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(206);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(89);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(87);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 37:
      if (eof) ADVANCE(41);
      if (lookahead == '+') ADVANCE(194);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == 'c') ADVANCE(153);
      if (lookahead == 'p') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == 'v') ADVANCE(94);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 38:
      if (eof) ADVANCE(41);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'E') ADVANCE(59);
      if (lookahead == '_') ADVANCE(190);
      if (lookahead == 'c') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'p') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == 'v') ADVANCE(94);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 39:
      if (eof) ADVANCE(41);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'E') ADVANCE(59);
      if (lookahead == 'c') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'p') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == 'v') ADVANCE(94);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 40:
      if (eof) ADVANCE(41);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '_') ADVANCE(190);
      if (lookahead == 'c') ADVANCE(153);
      if (lookahead == 'p') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == 'v') ADVANCE(94);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACE);
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
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__string_character_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__string_character_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_nothing);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_real);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_imag);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_complex);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_record);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_owned);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_shared);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_unmanaged);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_borrowed);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_param);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_param);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_ref);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_constref);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(102);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'c') ADVANCE(159);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(136);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(77);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(80);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 't') ADVANCE(180);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(70);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(72);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(65);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(120);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(101);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(133);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(183);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(66);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(129);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(115);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(82);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(160);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(90);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(157);
      if (lookahead == 'y') ADVANCE(179);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(167);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(165);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(139);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(86);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(146);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(155);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(73);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(76);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(171);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(163);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(142);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(113);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(97);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(150);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(119);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(71);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__anything);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__anything);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__digit);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(198);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_EQ);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_AMP_AMP_EQ);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE_EQ);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 37},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 37},
  [10] = {.lex_state = 37},
  [11] = {.lex_state = 38},
  [12] = {.lex_state = 38},
  [13] = {.lex_state = 39},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 37},
  [16] = {.lex_state = 37},
  [17] = {.lex_state = 39},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 37},
  [20] = {.lex_state = 39},
  [21] = {.lex_state = 40},
  [22] = {.lex_state = 37},
  [23] = {.lex_state = 37},
  [24] = {.lex_state = 39},
  [25] = {.lex_state = 37},
  [26] = {.lex_state = 37},
  [27] = {.lex_state = 37},
  [28] = {.lex_state = 37},
  [29] = {.lex_state = 37},
  [30] = {.lex_state = 37},
  [31] = {.lex_state = 40},
  [32] = {.lex_state = 39},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 37},
  [37] = {.lex_state = 37},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 37},
  [40] = {.lex_state = 37},
  [41] = {.lex_state = 37},
  [42] = {.lex_state = 37},
  [43] = {.lex_state = 37},
  [44] = {.lex_state = 37},
  [45] = {.lex_state = 37},
  [46] = {.lex_state = 37},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 37},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 37},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 36},
  [68] = {.lex_state = 36},
  [69] = {.lex_state = 36},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 37},
  [76] = {.lex_state = 37},
  [77] = {.lex_state = 37},
  [78] = {.lex_state = 37},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 191},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 36},
  [92] = {.lex_state = 0},
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
    [sym_identifier] = ACTIONS(1),
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
    [anon_sym_AMP_AMP_EQ] = ACTIONS(1),
    [anon_sym_PIPE_PIPE_EQ] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(90),
    [sym__comment] = STATE(7),
    [sym_inline_comment] = STATE(7),
    [sym_privacy_specifier] = STATE(55),
    [sym__statement] = STATE(7),
    [sym_block_statement] = STATE(7),
    [sym_expression_statement] = STATE(7),
    [sym_assignment_statement] = STATE(7),
    [sym_variable_declaration_statement] = STATE(7),
    [sym_variable_expression] = STATE(34),
    [sym_lvalue_expression] = STATE(35),
    [sym_variable_kind] = STATE(67),
    [sym_return_statement] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
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
    STATE(26), 1,
      sym_variable_expression,
    STATE(28), 1,
      sym_interpreted_string_literal,
    STATE(29), 1,
      sym_primitive_type,
    STATE(49), 1,
      sym__digits,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 4,
      sym_bool_literal,
      sym_integer_literal,
      sym_real_literal,
      sym_string_literal,
    STATE(85), 4,
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
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__digit,
    STATE(13), 1,
      sym__digits,
    STATE(26), 1,
      sym_variable_expression,
    STATE(28), 1,
      sym_interpreted_string_literal,
    STATE(29), 1,
      sym_primitive_type,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 4,
      sym_bool_literal,
      sym_integer_literal,
      sym_real_literal,
      sym_string_literal,
    STATE(45), 4,
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
    STATE(26), 1,
      sym_variable_expression,
    STATE(28), 1,
      sym_interpreted_string_literal,
    STATE(49), 1,
      sym__digits,
    STATE(71), 1,
      sym_type_expression,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 4,
      sym_bool_literal,
      sym_integer_literal,
      sym_real_literal,
      sym_string_literal,
    STATE(29), 4,
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
  [192] = 13,
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
    STATE(26), 1,
      sym_variable_expression,
    STATE(28), 1,
      sym_interpreted_string_literal,
    STATE(29), 1,
      sym_primitive_type,
    STATE(49), 1,
      sym__digits,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 4,
      sym_bool_literal,
      sym_integer_literal,
      sym_real_literal,
      sym_string_literal,
    STATE(73), 4,
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
  [255] = 13,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_constref,
    ACTIONS(56), 1,
      anon_sym_return,
    ACTIONS(59), 1,
      sym_identifier,
    STATE(34), 1,
      sym_variable_expression,
    STATE(35), 1,
      sym_lvalue_expression,
    STATE(55), 1,
      sym_privacy_specifier,
    STATE(67), 1,
      sym_variable_kind,
    ACTIONS(44), 2,
      anon_sym_private,
      anon_sym_public,
    ACTIONS(50), 4,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
    STATE(6), 9,
      sym__comment,
      sym_inline_comment,
      sym__statement,
      sym_block_statement,
      sym_expression_statement,
      sym_assignment_statement,
      sym_variable_declaration_statement,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [307] = 13,
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
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_variable_expression,
    STATE(35), 1,
      sym_lvalue_expression,
    STATE(55), 1,
      sym_privacy_specifier,
    STATE(67), 1,
      sym_variable_kind,
    ACTIONS(7), 2,
      anon_sym_private,
      anon_sym_public,
    ACTIONS(11), 4,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
    STATE(6), 9,
      sym__comment,
      sym_inline_comment,
      sym__statement,
      sym_block_statement,
      sym_expression_statement,
      sym_assignment_statement,
      sym_variable_declaration_statement,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [359] = 2,
    ACTIONS(66), 4,
      anon_sym_DOT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__digit,
    ACTIONS(64), 20,
      anon_sym_true,
      anon_sym_false,
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
      sym_identifier,
  [388] = 13,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_constref,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      sym_variable_expression,
    STATE(35), 1,
      sym_lvalue_expression,
    STATE(55), 1,
      sym_privacy_specifier,
    STATE(67), 1,
      sym_variable_kind,
    STATE(82), 1,
      sym_statements,
    ACTIONS(7), 2,
      anon_sym_private,
      anon_sym_public,
    ACTIONS(11), 4,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
    STATE(9), 6,
      sym__statement,
      sym_block_statement,
      sym_expression_statement,
      sym_assignment_statement,
      sym_variable_declaration_statement,
      sym_return_statement,
  [437] = 13,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_constref,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      sym_variable_expression,
    STATE(35), 1,
      sym_lvalue_expression,
    STATE(55), 1,
      sym_privacy_specifier,
    STATE(67), 1,
      sym_variable_kind,
    STATE(88), 1,
      sym_statements,
    ACTIONS(7), 2,
      anon_sym_private,
      anon_sym_public,
    ACTIONS(11), 4,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
    STATE(9), 6,
      sym__statement,
      sym_block_statement,
      sym_expression_statement,
      sym_assignment_statement,
      sym_variable_declaration_statement,
      sym_return_statement,
  [486] = 5,
    ACTIONS(76), 1,
      anon_sym__,
    ACTIONS(78), 1,
      sym__digit,
    STATE(20), 1,
      sym__separator_digits,
    ACTIONS(72), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_constref,
    ACTIONS(74), 10,
      anon_sym_private,
      anon_sym_public,
      anon_sym_e,
      anon_sym_E,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [516] = 5,
    ACTIONS(76), 1,
      anon_sym__,
    ACTIONS(78), 1,
      sym__digit,
    STATE(24), 1,
      sym__separator_digits,
    ACTIONS(80), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_constref,
    ACTIONS(82), 10,
      anon_sym_private,
      anon_sym_public,
      anon_sym_e,
      anon_sym_E,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [546] = 5,
    ACTIONS(88), 1,
      anon_sym_DOT,
    STATE(22), 1,
      sym__exponent_part,
    ACTIONS(90), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_constref,
    ACTIONS(86), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [574] = 2,
    ACTIONS(92), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_constref,
    ACTIONS(94), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [595] = 2,
    ACTIONS(96), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_constref,
    ACTIONS(98), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [616] = 2,
    ACTIONS(100), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_constref,
    ACTIONS(102), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [637] = 4,
    STATE(30), 1,
      sym__exponent_part,
    ACTIONS(90), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(100), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_constref,
    ACTIONS(102), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [662] = 2,
    ACTIONS(104), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_constref,
    ACTIONS(106), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [683] = 2,
    ACTIONS(108), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_constref,
    ACTIONS(110), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [704] = 2,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_constref,
    ACTIONS(114), 10,
      anon_sym_private,
      anon_sym_public,
      anon_sym_e,
      anon_sym_E,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [725] = 5,
    ACTIONS(116), 1,
      anon_sym__,
    ACTIONS(118), 1,
      sym__digit,
    STATE(37), 1,
      sym__separator_digits,
    ACTIONS(80), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_constref,
    ACTIONS(82), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [752] = 2,
    ACTIONS(120), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_constref,
    ACTIONS(122), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [773] = 2,
    ACTIONS(124), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_constref,
    ACTIONS(126), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [794] = 2,
    ACTIONS(128), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_constref,
    ACTIONS(130), 10,
      anon_sym_private,
      anon_sym_public,
      anon_sym_e,
      anon_sym_E,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [815] = 2,
    ACTIONS(132), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_constref,
    ACTIONS(134), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [836] = 2,
    ACTIONS(136), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_constref,
    ACTIONS(138), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [857] = 2,
    ACTIONS(140), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_constref,
    ACTIONS(142), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [878] = 2,
    ACTIONS(144), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_constref,
    ACTIONS(146), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [899] = 2,
    ACTIONS(148), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_constref,
    ACTIONS(150), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [920] = 2,
    ACTIONS(152), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_constref,
    ACTIONS(154), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [941] = 5,
    ACTIONS(116), 1,
      anon_sym__,
    ACTIONS(118), 1,
      sym__digit,
    STATE(41), 1,
      sym__separator_digits,
    ACTIONS(72), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_constref,
    ACTIONS(74), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [968] = 4,
    STATE(16), 1,
      sym__exponent_part,
    ACTIONS(90), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(120), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_constref,
    ACTIONS(122), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [993] = 1,
    ACTIONS(156), 16,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_AMP_AMP_EQ,
      anon_sym_PIPE_PIPE_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
  [1012] = 2,
    ACTIONS(158), 1,
      anon_sym_SEMI,
    ACTIONS(136), 14,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_AMP_AMP_EQ,
      anon_sym_PIPE_PIPE_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
  [1032] = 2,
    STATE(3), 1,
      sym_assignment_operator,
    ACTIONS(160), 14,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_AMP_AMP_EQ,
      anon_sym_PIPE_PIPE_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
  [1052] = 2,
    ACTIONS(162), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_constref,
    ACTIONS(164), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [1070] = 2,
    ACTIONS(128), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_constref,
    ACTIONS(130), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [1088] = 2,
    ACTIONS(156), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_constref,
    ACTIONS(166), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [1106] = 2,
    ACTIONS(168), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_constref,
    ACTIONS(170), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [1124] = 2,
    ACTIONS(172), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_constref,
    ACTIONS(174), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [1142] = 2,
    ACTIONS(112), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_constref,
    ACTIONS(114), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [1160] = 2,
    ACTIONS(176), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_constref,
    ACTIONS(178), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [1178] = 2,
    ACTIONS(180), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_constref,
    ACTIONS(182), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [1196] = 2,
    ACTIONS(184), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_constref,
    ACTIONS(186), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [1214] = 2,
    ACTIONS(188), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_constref,
    ACTIONS(190), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [1232] = 2,
    ACTIONS(192), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACE,
      anon_sym_constref,
    ACTIONS(194), 8,
      anon_sym_private,
      anon_sym_public,
      anon_sym_param,
      anon_sym_const,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_return,
      sym_identifier,
  [1249] = 3,
    STATE(52), 1,
      sym__separator_digits,
    ACTIONS(196), 2,
      anon_sym__,
      sym__digit,
    ACTIONS(80), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [1265] = 3,
    STATE(50), 1,
      sym__separator_digits,
    ACTIONS(196), 2,
      anon_sym__,
      sym__digit,
    ACTIONS(72), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [1281] = 4,
    ACTIONS(198), 1,
      anon_sym_DOT,
    STATE(22), 1,
      sym__exponent_part,
    ACTIONS(200), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(84), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [1297] = 1,
    ACTIONS(112), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [1306] = 5,
    ACTIONS(204), 1,
      anon_sym_COLON,
    ACTIONS(206), 1,
      anon_sym_EQ,
    STATE(66), 1,
      sym_type_part,
    STATE(72), 1,
      sym_initialization_part,
    ACTIONS(202), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1323] = 1,
    ACTIONS(128), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [1332] = 3,
    STATE(30), 1,
      sym__exponent_part,
    ACTIONS(200), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(100), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [1345] = 3,
    STATE(16), 1,
      sym__exponent_part,
    ACTIONS(200), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(120), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [1358] = 3,
    ACTIONS(11), 1,
      anon_sym_const,
    STATE(68), 1,
      sym_variable_kind,
    ACTIONS(13), 4,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
  [1371] = 4,
    ACTIONS(31), 1,
      sym__digit,
    STATE(14), 1,
      sym__digits,
    STATE(76), 1,
      sym__sign,
    ACTIONS(208), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1385] = 4,
    ACTIONS(31), 1,
      sym__digit,
    STATE(16), 1,
      sym__exponent_part,
    STATE(53), 1,
      sym__digits,
    ACTIONS(200), 2,
      anon_sym_e,
      anon_sym_E,
  [1399] = 5,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 1,
      anon_sym_SQUOTE,
    ACTIONS(214), 1,
      aux_sym__string_character_token1,
    STATE(60), 1,
      sym__string_character,
    STATE(86), 1,
      sym__single_quote_delimited_characters,
  [1415] = 5,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE,
    ACTIONS(218), 1,
      aux_sym__string_character_token1,
    STATE(62), 1,
      sym__string_character,
    STATE(81), 1,
      sym__double_quote_delimited_characters,
  [1431] = 5,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      aux_sym__string_character_token1,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(60), 1,
      sym__string_character,
    STATE(92), 1,
      sym__single_quote_delimited_characters,
  [1447] = 4,
    ACTIONS(222), 1,
      sym__digit,
    STATE(14), 1,
      sym__digits,
    STATE(77), 1,
      sym__sign,
    ACTIONS(224), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1461] = 5,
    ACTIONS(216), 1,
      anon_sym_SQUOTE,
    ACTIONS(218), 1,
      aux_sym__string_character_token1,
    ACTIONS(226), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      sym__string_character,
    STATE(84), 1,
      sym__double_quote_delimited_characters,
  [1477] = 4,
    ACTIONS(37), 1,
      sym__digit,
    STATE(16), 1,
      sym__exponent_part,
    STATE(17), 1,
      sym__digits,
    ACTIONS(228), 2,
      anon_sym_e,
      anon_sym_E,
  [1491] = 2,
    ACTIONS(232), 1,
      anon_sym_const,
    ACTIONS(230), 4,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
  [1501] = 1,
    ACTIONS(234), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1508] = 3,
    ACTIONS(206), 1,
      anon_sym_EQ,
    STATE(74), 1,
      sym_initialization_part,
    ACTIONS(236), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1519] = 4,
    ACTIONS(238), 1,
      sym_identifier,
    STATE(51), 1,
      sym_identifier_list,
    STATE(79), 1,
      sym_variable_declaration,
    STATE(83), 1,
      sym_variable_declaration_list,
  [1532] = 4,
    ACTIONS(238), 1,
      sym_identifier,
    STATE(51), 1,
      sym_identifier_list,
    STATE(79), 1,
      sym_variable_declaration,
    STATE(80), 1,
      sym_variable_declaration_list,
  [1545] = 4,
    ACTIONS(238), 1,
      sym_identifier,
    STATE(51), 1,
      sym_identifier_list,
    STATE(79), 1,
      sym_variable_declaration,
    STATE(89), 1,
      sym_variable_declaration_list,
  [1558] = 1,
    ACTIONS(240), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1565] = 1,
    ACTIONS(242), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [1571] = 1,
    ACTIONS(236), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1576] = 1,
    ACTIONS(244), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1581] = 1,
    ACTIONS(246), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1586] = 2,
    ACTIONS(37), 1,
      sym__digit,
    STATE(32), 1,
      sym__digits,
  [1593] = 2,
    ACTIONS(31), 1,
      sym__digit,
    STATE(18), 1,
      sym__digits,
  [1600] = 2,
    ACTIONS(222), 1,
      sym__digit,
    STATE(18), 1,
      sym__digits,
  [1607] = 2,
    ACTIONS(31), 1,
      sym__digit,
    STATE(54), 1,
      sym__digits,
  [1614] = 2,
    ACTIONS(248), 1,
      anon_sym_SEMI,
    ACTIONS(250), 1,
      anon_sym_COMMA,
  [1621] = 1,
    ACTIONS(252), 1,
      anon_sym_SEMI,
  [1625] = 1,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
  [1629] = 1,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
  [1633] = 1,
    ACTIONS(258), 1,
      anon_sym_SEMI,
  [1637] = 1,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
  [1641] = 1,
    ACTIONS(148), 1,
      anon_sym_SEMI,
  [1645] = 1,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
  [1649] = 1,
    ACTIONS(262), 1,
      sym__anything,
  [1653] = 1,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
  [1657] = 1,
    ACTIONS(266), 1,
      anon_sym_SEMI,
  [1661] = 1,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
  [1665] = 1,
    ACTIONS(270), 1,
      sym_identifier,
  [1669] = 1,
    ACTIONS(272), 1,
      anon_sym_SQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 66,
  [SMALL_STATE(4)] = 129,
  [SMALL_STATE(5)] = 192,
  [SMALL_STATE(6)] = 255,
  [SMALL_STATE(7)] = 307,
  [SMALL_STATE(8)] = 359,
  [SMALL_STATE(9)] = 388,
  [SMALL_STATE(10)] = 437,
  [SMALL_STATE(11)] = 486,
  [SMALL_STATE(12)] = 516,
  [SMALL_STATE(13)] = 546,
  [SMALL_STATE(14)] = 574,
  [SMALL_STATE(15)] = 595,
  [SMALL_STATE(16)] = 616,
  [SMALL_STATE(17)] = 637,
  [SMALL_STATE(18)] = 662,
  [SMALL_STATE(19)] = 683,
  [SMALL_STATE(20)] = 704,
  [SMALL_STATE(21)] = 725,
  [SMALL_STATE(22)] = 752,
  [SMALL_STATE(23)] = 773,
  [SMALL_STATE(24)] = 794,
  [SMALL_STATE(25)] = 815,
  [SMALL_STATE(26)] = 836,
  [SMALL_STATE(27)] = 857,
  [SMALL_STATE(28)] = 878,
  [SMALL_STATE(29)] = 899,
  [SMALL_STATE(30)] = 920,
  [SMALL_STATE(31)] = 941,
  [SMALL_STATE(32)] = 968,
  [SMALL_STATE(33)] = 993,
  [SMALL_STATE(34)] = 1012,
  [SMALL_STATE(35)] = 1032,
  [SMALL_STATE(36)] = 1052,
  [SMALL_STATE(37)] = 1070,
  [SMALL_STATE(38)] = 1088,
  [SMALL_STATE(39)] = 1106,
  [SMALL_STATE(40)] = 1124,
  [SMALL_STATE(41)] = 1142,
  [SMALL_STATE(42)] = 1160,
  [SMALL_STATE(43)] = 1178,
  [SMALL_STATE(44)] = 1196,
  [SMALL_STATE(45)] = 1214,
  [SMALL_STATE(46)] = 1232,
  [SMALL_STATE(47)] = 1249,
  [SMALL_STATE(48)] = 1265,
  [SMALL_STATE(49)] = 1281,
  [SMALL_STATE(50)] = 1297,
  [SMALL_STATE(51)] = 1306,
  [SMALL_STATE(52)] = 1323,
  [SMALL_STATE(53)] = 1332,
  [SMALL_STATE(54)] = 1345,
  [SMALL_STATE(55)] = 1358,
  [SMALL_STATE(56)] = 1371,
  [SMALL_STATE(57)] = 1385,
  [SMALL_STATE(58)] = 1399,
  [SMALL_STATE(59)] = 1415,
  [SMALL_STATE(60)] = 1431,
  [SMALL_STATE(61)] = 1447,
  [SMALL_STATE(62)] = 1461,
  [SMALL_STATE(63)] = 1477,
  [SMALL_STATE(64)] = 1491,
  [SMALL_STATE(65)] = 1501,
  [SMALL_STATE(66)] = 1508,
  [SMALL_STATE(67)] = 1519,
  [SMALL_STATE(68)] = 1532,
  [SMALL_STATE(69)] = 1545,
  [SMALL_STATE(70)] = 1558,
  [SMALL_STATE(71)] = 1565,
  [SMALL_STATE(72)] = 1571,
  [SMALL_STATE(73)] = 1576,
  [SMALL_STATE(74)] = 1581,
  [SMALL_STATE(75)] = 1586,
  [SMALL_STATE(76)] = 1593,
  [SMALL_STATE(77)] = 1600,
  [SMALL_STATE(78)] = 1607,
  [SMALL_STATE(79)] = 1614,
  [SMALL_STATE(80)] = 1621,
  [SMALL_STATE(81)] = 1625,
  [SMALL_STATE(82)] = 1629,
  [SMALL_STATE(83)] = 1633,
  [SMALL_STATE(84)] = 1637,
  [SMALL_STATE(85)] = 1641,
  [SMALL_STATE(86)] = 1645,
  [SMALL_STATE(87)] = 1649,
  [SMALL_STATE(88)] = 1653,
  [SMALL_STATE(89)] = 1657,
  [SMALL_STATE(90)] = 1661,
  [SMALL_STATE(91)] = 1665,
  [SMALL_STATE(92)] = 1669,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(91),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(91),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_operator, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_operator, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__separator_digits, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__separator_digits, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__digits, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__digits, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent_part, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exponent_part, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_literal, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real_literal, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent_part, 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exponent_part, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__separator_digits, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__separator_digits, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_literal, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real_literal, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__digits, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__digits, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvalue_expression, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lvalue_expression, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_expression, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_expression, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_expression, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_literal, 4),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real_literal, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expression, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expression, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_statement, 4),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration_statement, 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_statement, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration_statement, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_delimited_characters, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_delimited_characters, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privacy_specifier, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_privacy_specifier, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_part, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initialization_part, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_list, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_delimited_characters, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_list, 3),
  [268] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_kind, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_delimited_characters, 2),
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
