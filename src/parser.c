#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
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
  anon_sym_DQUOTE = 14,
  anon_sym_SQUOTE = 15,
  aux_sym_string_character_token1 = 16,
  anon_sym_void = 17,
  anon_sym_nothing = 18,
  anon_sym_bool = 19,
  anon_sym_int = 20,
  anon_sym_uint = 21,
  anon_sym_real = 22,
  anon_sym_imag = 23,
  anon_sym_complex = 24,
  anon_sym_string = 25,
  anon_sym_bytes = 26,
  anon_sym_enum = 27,
  anon_sym_record = 28,
  anon_sym_class = 29,
  anon_sym_owned = 30,
  anon_sym_shared = 31,
  anon_sym_unmanaged = 32,
  anon_sym_borrowed = 33,
  anon_sym_param = 34,
  anon_sym_const = 35,
  anon_sym_var = 36,
  anon_sym_ref = 37,
  anon_sym_constref = 38,
  anon_sym_return = 39,
  anon_sym_DOLLAR = 40,
  anon_sym__ = 41,
  sym__anything = 42,
  sym__letter = 43,
  sym__digit = 44,
  sym__binary_digit = 45,
  anon_sym_PLUS_EQ = 46,
  anon_sym_DASH_EQ = 47,
  anon_sym_STAR_EQ = 48,
  anon_sym_SLASH_EQ = 49,
  anon_sym_PERCENT_EQ = 50,
  anon_sym_STAR_STAR_EQ = 51,
  anon_sym_AMP_EQ = 52,
  anon_sym_PIPE_EQ = 53,
  anon_sym_CARET_EQ = 54,
  anon_sym_AMP_AMP_EQ = 55,
  anon_sym_PIPE_PIPE_EQ = 56,
  anon_sym_LT_LT_EQ = 57,
  anon_sym_GT_GT_EQ = 58,
  sym_source_file = 59,
  sym__comment = 60,
  sym_inline_comment = 61,
  sym_privacy_specifier = 62,
  sym__statement = 63,
  sym_block_statement = 64,
  sym_expression_statement = 65,
  sym_statements = 66,
  sym_variable_declaration_statement = 67,
  sym_variable_declaration_list = 68,
  sym_variable_declaration = 69,
  sym_type_part = 70,
  sym_initialization_part = 71,
  sym__expression = 72,
  sym_literal_expression = 73,
  sym_variable_expression = 74,
  sym_type_expression = 75,
  sym_bool_literal = 76,
  sym_integer_literal = 77,
  sym_string_literal = 78,
  sym_interpreted_string_literal = 79,
  sym_double_quote_delimited_characters = 80,
  sym_single_quote_delimited_characters = 81,
  sym_string_character = 82,
  sym_primitive_type = 83,
  sym_variable_kind = 84,
  sym_return_statement = 85,
  sym_identifier = 86,
  sym_identifier_list = 87,
  sym__legal_identifier_chars = 88,
  sym__legal_identifier_char = 89,
  sym__letter_or_underscore = 90,
  sym__digits = 91,
  sym__separator_digits = 92,
  aux_sym_source_file_repeat1 = 93,
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
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_character_token1] = "string_character_token1",
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
  [anon_sym_DOLLAR] = "$",
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
  [sym_string_literal] = "string_literal",
  [sym_interpreted_string_literal] = "interpreted_string_literal",
  [sym_double_quote_delimited_characters] = "double_quote_delimited_characters",
  [sym_single_quote_delimited_characters] = "single_quote_delimited_characters",
  [sym_string_character] = "string_character",
  [sym_primitive_type] = "primitive_type",
  [sym_variable_kind] = "variable_kind",
  [sym_return_statement] = "return_statement",
  [sym_identifier] = "identifier",
  [sym_identifier_list] = "identifier_list",
  [sym__legal_identifier_chars] = "_legal_identifier_chars",
  [sym__legal_identifier_char] = "_legal_identifier_char",
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
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_character_token1] = aux_sym_string_character_token1,
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
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
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
  [sym_string_literal] = sym_string_literal,
  [sym_interpreted_string_literal] = sym_interpreted_string_literal,
  [sym_double_quote_delimited_characters] = sym_double_quote_delimited_characters,
  [sym_single_quote_delimited_characters] = sym_single_quote_delimited_characters,
  [sym_string_character] = sym_string_character,
  [sym_primitive_type] = sym_primitive_type,
  [sym_variable_kind] = sym_variable_kind,
  [sym_return_statement] = sym_return_statement,
  [sym_identifier] = sym_identifier,
  [sym_identifier_list] = sym_identifier_list,
  [sym__legal_identifier_chars] = sym__legal_identifier_chars,
  [sym__legal_identifier_char] = sym__legal_identifier_char,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_character_token1] = {
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
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_interpreted_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quote_delimited_characters] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quote_delimited_characters] = {
    .visible = true,
    .named = true,
  },
  [sym_string_character] = {
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
  [sym__legal_identifier_char] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(106);
      if (lookahead == '"') ADVANCE(120);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == ')') ADVANCE(109);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == ',') ADVANCE(115);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == ';') ADVANCE(114);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == '=') ADVANCE(117);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == '^') ADVANCE(12);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == 'b') ADVANCE(165);
      if (lookahead == 'c') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == 'p') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(156);
      if (lookahead == 's') ADVANCE(159);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == 'u') ADVANCE(160);
      if (lookahead == 'v') ADVANCE(155);
      if (lookahead == '{') ADVANCE(112);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead == '}') ADVANCE(113);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == ';') ADVANCE(114);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == 'b') ADVANCE(165);
      if (lookahead == 'c') ADVANCE(162);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == 's') ADVANCE(159);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == 'u') ADVANCE(160);
      if (lookahead == 'v') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == ',') ADVANCE(115);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == ';') ADVANCE(114);
      if (lookahead == '=') ADVANCE(117);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '=') ADVANCE(178);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '=') ADVANCE(174);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(107);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '=') ADVANCE(175);
      END_STATE();
    case 8:
      if (lookahead == '<') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(176);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(172);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(173);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(180);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(179);
      if (lookahead == '|') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(181);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(177);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(183);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(184);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(182);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(62);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(139);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(145);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(130);
      END_STATE();
    case 50:
      if (lookahead == 'g') ADVANCE(132);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 53:
      if (lookahead == 'h') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 65:
      if (lookahead == 'm') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 66:
      if (lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(141);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 79:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 100:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 101:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 102:
      if (lookahead == 'v') ADVANCE(28);
      END_STATE();
    case 103:
      if (lookahead == 'w') ADVANCE(45);
      END_STATE();
    case 104:
      if (lookahead == 'x') ADVANCE(131);
      END_STATE();
    case 105:
      if (eof) ADVANCE(106);
      if (lookahead == ',') ADVANCE(115);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(114);
      if (lookahead == '=') ADVANCE(117);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == 'c') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == 'v') ADVANCE(154);
      if (lookahead == '{') ADVANCE(112);
      if (lookahead == '}') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(105)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_string_character_token1);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_string_character_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(122);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_nothing);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_real);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_imag);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_complex);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_owned);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_shared);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_unmanaged);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_borrowed);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_param);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == ' ') ADVANCE(86);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_constref);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__anything);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__anything);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__letter);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'h') ADVANCE(27);
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'm') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead == 'y') ADVANCE(93);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'w') ADVANCE(70);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__digit);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_EQ);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_AMP_AMP_EQ);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE_EQ);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 105},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 105},
  [6] = {.lex_state = 105},
  [7] = {.lex_state = 105},
  [8] = {.lex_state = 105},
  [9] = {.lex_state = 105},
  [10] = {.lex_state = 105},
  [11] = {.lex_state = 105},
  [12] = {.lex_state = 105},
  [13] = {.lex_state = 105},
  [14] = {.lex_state = 105},
  [15] = {.lex_state = 105},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 105},
  [24] = {.lex_state = 105},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
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
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 149},
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
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
    [anon_sym_DOLLAR] = ACTIONS(1),
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
    [sym_source_file] = STATE(63),
    [sym__comment] = STATE(6),
    [sym_inline_comment] = STATE(6),
    [sym_privacy_specifier] = STATE(22),
    [sym__statement] = STATE(6),
    [sym_block_statement] = STATE(6),
    [sym_expression_statement] = STATE(6),
    [sym_variable_declaration_statement] = STATE(6),
    [sym_variable_expression] = STATE(59),
    [sym_variable_kind] = STATE(18),
    [sym_return_statement] = STATE(6),
    [sym_identifier] = STATE(39),
    [sym__letter_or_underscore] = STATE(16),
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
  [0] = 15,
    ACTIONS(17), 1,
      anon_sym__,
    ACTIONS(19), 1,
      sym__letter,
    ACTIONS(21), 1,
      anon_sym_SEMI,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__digit,
    STATE(16), 1,
      sym__letter_or_underscore,
    STATE(39), 1,
      sym_identifier,
    STATE(41), 1,
      sym__digits,
    STATE(44), 1,
      sym_primitive_type,
    STATE(46), 1,
      sym_interpreted_string_literal,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(47), 3,
      sym_bool_literal,
      sym_integer_literal,
      sym_string_literal,
    STATE(54), 4,
      sym__expression,
      sym_literal_expression,
      sym_variable_expression,
      sym_type_expression,
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
  [68] = 14,
    ACTIONS(17), 1,
      anon_sym__,
    ACTIONS(19), 1,
      sym__letter,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__digit,
    STATE(16), 1,
      sym__letter_or_underscore,
    STATE(39), 1,
      sym_identifier,
    STATE(41), 1,
      sym__digits,
    STATE(44), 1,
      sym_primitive_type,
    STATE(46), 1,
      sym_interpreted_string_literal,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(47), 3,
      sym_bool_literal,
      sym_integer_literal,
      sym_string_literal,
    STATE(51), 4,
      sym__expression,
      sym_literal_expression,
      sym_variable_expression,
      sym_type_expression,
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
  [133] = 14,
    ACTIONS(17), 1,
      anon_sym__,
    ACTIONS(19), 1,
      sym__letter,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__digit,
    STATE(16), 1,
      sym__letter_or_underscore,
    STATE(37), 1,
      sym_type_expression,
    STATE(39), 1,
      sym_identifier,
    STATE(41), 1,
      sym__digits,
    STATE(46), 1,
      sym_interpreted_string_literal,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(47), 3,
      sym_bool_literal,
      sym_integer_literal,
      sym_string_literal,
    STATE(44), 4,
      sym__expression,
      sym_literal_expression,
      sym_variable_expression,
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
  [198] = 15,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_const,
    ACTIONS(50), 1,
      anon_sym_return,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(56), 1,
      sym__letter,
    STATE(16), 1,
      sym__letter_or_underscore,
    STATE(18), 1,
      sym_variable_kind,
    STATE(22), 1,
      sym_privacy_specifier,
    STATE(39), 1,
      sym_identifier,
    STATE(59), 1,
      sym_variable_expression,
    ACTIONS(38), 2,
      anon_sym_private,
      anon_sym_public,
    ACTIONS(44), 4,
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
  [255] = 15,
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
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym__letter_or_underscore,
    STATE(18), 1,
      sym_variable_kind,
    STATE(22), 1,
      sym_privacy_specifier,
    STATE(39), 1,
      sym_identifier,
    STATE(59), 1,
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
  [312] = 15,
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
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym__letter_or_underscore,
    STATE(18), 1,
      sym_variable_kind,
    STATE(22), 1,
      sym_privacy_specifier,
    STATE(39), 1,
      sym_identifier,
    STATE(59), 1,
      sym_variable_expression,
    STATE(62), 1,
      sym_statements,
    ACTIONS(7), 2,
      anon_sym_private,
      anon_sym_public,
    ACTIONS(11), 4,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
    STATE(7), 5,
      sym__statement,
      sym_block_statement,
      sym_expression_statement,
      sym_variable_declaration_statement,
      sym_return_statement,
  [366] = 15,
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
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym__letter_or_underscore,
    STATE(18), 1,
      sym_variable_kind,
    STATE(22), 1,
      sym_privacy_specifier,
    STATE(39), 1,
      sym_identifier,
    STATE(57), 1,
      sym_statements,
    STATE(59), 1,
      sym_variable_expression,
    ACTIONS(7), 2,
      anon_sym_private,
      anon_sym_public,
    ACTIONS(11), 4,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
    STATE(7), 5,
      sym__statement,
      sym_block_statement,
      sym_expression_statement,
      sym_variable_declaration_statement,
      sym_return_statement,
  [420] = 2,
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
  [439] = 2,
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
  [458] = 2,
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
  [477] = 2,
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
  [496] = 2,
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
  [515] = 2,
    ACTIONS(87), 2,
      anon_sym_const,
      sym__letter,
    ACTIONS(85), 12,
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
  [534] = 2,
    ACTIONS(91), 2,
      anon_sym_const,
      sym__letter,
    ACTIONS(89), 11,
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
  [552] = 4,
    STATE(34), 1,
      sym__legal_identifier_chars,
    STATE(17), 2,
      sym__legal_identifier_char,
      sym__letter_or_underscore,
    ACTIONS(93), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(95), 4,
      anon_sym_DOLLAR,
      anon_sym__,
      sym__letter,
      sym__digit,
  [572] = 4,
    STATE(30), 1,
      sym__legal_identifier_chars,
    STATE(17), 2,
      sym__legal_identifier_char,
      sym__letter_or_underscore,
    ACTIONS(95), 4,
      anon_sym_DOLLAR,
      anon_sym__,
      sym__letter,
      sym__digit,
    ACTIONS(97), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [592] = 6,
    STATE(16), 1,
      sym__letter_or_underscore,
    STATE(21), 1,
      sym_identifier_list,
    STATE(32), 1,
      sym_identifier,
    STATE(49), 1,
      sym_variable_declaration,
    STATE(58), 1,
      sym_variable_declaration_list,
    ACTIONS(17), 2,
      anon_sym__,
      sym__letter,
  [612] = 6,
    STATE(16), 1,
      sym__letter_or_underscore,
    STATE(21), 1,
      sym_identifier_list,
    STATE(32), 1,
      sym_identifier,
    STATE(49), 1,
      sym_variable_declaration,
    STATE(53), 1,
      sym_variable_declaration_list,
    ACTIONS(17), 2,
      anon_sym__,
      sym__letter,
  [632] = 6,
    STATE(16), 1,
      sym__letter_or_underscore,
    STATE(21), 1,
      sym_identifier_list,
    STATE(32), 1,
      sym_identifier,
    STATE(49), 1,
      sym_variable_declaration,
    STATE(64), 1,
      sym_variable_declaration_list,
    ACTIONS(17), 2,
      anon_sym__,
      sym__letter,
  [652] = 5,
    ACTIONS(101), 1,
      anon_sym_COLON,
    ACTIONS(103), 1,
      anon_sym_EQ,
    STATE(33), 1,
      sym_type_part,
    STATE(48), 1,
      sym_initialization_part,
    ACTIONS(99), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [669] = 3,
    ACTIONS(13), 1,
      anon_sym_const,
    STATE(19), 1,
      sym_variable_kind,
    ACTIONS(11), 4,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
  [682] = 3,
    STATE(35), 1,
      sym__separator_digits,
    ACTIONS(107), 2,
      anon_sym__,
      sym__digit,
    ACTIONS(105), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [695] = 3,
    STATE(38), 1,
      sym__separator_digits,
    ACTIONS(107), 2,
      anon_sym__,
      sym__digit,
    ACTIONS(109), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [708] = 5,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      aux_sym_string_character_token1,
    STATE(27), 1,
      sym_string_character,
    STATE(56), 1,
      sym_double_quote_delimited_characters,
  [724] = 5,
    ACTIONS(115), 1,
      aux_sym_string_character_token1,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    STATE(26), 1,
      sym_string_character,
    STATE(61), 1,
      sym_single_quote_delimited_characters,
  [740] = 5,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      aux_sym_string_character_token1,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym_string_character,
    STATE(60), 1,
      sym_double_quote_delimited_characters,
  [756] = 5,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      aux_sym_string_character_token1,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      sym_string_character,
    STATE(55), 1,
      sym_single_quote_delimited_characters,
  [772] = 2,
    ACTIONS(125), 1,
      anon_sym_const,
    ACTIONS(123), 4,
      anon_sym_param,
      anon_sym_var,
      anon_sym_ref,
      anon_sym_constref,
  [782] = 1,
    ACTIONS(127), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [789] = 1,
    ACTIONS(129), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [796] = 1,
    ACTIONS(131), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [803] = 3,
    ACTIONS(103), 1,
      anon_sym_EQ,
    STATE(52), 1,
      sym_initialization_part,
    ACTIONS(133), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [814] = 1,
    ACTIONS(135), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [821] = 1,
    ACTIONS(137), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [827] = 1,
    ACTIONS(139), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [833] = 1,
    ACTIONS(141), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [839] = 1,
    ACTIONS(143), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [845] = 1,
    ACTIONS(145), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [851] = 1,
    ACTIONS(147), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [857] = 1,
    ACTIONS(149), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [863] = 2,
    ACTIONS(153), 1,
      aux_sym_string_character_token1,
    ACTIONS(151), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [871] = 1,
    ACTIONS(155), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [877] = 1,
    ACTIONS(157), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [883] = 1,
    ACTIONS(159), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [889] = 1,
    ACTIONS(161), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [895] = 1,
    ACTIONS(163), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [901] = 1,
    ACTIONS(133), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [906] = 2,
    ACTIONS(165), 1,
      anon_sym_SEMI,
    ACTIONS(167), 1,
      anon_sym_COMMA,
  [913] = 1,
    ACTIONS(169), 2,
      anon_sym__,
      sym__letter,
  [918] = 1,
    ACTIONS(171), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [923] = 1,
    ACTIONS(173), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [928] = 1,
    ACTIONS(175), 1,
      anon_sym_SEMI,
  [932] = 1,
    ACTIONS(157), 1,
      anon_sym_SEMI,
  [936] = 1,
    ACTIONS(177), 1,
      anon_sym_SQUOTE,
  [940] = 1,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
  [944] = 1,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
  [948] = 1,
    ACTIONS(181), 1,
      anon_sym_SEMI,
  [952] = 1,
    ACTIONS(183), 1,
      anon_sym_SEMI,
  [956] = 1,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
  [960] = 1,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
  [964] = 1,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
  [968] = 1,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
  [972] = 1,
    ACTIONS(193), 1,
      anon_sym_SEMI,
  [976] = 1,
    ACTIONS(195), 1,
      sym__anything,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 68,
  [SMALL_STATE(4)] = 133,
  [SMALL_STATE(5)] = 198,
  [SMALL_STATE(6)] = 255,
  [SMALL_STATE(7)] = 312,
  [SMALL_STATE(8)] = 366,
  [SMALL_STATE(9)] = 420,
  [SMALL_STATE(10)] = 439,
  [SMALL_STATE(11)] = 458,
  [SMALL_STATE(12)] = 477,
  [SMALL_STATE(13)] = 496,
  [SMALL_STATE(14)] = 515,
  [SMALL_STATE(15)] = 534,
  [SMALL_STATE(16)] = 552,
  [SMALL_STATE(17)] = 572,
  [SMALL_STATE(18)] = 592,
  [SMALL_STATE(19)] = 612,
  [SMALL_STATE(20)] = 632,
  [SMALL_STATE(21)] = 652,
  [SMALL_STATE(22)] = 669,
  [SMALL_STATE(23)] = 682,
  [SMALL_STATE(24)] = 695,
  [SMALL_STATE(25)] = 708,
  [SMALL_STATE(26)] = 724,
  [SMALL_STATE(27)] = 740,
  [SMALL_STATE(28)] = 756,
  [SMALL_STATE(29)] = 772,
  [SMALL_STATE(30)] = 782,
  [SMALL_STATE(31)] = 789,
  [SMALL_STATE(32)] = 796,
  [SMALL_STATE(33)] = 803,
  [SMALL_STATE(34)] = 814,
  [SMALL_STATE(35)] = 821,
  [SMALL_STATE(36)] = 827,
  [SMALL_STATE(37)] = 833,
  [SMALL_STATE(38)] = 839,
  [SMALL_STATE(39)] = 845,
  [SMALL_STATE(40)] = 851,
  [SMALL_STATE(41)] = 857,
  [SMALL_STATE(42)] = 863,
  [SMALL_STATE(43)] = 871,
  [SMALL_STATE(44)] = 877,
  [SMALL_STATE(45)] = 883,
  [SMALL_STATE(46)] = 889,
  [SMALL_STATE(47)] = 895,
  [SMALL_STATE(48)] = 901,
  [SMALL_STATE(49)] = 906,
  [SMALL_STATE(50)] = 913,
  [SMALL_STATE(51)] = 918,
  [SMALL_STATE(52)] = 923,
  [SMALL_STATE(53)] = 928,
  [SMALL_STATE(54)] = 932,
  [SMALL_STATE(55)] = 936,
  [SMALL_STATE(56)] = 940,
  [SMALL_STATE(57)] = 944,
  [SMALL_STATE(58)] = 948,
  [SMALL_STATE(59)] = 952,
  [SMALL_STATE(60)] = 956,
  [SMALL_STATE(61)] = 960,
  [SMALL_STATE(62)] = 964,
  [SMALL_STATE(63)] = 968,
  [SMALL_STATE(64)] = 972,
  [SMALL_STATE(65)] = 976,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_statement, 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration_statement, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_statement, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration_statement, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legal_identifier_chars, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__digits, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__separator_digits, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quote_delimited_characters, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote_delimited_characters, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privacy_specifier, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_privacy_specifier, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legal_identifier_chars, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__digits, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_part, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__separator_digits, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expression, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_character, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_character, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_expression, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_list, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_kind, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initialization_part, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote_delimited_characters, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote_delimited_characters, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2),
  [191] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_list, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
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
