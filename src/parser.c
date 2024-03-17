#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 83
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  sym_comment = 1,
  sym_directive = 2,
  anon_sym_SEMI = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK = 9,
  sym_generic = 10,
  sym_metric = 11,
  aux_sym_variable_token1 = 12,
  aux_sym_variable_token2 = 13,
  sym_number = 14,
  sym_sq_string_content = 15,
  sym_dq_string_content = 16,
  anon_sym_SQUOTE = 17,
  anon_sym_DQUOTE = 18,
  anon_sym_SLASH = 19,
  anon_sym_DOT = 20,
  sym_regex_pattern = 21,
  sym__colon = 22,
  sym__or = 23,
  sym__option = 24,
  sym__carrot = 25,
  sym__star = 26,
  sym_escaped_dot = 27,
  sym__eol = 28,
  sym__plus = 29,
  sym__eq = 30,
  sym__tild = 31,
  sym__not = 32,
  sym__ts_modifier = 33,
  sym__st_modifier = 34,
  sym_scheme = 35,
  sym_ipv4 = 36,
  anon_sym_access_by_lua_block = 37,
  aux_sym__lua_code_token1 = 38,
  aux_sym__lua_code_token2 = 39,
  aux_sym__lua_code_token3 = 40,
  sym_conf = 41,
  sym__directives = 42,
  sym_simple_directive = 43,
  sym_block_directive = 44,
  sym_block = 45,
  sym_parenthese = 46,
  sym_bracket = 47,
  sym_param = 48,
  sym_variable = 49,
  sym_string = 50,
  sym_regex = 51,
  sym__regex_tokens = 52,
  sym_modifier = 53,
  sym_uri = 54,
  sym_lua_block_directive = 55,
  sym_lua_block = 56,
  sym_lua_code = 57,
  sym__lua_code = 58,
  aux_sym_conf_repeat1 = 59,
  aux_sym_simple_directive_repeat1 = 60,
  aux_sym_string_repeat1 = 61,
  aux_sym_string_repeat2 = 62,
  aux_sym_lua_block_repeat1 = 63,
  aux_sym__lua_code_repeat1 = 64,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_directive] = "directive",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_generic] = "generic",
  [sym_metric] = "metric",
  [aux_sym_variable_token1] = "variable_token1",
  [aux_sym_variable_token2] = "variable_token2",
  [sym_number] = "number",
  [sym_sq_string_content] = "sq_string_content",
  [sym_dq_string_content] = "dq_string_content",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SLASH] = "/",
  [anon_sym_DOT] = ".",
  [sym_regex_pattern] = "regex_pattern",
  [sym__colon] = "_colon",
  [sym__or] = "_or",
  [sym__option] = "_option",
  [sym__carrot] = "_carrot",
  [sym__star] = "_star",
  [sym_escaped_dot] = "escaped_dot",
  [sym__eol] = "_eol",
  [sym__plus] = "_plus",
  [sym__eq] = "_eq",
  [sym__tild] = "_tild",
  [sym__not] = "_not",
  [sym__ts_modifier] = "_ts_modifier",
  [sym__st_modifier] = "_st_modifier",
  [sym_scheme] = "scheme",
  [sym_ipv4] = "ipv4",
  [anon_sym_access_by_lua_block] = "access_by_lua_block",
  [aux_sym__lua_code_token1] = "_lua_code_token1",
  [aux_sym__lua_code_token2] = "_lua_code_token2",
  [aux_sym__lua_code_token3] = "_lua_code_token3",
  [sym_conf] = "conf",
  [sym__directives] = "_directives",
  [sym_simple_directive] = "simple_directive",
  [sym_block_directive] = "block_directive",
  [sym_block] = "block",
  [sym_parenthese] = "parenthese",
  [sym_bracket] = "bracket",
  [sym_param] = "param",
  [sym_variable] = "variable",
  [sym_string] = "string",
  [sym_regex] = "regex",
  [sym__regex_tokens] = "_regex_tokens",
  [sym_modifier] = "modifier",
  [sym_uri] = "uri",
  [sym_lua_block_directive] = "lua_block_directive",
  [sym_lua_block] = "lua_block",
  [sym_lua_code] = "lua_code",
  [sym__lua_code] = "_lua_code",
  [aux_sym_conf_repeat1] = "conf_repeat1",
  [aux_sym_simple_directive_repeat1] = "simple_directive_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_lua_block_repeat1] = "lua_block_repeat1",
  [aux_sym__lua_code_repeat1] = "_lua_code_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_directive] = sym_directive,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_generic] = sym_generic,
  [sym_metric] = sym_metric,
  [aux_sym_variable_token1] = aux_sym_variable_token1,
  [aux_sym_variable_token2] = aux_sym_variable_token2,
  [sym_number] = sym_number,
  [sym_sq_string_content] = sym_sq_string_content,
  [sym_dq_string_content] = sym_dq_string_content,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_regex_pattern] = sym_regex_pattern,
  [sym__colon] = sym__colon,
  [sym__or] = sym__or,
  [sym__option] = sym__option,
  [sym__carrot] = sym__carrot,
  [sym__star] = sym__star,
  [sym_escaped_dot] = sym_escaped_dot,
  [sym__eol] = sym__eol,
  [sym__plus] = sym__plus,
  [sym__eq] = sym__eq,
  [sym__tild] = sym__tild,
  [sym__not] = sym__not,
  [sym__ts_modifier] = sym__ts_modifier,
  [sym__st_modifier] = sym__st_modifier,
  [sym_scheme] = sym_scheme,
  [sym_ipv4] = sym_ipv4,
  [anon_sym_access_by_lua_block] = anon_sym_access_by_lua_block,
  [aux_sym__lua_code_token1] = aux_sym__lua_code_token1,
  [aux_sym__lua_code_token2] = aux_sym__lua_code_token2,
  [aux_sym__lua_code_token3] = aux_sym__lua_code_token3,
  [sym_conf] = sym_conf,
  [sym__directives] = sym__directives,
  [sym_simple_directive] = sym_simple_directive,
  [sym_block_directive] = sym_block_directive,
  [sym_block] = sym_block,
  [sym_parenthese] = sym_parenthese,
  [sym_bracket] = sym_bracket,
  [sym_param] = sym_param,
  [sym_variable] = sym_variable,
  [sym_string] = sym_string,
  [sym_regex] = sym_regex,
  [sym__regex_tokens] = sym__regex_tokens,
  [sym_modifier] = sym_modifier,
  [sym_uri] = sym_uri,
  [sym_lua_block_directive] = sym_lua_block_directive,
  [sym_lua_block] = sym_lua_block,
  [sym_lua_code] = sym_lua_code,
  [sym__lua_code] = sym__lua_code,
  [aux_sym_conf_repeat1] = aux_sym_conf_repeat1,
  [aux_sym_simple_directive_repeat1] = aux_sym_simple_directive_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_lua_block_repeat1] = aux_sym_lua_block_repeat1,
  [aux_sym__lua_code_repeat1] = aux_sym__lua_code_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_generic] = {
    .visible = true,
    .named = true,
  },
  [sym_metric] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_sq_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_dq_string_content] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_regex_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym__colon] = {
    .visible = false,
    .named = true,
  },
  [sym__or] = {
    .visible = false,
    .named = true,
  },
  [sym__option] = {
    .visible = false,
    .named = true,
  },
  [sym__carrot] = {
    .visible = false,
    .named = true,
  },
  [sym__star] = {
    .visible = false,
    .named = true,
  },
  [sym_escaped_dot] = {
    .visible = true,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym__plus] = {
    .visible = false,
    .named = true,
  },
  [sym__eq] = {
    .visible = false,
    .named = true,
  },
  [sym__tild] = {
    .visible = false,
    .named = true,
  },
  [sym__not] = {
    .visible = false,
    .named = true,
  },
  [sym__ts_modifier] = {
    .visible = false,
    .named = true,
  },
  [sym__st_modifier] = {
    .visible = false,
    .named = true,
  },
  [sym_scheme] = {
    .visible = true,
    .named = true,
  },
  [sym_ipv4] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_access_by_lua_block] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__lua_code_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__lua_code_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__lua_code_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_conf] = {
    .visible = true,
    .named = true,
  },
  [sym__directives] = {
    .visible = false,
    .named = true,
  },
  [sym_simple_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_block_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthese] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym__regex_tokens] = {
    .visible = false,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_uri] = {
    .visible = true,
    .named = true,
  },
  [sym_lua_block_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_lua_block] = {
    .visible = true,
    .named = true,
  },
  [sym_lua_code] = {
    .visible = true,
    .named = true,
  },
  [sym__lua_code] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_conf_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_simple_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lua_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__lua_code_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
  field_pattern = 2,
  field_scheme = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_pattern] = "pattern",
  [field_scheme] = "scheme",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_pattern, 1},
  [2] =
    {field_scheme, 0},
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
  [5] = 4,
  [6] = 6,
  [7] = 4,
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
  [24] = 23,
  [25] = 23,
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
  [47] = 21,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 21,
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
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
};

static inline bool sym__not_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < 160
      ? (c < ' '
        ? (c >= '\t' && c <= '\r')
        : c <= ' ')
      : (c <= 160 || c == 5760))
    : (c <= 8203 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8288)
      : (c <= 12288 || c == 65279))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(43);
      if (lookahead == '!') ADVANCE(136);
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(131);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == ']') ADVANCE(72);
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '}') ADVANCE(68);
      if (lookahead == '~') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (sym__not_character_set_1(lookahead)) SKIP(41)
      if (('A' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(136);
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(131);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == ']') ADVANCE(72);
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '~') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (sym__not_character_set_1(lookahead)) SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(136);
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(131);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == ']') ADVANCE(72);
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '~') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (sym__not_character_set_1(lookahead)) SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(136);
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(131);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == '~') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (sym__not_character_set_1(lookahead)) SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(136);
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(131);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '~') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (sym__not_character_set_1(lookahead)) SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(136);
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(131);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == ']') ADVANCE(72);
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == '~') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (sym__not_character_set_1(lookahead)) SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(136);
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '$') ADVANCE(132);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == '_') ADVANCE(116);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '~') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(136);
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '$') ADVANCE(132);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == '_') ADVANCE(116);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '~') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(136);
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '$') ADVANCE(132);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == ']') ADVANCE(72);
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == '_') ADVANCE(116);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '~') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '$') ADVANCE(96);
      if (sym__not_character_set_1(lookahead)) ADVANCE(95);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '#') ADVANCE(147);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '}') ADVANCE(68);
      if (sym__not_character_set_1(lookahead)) ADVANCE(148);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(33);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (sym__not_character_set_1(lookahead)) SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '$') ADVANCE(93);
      if (lookahead == '\'') ADVANCE(97);
      if (sym__not_character_set_1(lookahead)) ADVANCE(92);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(153);
      if (sym__not_character_set_1(lookahead)) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(155);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(150);
      if (sym__not_character_set_1(lookahead)) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(152);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(130);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == ':') ADVANCE(31);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(75);
      if (lookahead == ',' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == ',' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(78);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(35);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(35);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(35);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(36);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(36);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(36);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(37);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(37);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(37);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(139);
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(31);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 33:
      if (lookahead == '{') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 34:
      if (lookahead == '}') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 36:
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 37:
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 38:
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 40:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 41:
      if (eof) ADVANCE(43);
      if (lookahead == '!') ADVANCE(136);
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(131);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == ']') ADVANCE(72);
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '}') ADVANCE(68);
      if (lookahead == '~') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (sym__not_character_set_1(lookahead)) SKIP(41)
      if (('A' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 42:
      if (eof) ADVANCE(43);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == '}') ADVANCE(68);
      if (sym__not_character_set_1(lookahead)) SKIP(42)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == '_') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == '_') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == '_') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'a') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'b') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'b') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'c') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'c') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'c') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'e') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'k') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'l') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'l') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'o') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 's') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 's') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'u') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'y') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_directive);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_directive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_generic);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == ',' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_generic);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == ':') ADVANCE(31);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(75);
      if (lookahead == ',' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_generic);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == ',' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(78);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_generic);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == ',' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(77);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_generic);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_generic);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_metric);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == ',' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_metric);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == ':') ADVANCE(31);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(75);
      if (lookahead == ',' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_variable_token2);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == '_') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == '_') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == '_') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '_') ADVANCE(32);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '_') ADVANCE(32);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '_') ADVANCE(32);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == '_') ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '_') ADVANCE(32);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_sq_string_content);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_sq_string_content);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '$') ADVANCE(93);
      if (sym__not_character_set_1(lookahead)) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(91);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_sq_string_content);
      if (lookahead == '{') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_dq_string_content);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_dq_string_content);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '$') ADVANCE(96);
      if (sym__not_character_set_1(lookahead)) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_dq_string_content);
      if (lookahead == '{') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '/') ADVANCE(38);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '/' ||
          lookahead == '[') ADVANCE(1);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '!') ADVANCE(136);
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '$') ADVANCE(132);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == '_') ADVANCE(116);
      if (lookahead == '~') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '!') ADVANCE(136);
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '$') ADVANCE(132);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == '_') ADVANCE(116);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '~') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '!') ADVANCE(136);
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '$') ADVANCE(132);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == ']') ADVANCE(72);
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == '_') ADVANCE(116);
      if (lookahead == '~') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == ',' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(124);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == ',' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(77);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(124);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(124);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(124);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(40);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(124);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(124);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(124);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(40);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(124);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(124);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(124);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(124);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(124);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(40);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(124);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(124);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '}') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != '[') ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '\\') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != '[') ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != '[') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__colon);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__or);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__option);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__carrot);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__star);
      if (lookahead == '~') ADVANCE(138);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_escaped_dot);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '{') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '{') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__plus);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__eq);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__tild);
      if (lookahead == '*') ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__not);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__ts_modifier);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__st_modifier);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_scheme);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_ipv4);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_ipv4);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_ipv4);
      if (lookahead == '/') ADVANCE(38);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_ipv4);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_ipv4);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_ipv4);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_access_by_lua_block);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__lua_code_token1);
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__lua_code_token1);
      if (lookahead == '#') ADVANCE(147);
      if (sym__not_character_set_1(lookahead)) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__lua_code_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__lua_code_token2);
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__lua_code_token2);
      if (lookahead == '#') ADVANCE(150);
      if (sym__not_character_set_1(lookahead)) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__lua_code_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__lua_code_token3);
      if (lookahead == '\n') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__lua_code_token3);
      if (lookahead == '#') ADVANCE(153);
      if (sym__not_character_set_1(lookahead)) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__lua_code_token3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(155);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 42},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 42},
  [27] = {.lex_state = 42},
  [28] = {.lex_state = 42},
  [29] = {.lex_state = 42},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 42},
  [43] = {.lex_state = 42},
  [44] = {.lex_state = 42},
  [45] = {.lex_state = 42},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 42},
  [49] = {.lex_state = 42},
  [50] = {.lex_state = 42},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 42},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 15},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 15},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 15},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 15},
  [82] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_metric] = ACTIONS(1),
    [aux_sym_variable_token1] = ACTIONS(1),
    [aux_sym_variable_token2] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym__colon] = ACTIONS(1),
    [sym__or] = ACTIONS(1),
    [sym__option] = ACTIONS(1),
    [sym__carrot] = ACTIONS(1),
    [sym__star] = ACTIONS(1),
    [sym_escaped_dot] = ACTIONS(1),
    [sym__eol] = ACTIONS(1),
    [sym__plus] = ACTIONS(1),
    [sym__eq] = ACTIONS(1),
    [sym__tild] = ACTIONS(1),
    [sym__not] = ACTIONS(1),
    [sym__ts_modifier] = ACTIONS(1),
    [sym__st_modifier] = ACTIONS(1),
    [anon_sym_access_by_lua_block] = ACTIONS(1),
  },
  [1] = {
    [sym_conf] = STATE(82),
    [sym__directives] = STATE(29),
    [sym_simple_directive] = STATE(29),
    [sym_block_directive] = STATE(29),
    [sym_lua_block_directive] = STATE(29),
    [aux_sym_conf_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(7),
    [anon_sym_access_by_lua_block] = ACTIONS(9),
  },
  [2] = {
    [sym_block] = STATE(44),
    [sym_parenthese] = STATE(11),
    [sym_bracket] = STATE(11),
    [sym_param] = STATE(4),
    [sym_variable] = STATE(11),
    [sym_string] = STATE(11),
    [sym_regex] = STATE(11),
    [sym__regex_tokens] = STATE(19),
    [sym_modifier] = STATE(11),
    [sym_uri] = STATE(11),
    [aux_sym_simple_directive_repeat1] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_generic] = ACTIONS(19),
    [sym_metric] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [aux_sym_variable_token2] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(27),
    [sym__colon] = ACTIONS(29),
    [sym__or] = ACTIONS(29),
    [sym__option] = ACTIONS(29),
    [sym__carrot] = ACTIONS(29),
    [sym__star] = ACTIONS(31),
    [sym_escaped_dot] = ACTIONS(33),
    [sym__eol] = ACTIONS(31),
    [sym__plus] = ACTIONS(29),
    [sym__eq] = ACTIONS(35),
    [sym__tild] = ACTIONS(37),
    [sym__not] = ACTIONS(35),
    [sym__ts_modifier] = ACTIONS(35),
    [sym__st_modifier] = ACTIONS(35),
    [sym_scheme] = ACTIONS(39),
    [sym_ipv4] = ACTIONS(19),
  },
  [3] = {
    [sym_block] = STATE(48),
    [sym_parenthese] = STATE(11),
    [sym_bracket] = STATE(11),
    [sym_param] = STATE(2),
    [sym_variable] = STATE(11),
    [sym_string] = STATE(11),
    [sym_regex] = STATE(11),
    [sym__regex_tokens] = STATE(19),
    [sym_modifier] = STATE(11),
    [sym_uri] = STATE(11),
    [aux_sym_simple_directive_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_generic] = ACTIONS(19),
    [sym_metric] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [aux_sym_variable_token2] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(27),
    [sym__colon] = ACTIONS(29),
    [sym__or] = ACTIONS(29),
    [sym__option] = ACTIONS(29),
    [sym__carrot] = ACTIONS(29),
    [sym__star] = ACTIONS(31),
    [sym_escaped_dot] = ACTIONS(33),
    [sym__eol] = ACTIONS(31),
    [sym__plus] = ACTIONS(29),
    [sym__eq] = ACTIONS(35),
    [sym__tild] = ACTIONS(37),
    [sym__not] = ACTIONS(35),
    [sym__ts_modifier] = ACTIONS(35),
    [sym__st_modifier] = ACTIONS(35),
    [sym_scheme] = ACTIONS(39),
    [sym_ipv4] = ACTIONS(19),
  },
  [4] = {
    [sym_parenthese] = STATE(11),
    [sym_bracket] = STATE(11),
    [sym_param] = STATE(4),
    [sym_variable] = STATE(11),
    [sym_string] = STATE(11),
    [sym_regex] = STATE(11),
    [sym__regex_tokens] = STATE(19),
    [sym_modifier] = STATE(11),
    [sym_uri] = STATE(11),
    [aux_sym_simple_directive_repeat1] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(48),
    [sym_generic] = ACTIONS(51),
    [sym_metric] = ACTIONS(51),
    [aux_sym_variable_token1] = ACTIONS(54),
    [aux_sym_variable_token2] = ACTIONS(54),
    [sym_number] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_DOT] = ACTIONS(63),
    [sym__colon] = ACTIONS(66),
    [sym__or] = ACTIONS(66),
    [sym__option] = ACTIONS(66),
    [sym__carrot] = ACTIONS(66),
    [sym__star] = ACTIONS(69),
    [sym_escaped_dot] = ACTIONS(72),
    [sym__eol] = ACTIONS(69),
    [sym__plus] = ACTIONS(66),
    [sym__eq] = ACTIONS(75),
    [sym__tild] = ACTIONS(78),
    [sym__not] = ACTIONS(75),
    [sym__ts_modifier] = ACTIONS(75),
    [sym__st_modifier] = ACTIONS(75),
    [sym_scheme] = ACTIONS(81),
    [sym_ipv4] = ACTIONS(51),
  },
  [5] = {
    [sym_parenthese] = STATE(11),
    [sym_bracket] = STATE(11),
    [sym_param] = STATE(5),
    [sym_variable] = STATE(11),
    [sym_string] = STATE(11),
    [sym_regex] = STATE(11),
    [sym__regex_tokens] = STATE(19),
    [sym_modifier] = STATE(11),
    [sym_uri] = STATE(11),
    [aux_sym_simple_directive_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(48),
    [anon_sym_RBRACK] = ACTIONS(43),
    [sym_generic] = ACTIONS(51),
    [sym_metric] = ACTIONS(51),
    [aux_sym_variable_token1] = ACTIONS(54),
    [aux_sym_variable_token2] = ACTIONS(54),
    [sym_number] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [anon_sym_SLASH] = ACTIONS(84),
    [anon_sym_DOT] = ACTIONS(84),
    [sym__colon] = ACTIONS(66),
    [sym__or] = ACTIONS(66),
    [sym__option] = ACTIONS(66),
    [sym__carrot] = ACTIONS(66),
    [sym__star] = ACTIONS(69),
    [sym_escaped_dot] = ACTIONS(87),
    [sym__eol] = ACTIONS(69),
    [sym__plus] = ACTIONS(66),
    [sym__eq] = ACTIONS(75),
    [sym__tild] = ACTIONS(78),
    [sym__not] = ACTIONS(75),
    [sym__ts_modifier] = ACTIONS(75),
    [sym__st_modifier] = ACTIONS(75),
    [sym_scheme] = ACTIONS(81),
    [sym_ipv4] = ACTIONS(51),
  },
  [6] = {
    [sym_parenthese] = STATE(11),
    [sym_bracket] = STATE(11),
    [sym_param] = STATE(5),
    [sym_variable] = STATE(11),
    [sym_string] = STATE(11),
    [sym_regex] = STATE(11),
    [sym__regex_tokens] = STATE(19),
    [sym_modifier] = STATE(11),
    [sym_uri] = STATE(11),
    [aux_sym_simple_directive_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(90),
    [sym_generic] = ACTIONS(19),
    [sym_metric] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [aux_sym_variable_token2] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(92),
    [anon_sym_DOT] = ACTIONS(92),
    [sym__colon] = ACTIONS(29),
    [sym__or] = ACTIONS(29),
    [sym__option] = ACTIONS(29),
    [sym__carrot] = ACTIONS(29),
    [sym__star] = ACTIONS(31),
    [sym_escaped_dot] = ACTIONS(94),
    [sym__eol] = ACTIONS(31),
    [sym__plus] = ACTIONS(29),
    [sym__eq] = ACTIONS(35),
    [sym__tild] = ACTIONS(37),
    [sym__not] = ACTIONS(35),
    [sym__ts_modifier] = ACTIONS(35),
    [sym__st_modifier] = ACTIONS(35),
    [sym_scheme] = ACTIONS(39),
    [sym_ipv4] = ACTIONS(19),
  },
  [7] = {
    [sym_parenthese] = STATE(11),
    [sym_bracket] = STATE(11),
    [sym_param] = STATE(7),
    [sym_variable] = STATE(11),
    [sym_string] = STATE(11),
    [sym_regex] = STATE(11),
    [sym__regex_tokens] = STATE(19),
    [sym_modifier] = STATE(11),
    [sym_uri] = STATE(11),
    [aux_sym_simple_directive_repeat1] = STATE(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(48),
    [sym_generic] = ACTIONS(51),
    [sym_metric] = ACTIONS(51),
    [aux_sym_variable_token1] = ACTIONS(54),
    [aux_sym_variable_token2] = ACTIONS(54),
    [sym_number] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [sym__colon] = ACTIONS(66),
    [sym__or] = ACTIONS(66),
    [sym__option] = ACTIONS(66),
    [sym__carrot] = ACTIONS(66),
    [sym__star] = ACTIONS(69),
    [sym_escaped_dot] = ACTIONS(99),
    [sym__eol] = ACTIONS(69),
    [sym__plus] = ACTIONS(66),
    [sym__eq] = ACTIONS(75),
    [sym__tild] = ACTIONS(78),
    [sym__not] = ACTIONS(75),
    [sym__ts_modifier] = ACTIONS(75),
    [sym__st_modifier] = ACTIONS(75),
    [sym_scheme] = ACTIONS(81),
    [sym_ipv4] = ACTIONS(51),
  },
  [8] = {
    [sym_parenthese] = STATE(11),
    [sym_bracket] = STATE(11),
    [sym_param] = STATE(7),
    [sym_variable] = STATE(11),
    [sym_string] = STATE(11),
    [sym_regex] = STATE(11),
    [sym__regex_tokens] = STATE(19),
    [sym_modifier] = STATE(11),
    [sym_uri] = STATE(11),
    [aux_sym_simple_directive_repeat1] = STATE(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_generic] = ACTIONS(19),
    [sym_metric] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [aux_sym_variable_token2] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(104),
    [anon_sym_DOT] = ACTIONS(104),
    [sym__colon] = ACTIONS(29),
    [sym__or] = ACTIONS(29),
    [sym__option] = ACTIONS(29),
    [sym__carrot] = ACTIONS(29),
    [sym__star] = ACTIONS(31),
    [sym_escaped_dot] = ACTIONS(106),
    [sym__eol] = ACTIONS(31),
    [sym__plus] = ACTIONS(29),
    [sym__eq] = ACTIONS(35),
    [sym__tild] = ACTIONS(37),
    [sym__not] = ACTIONS(35),
    [sym__ts_modifier] = ACTIONS(35),
    [sym__st_modifier] = ACTIONS(35),
    [sym_scheme] = ACTIONS(39),
    [sym_ipv4] = ACTIONS(19),
  },
  [9] = {
    [sym_parenthese] = STATE(11),
    [sym_bracket] = STATE(11),
    [sym_param] = STATE(8),
    [sym_variable] = STATE(11),
    [sym_string] = STATE(11),
    [sym_regex] = STATE(11),
    [sym__regex_tokens] = STATE(19),
    [sym_modifier] = STATE(11),
    [sym_uri] = STATE(11),
    [aux_sym_simple_directive_repeat1] = STATE(8),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(108),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_generic] = ACTIONS(19),
    [sym_metric] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [aux_sym_variable_token2] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(104),
    [anon_sym_DOT] = ACTIONS(104),
    [sym__colon] = ACTIONS(29),
    [sym__or] = ACTIONS(29),
    [sym__option] = ACTIONS(29),
    [sym__carrot] = ACTIONS(29),
    [sym__star] = ACTIONS(31),
    [sym_escaped_dot] = ACTIONS(106),
    [sym__eol] = ACTIONS(31),
    [sym__plus] = ACTIONS(29),
    [sym__eq] = ACTIONS(35),
    [sym__tild] = ACTIONS(37),
    [sym__not] = ACTIONS(35),
    [sym__ts_modifier] = ACTIONS(35),
    [sym__st_modifier] = ACTIONS(35),
    [sym_scheme] = ACTIONS(39),
    [sym_ipv4] = ACTIONS(19),
  },
  [10] = {
    [sym_parenthese] = STATE(11),
    [sym_bracket] = STATE(11),
    [sym_param] = STATE(6),
    [sym_variable] = STATE(11),
    [sym_string] = STATE(11),
    [sym_regex] = STATE(11),
    [sym__regex_tokens] = STATE(19),
    [sym_modifier] = STATE(11),
    [sym_uri] = STATE(11),
    [aux_sym_simple_directive_repeat1] = STATE(6),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(110),
    [sym_generic] = ACTIONS(19),
    [sym_metric] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [aux_sym_variable_token2] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(92),
    [anon_sym_DOT] = ACTIONS(92),
    [sym__colon] = ACTIONS(29),
    [sym__or] = ACTIONS(29),
    [sym__option] = ACTIONS(29),
    [sym__carrot] = ACTIONS(29),
    [sym__star] = ACTIONS(31),
    [sym_escaped_dot] = ACTIONS(94),
    [sym__eol] = ACTIONS(31),
    [sym__plus] = ACTIONS(29),
    [sym__eq] = ACTIONS(35),
    [sym__tild] = ACTIONS(37),
    [sym__not] = ACTIONS(35),
    [sym__ts_modifier] = ACTIONS(35),
    [sym__st_modifier] = ACTIONS(35),
    [sym_scheme] = ACTIONS(39),
    [sym_ipv4] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 9,
      sym_generic,
      sym_metric,
      sym_number,
      anon_sym_SLASH,
      anon_sym_DOT,
      sym__star,
      sym__eol,
      sym__tild,
      sym_ipv4,
    ACTIONS(112), 21,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__colon,
      sym__or,
      sym__option,
      sym__carrot,
      sym_escaped_dot,
      sym__plus,
      sym__eq,
      sym__not,
      sym__ts_modifier,
      sym__st_modifier,
      sym_scheme,
  [38] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 9,
      sym_generic,
      sym_metric,
      sym_number,
      anon_sym_SLASH,
      anon_sym_DOT,
      sym__star,
      sym__eol,
      sym__tild,
      sym_ipv4,
    ACTIONS(116), 21,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__colon,
      sym__or,
      sym__option,
      sym__carrot,
      sym_escaped_dot,
      sym__plus,
      sym__eq,
      sym__not,
      sym__ts_modifier,
      sym__st_modifier,
      sym_scheme,
  [76] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 9,
      sym_generic,
      sym_metric,
      sym_number,
      anon_sym_SLASH,
      anon_sym_DOT,
      sym__star,
      sym__eol,
      sym__tild,
      sym_ipv4,
    ACTIONS(120), 21,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__colon,
      sym__or,
      sym__option,
      sym__carrot,
      sym_escaped_dot,
      sym__plus,
      sym__eq,
      sym__not,
      sym__ts_modifier,
      sym__st_modifier,
      sym_scheme,
  [114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 9,
      sym_generic,
      sym_metric,
      sym_number,
      anon_sym_SLASH,
      anon_sym_DOT,
      sym__star,
      sym__eol,
      sym__tild,
      sym_ipv4,
    ACTIONS(124), 21,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__colon,
      sym__or,
      sym__option,
      sym__carrot,
      sym_escaped_dot,
      sym__plus,
      sym__eq,
      sym__not,
      sym__ts_modifier,
      sym__st_modifier,
      sym_scheme,
  [152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 9,
      sym_generic,
      sym_metric,
      sym_number,
      anon_sym_SLASH,
      anon_sym_DOT,
      sym__star,
      sym__eol,
      sym__tild,
      sym_ipv4,
    ACTIONS(128), 21,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__colon,
      sym__or,
      sym__option,
      sym__carrot,
      sym_escaped_dot,
      sym__plus,
      sym__eq,
      sym__not,
      sym__ts_modifier,
      sym__st_modifier,
      sym_scheme,
  [190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 9,
      sym_generic,
      sym_metric,
      sym_number,
      anon_sym_SLASH,
      anon_sym_DOT,
      sym__star,
      sym__eol,
      sym__tild,
      sym_ipv4,
    ACTIONS(132), 21,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__colon,
      sym__or,
      sym__option,
      sym__carrot,
      sym_escaped_dot,
      sym__plus,
      sym__eq,
      sym__not,
      sym__ts_modifier,
      sym__st_modifier,
      sym_scheme,
  [228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 9,
      sym_generic,
      sym_metric,
      sym_number,
      anon_sym_SLASH,
      anon_sym_DOT,
      sym__star,
      sym__eol,
      sym__tild,
      sym_ipv4,
    ACTIONS(136), 21,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__colon,
      sym__or,
      sym__option,
      sym__carrot,
      sym_escaped_dot,
      sym__plus,
      sym__eq,
      sym__not,
      sym__ts_modifier,
      sym__st_modifier,
      sym_scheme,
  [266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 9,
      sym_generic,
      sym_metric,
      sym_number,
      anon_sym_SLASH,
      anon_sym_DOT,
      sym__star,
      sym__eol,
      sym__tild,
      sym_ipv4,
    ACTIONS(140), 21,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__colon,
      sym__or,
      sym__option,
      sym__carrot,
      sym_escaped_dot,
      sym__plus,
      sym__eq,
      sym__not,
      sym__ts_modifier,
      sym__st_modifier,
      sym_scheme,
  [304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 9,
      sym_generic,
      sym_metric,
      sym_number,
      anon_sym_SLASH,
      anon_sym_DOT,
      sym__star,
      sym__eol,
      sym__tild,
      sym_ipv4,
    ACTIONS(144), 21,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__colon,
      sym__or,
      sym__option,
      sym__carrot,
      sym_escaped_dot,
      sym__plus,
      sym__eq,
      sym__not,
      sym__ts_modifier,
      sym__st_modifier,
      sym_scheme,
  [342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 9,
      sym_generic,
      sym_metric,
      sym_number,
      anon_sym_SLASH,
      anon_sym_DOT,
      sym__star,
      sym__eol,
      sym__tild,
      sym_ipv4,
    ACTIONS(148), 21,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__colon,
      sym__or,
      sym__option,
      sym__carrot,
      sym_escaped_dot,
      sym__plus,
      sym__eq,
      sym__not,
      sym__ts_modifier,
      sym__st_modifier,
      sym_scheme,
  [380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 9,
      sym_generic,
      sym_metric,
      sym_number,
      anon_sym_SLASH,
      anon_sym_DOT,
      sym__star,
      sym__eol,
      sym__tild,
      sym_ipv4,
    ACTIONS(152), 21,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__colon,
      sym__or,
      sym__option,
      sym__carrot,
      sym_escaped_dot,
      sym__plus,
      sym__eq,
      sym__not,
      sym__ts_modifier,
      sym__st_modifier,
      sym_scheme,
  [418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 9,
      sym_generic,
      sym_metric,
      sym_number,
      anon_sym_SLASH,
      anon_sym_DOT,
      sym__star,
      sym__eol,
      sym__tild,
      sym_ipv4,
    ACTIONS(156), 21,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__colon,
      sym__or,
      sym__option,
      sym__carrot,
      sym_escaped_dot,
      sym__plus,
      sym__eq,
      sym__not,
      sym__ts_modifier,
      sym__st_modifier,
      sym_scheme,
  [456] = 4,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_regex_pattern,
    ACTIONS(144), 3,
      sym__colon,
      sym__or,
      sym__option,
    ACTIONS(146), 25,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_generic,
      sym_metric,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
      anon_sym_DOT,
      sym__carrot,
      sym__star,
      sym_escaped_dot,
      sym__eol,
      sym__plus,
      sym__eq,
      sym__tild,
      sym__not,
      sym__ts_modifier,
      sym__st_modifier,
      sym_scheme,
      sym_ipv4,
  [495] = 4,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_regex_pattern,
    ACTIONS(144), 3,
      sym__colon,
      sym__or,
      sym__option,
    ACTIONS(146), 24,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_generic,
      sym_metric,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
      anon_sym_DOT,
      sym__carrot,
      sym__star,
      sym_escaped_dot,
      sym__eol,
      sym__plus,
      sym__eq,
      sym__tild,
      sym__not,
      sym__ts_modifier,
      sym__st_modifier,
      sym_scheme,
      sym_ipv4,
  [533] = 4,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_regex_pattern,
    ACTIONS(144), 3,
      sym__colon,
      sym__or,
      sym__option,
    ACTIONS(146), 24,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym_generic,
      sym_metric,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
      anon_sym_DOT,
      sym__carrot,
      sym__star,
      sym_escaped_dot,
      sym__eol,
      sym__plus,
      sym__eq,
      sym__tild,
      sym__not,
      sym__ts_modifier,
      sym__st_modifier,
      sym_scheme,
      sym_ipv4,
  [571] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym_directive,
    ACTIONS(169), 1,
      anon_sym_access_by_lua_block,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(26), 5,
      sym__directives,
      sym_simple_directive,
      sym_block_directive,
      sym_lua_block_directive,
      aux_sym_conf_repeat1,
  [592] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_directive,
    ACTIONS(9), 1,
      anon_sym_access_by_lua_block,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    STATE(26), 5,
      sym__directives,
      sym_simple_directive,
      sym_block_directive,
      sym_lua_block_directive,
      aux_sym_conf_repeat1,
  [612] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_directive,
    ACTIONS(9), 1,
      anon_sym_access_by_lua_block,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    STATE(27), 5,
      sym__directives,
      sym_simple_directive,
      sym_block_directive,
      sym_lua_block_directive,
      aux_sym_conf_repeat1,
  [632] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_directive,
    ACTIONS(9), 1,
      anon_sym_access_by_lua_block,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    STATE(26), 5,
      sym__directives,
      sym_simple_directive,
      sym_block_directive,
      sym_lua_block_directive,
      aux_sym_conf_repeat1,
  [652] = 5,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(181), 1,
      sym_dq_string_content,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(178), 2,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
    STATE(30), 2,
      sym_variable,
      aux_sym_string_repeat2,
  [670] = 5,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_sq_string_content,
    ACTIONS(190), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 2,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
    STATE(33), 2,
      sym_variable,
      aux_sym_string_repeat1,
  [688] = 5,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      sym_dq_string_content,
    ACTIONS(192), 2,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
    STATE(30), 2,
      sym_variable,
      aux_sym_string_repeat2,
  [706] = 5,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_sq_string_content,
    ACTIONS(202), 1,
      anon_sym_SQUOTE,
    ACTIONS(196), 2,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
    STATE(33), 2,
      sym_variable,
      aux_sym_string_repeat1,
  [724] = 5,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym_dq_string_content,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 2,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
    STATE(32), 2,
      sym_variable,
      aux_sym_string_repeat2,
  [742] = 5,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(208), 1,
      sym_sq_string_content,
    ACTIONS(186), 2,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
    STATE(31), 2,
      sym_variable,
      aux_sym_string_repeat1,
  [760] = 5,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    ACTIONS(212), 1,
      aux_sym__lua_code_token1,
    STATE(63), 1,
      sym__lua_code,
    STATE(36), 2,
      sym_lua_code,
      aux_sym_lua_block_repeat1,
  [777] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      sym_generic,
    ACTIONS(217), 1,
      sym_ipv4,
    STATE(15), 1,
      sym_variable,
    ACTIONS(21), 2,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
  [794] = 6,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LBRACE,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      aux_sym__lua_code_token1,
  [813] = 5,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 1,
      aux_sym__lua_code_token1,
    STATE(63), 1,
      sym__lua_code,
    STATE(36), 2,
      sym_lua_code,
      aux_sym_lua_block_repeat1,
  [830] = 4,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(231), 1,
      aux_sym__lua_code_token1,
    STATE(63), 1,
      sym__lua_code,
    STATE(39), 2,
      sym_lua_code,
      aux_sym_lua_block_repeat1,
  [844] = 4,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 1,
      aux_sym__lua_code_token1,
    STATE(41), 2,
      sym__lua_code,
      aux_sym__lua_code_repeat1,
  [858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(240), 2,
      sym_directive,
      anon_sym_access_by_lua_block,
  [870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(244), 2,
      sym_directive,
      anon_sym_access_by_lua_block,
  [882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(248), 2,
      sym_directive,
      anon_sym_access_by_lua_block,
  [894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(252), 2,
      sym_directive,
      anon_sym_access_by_lua_block,
  [906] = 4,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(231), 1,
      aux_sym__lua_code_token1,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    STATE(52), 2,
      sym__lua_code,
      aux_sym__lua_code_repeat1,
  [920] = 2,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(154), 4,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      sym_dq_string_content,
      anon_sym_DQUOTE,
  [930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(258), 2,
      sym_directive,
      anon_sym_access_by_lua_block,
  [942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(262), 2,
      sym_directive,
      anon_sym_access_by_lua_block,
  [954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(266), 2,
      sym_directive,
      anon_sym_access_by_lua_block,
  [966] = 5,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    ACTIONS(272), 1,
      anon_sym_DQUOTE,
    ACTIONS(274), 1,
      aux_sym__lua_code_token1,
  [982] = 4,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(231), 1,
      aux_sym__lua_code_token1,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
    STATE(41), 2,
      sym__lua_code,
      aux_sym__lua_code_repeat1,
  [996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(280), 2,
      sym_directive,
      anon_sym_access_by_lua_block,
  [1008] = 2,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(154), 4,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      sym_sq_string_content,
      anon_sym_SQUOTE,
  [1018] = 5,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    ACTIONS(284), 1,
      anon_sym_SQUOTE,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
    ACTIONS(288), 1,
      aux_sym__lua_code_token1,
  [1034] = 4,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    ACTIONS(294), 1,
      aux_sym__lua_code_token1,
  [1047] = 4,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
    ACTIONS(298), 1,
      anon_sym_SQUOTE,
    ACTIONS(300), 1,
      aux_sym__lua_code_token1,
  [1060] = 4,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    ACTIONS(284), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      aux_sym__lua_code_token1,
  [1073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_lua_block,
  [1083] = 3,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    ACTIONS(288), 1,
      aux_sym__lua_code_token1,
  [1093] = 3,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    ACTIONS(306), 1,
      aux_sym__lua_code_token1,
  [1103] = 3,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    ACTIONS(310), 1,
      aux_sym__lua_code_token1,
  [1113] = 3,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    ACTIONS(314), 1,
      aux_sym__lua_code_token1,
  [1123] = 3,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    ACTIONS(294), 1,
      aux_sym__lua_code_token1,
  [1133] = 3,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
    ACTIONS(300), 1,
      aux_sym__lua_code_token1,
  [1143] = 2,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(316), 1,
      aux_sym__lua_code_token3,
  [1150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_SQUOTE,
  [1157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
  [1164] = 2,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(322), 1,
      aux_sym__lua_code_token3,
  [1171] = 2,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(324), 1,
      aux_sym__lua_code_token2,
  [1178] = 2,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym__lua_code_token2,
  [1185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
  [1192] = 2,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(330), 1,
      aux_sym__lua_code_token3,
  [1199] = 2,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(332), 1,
      aux_sym__lua_code_token3,
  [1206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
  [1213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
  [1220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_SQUOTE,
  [1227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_DQUOTE,
  [1234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_SQUOTE,
  [1241] = 2,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(344), 1,
      aux_sym__lua_code_token2,
  [1248] = 2,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(346), 1,
      aux_sym__lua_code_token3,
  [1255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 38,
  [SMALL_STATE(13)] = 76,
  [SMALL_STATE(14)] = 114,
  [SMALL_STATE(15)] = 152,
  [SMALL_STATE(16)] = 190,
  [SMALL_STATE(17)] = 228,
  [SMALL_STATE(18)] = 266,
  [SMALL_STATE(19)] = 304,
  [SMALL_STATE(20)] = 342,
  [SMALL_STATE(21)] = 380,
  [SMALL_STATE(22)] = 418,
  [SMALL_STATE(23)] = 456,
  [SMALL_STATE(24)] = 495,
  [SMALL_STATE(25)] = 533,
  [SMALL_STATE(26)] = 571,
  [SMALL_STATE(27)] = 592,
  [SMALL_STATE(28)] = 612,
  [SMALL_STATE(29)] = 632,
  [SMALL_STATE(30)] = 652,
  [SMALL_STATE(31)] = 670,
  [SMALL_STATE(32)] = 688,
  [SMALL_STATE(33)] = 706,
  [SMALL_STATE(34)] = 724,
  [SMALL_STATE(35)] = 742,
  [SMALL_STATE(36)] = 760,
  [SMALL_STATE(37)] = 777,
  [SMALL_STATE(38)] = 794,
  [SMALL_STATE(39)] = 813,
  [SMALL_STATE(40)] = 830,
  [SMALL_STATE(41)] = 844,
  [SMALL_STATE(42)] = 858,
  [SMALL_STATE(43)] = 870,
  [SMALL_STATE(44)] = 882,
  [SMALL_STATE(45)] = 894,
  [SMALL_STATE(46)] = 906,
  [SMALL_STATE(47)] = 920,
  [SMALL_STATE(48)] = 930,
  [SMALL_STATE(49)] = 942,
  [SMALL_STATE(50)] = 954,
  [SMALL_STATE(51)] = 966,
  [SMALL_STATE(52)] = 982,
  [SMALL_STATE(53)] = 996,
  [SMALL_STATE(54)] = 1008,
  [SMALL_STATE(55)] = 1018,
  [SMALL_STATE(56)] = 1034,
  [SMALL_STATE(57)] = 1047,
  [SMALL_STATE(58)] = 1060,
  [SMALL_STATE(59)] = 1073,
  [SMALL_STATE(60)] = 1083,
  [SMALL_STATE(61)] = 1093,
  [SMALL_STATE(62)] = 1103,
  [SMALL_STATE(63)] = 1113,
  [SMALL_STATE(64)] = 1123,
  [SMALL_STATE(65)] = 1133,
  [SMALL_STATE(66)] = 1143,
  [SMALL_STATE(67)] = 1150,
  [SMALL_STATE(68)] = 1157,
  [SMALL_STATE(69)] = 1164,
  [SMALL_STATE(70)] = 1171,
  [SMALL_STATE(71)] = 1178,
  [SMALL_STATE(72)] = 1185,
  [SMALL_STATE(73)] = 1192,
  [SMALL_STATE(74)] = 1199,
  [SMALL_STATE(75)] = 1206,
  [SMALL_STATE(76)] = 1213,
  [SMALL_STATE(77)] = 1220,
  [SMALL_STATE(78)] = 1227,
  [SMALL_STATE(79)] = 1234,
  [SMALL_STATE(80)] = 1241,
  [SMALL_STATE(81)] = 1248,
  [SMALL_STATE(82)] = 1255,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conf, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_simple_directive_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_simple_directive_repeat1, 2), SHIFT_REPEAT(9),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_simple_directive_repeat1, 2), SHIFT_REPEAT(10),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_simple_directive_repeat1, 2), SHIFT_REPEAT(11),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_simple_directive_repeat1, 2), SHIFT_REPEAT(21),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_simple_directive_repeat1, 2), SHIFT_REPEAT(35),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_simple_directive_repeat1, 2), SHIFT_REPEAT(34),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_simple_directive_repeat1, 2), SHIFT_REPEAT(23),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_simple_directive_repeat1, 2), SHIFT_REPEAT(19),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_simple_directive_repeat1, 2), SHIFT_REPEAT(19),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_simple_directive_repeat1, 2), SHIFT_REPEAT(23),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_simple_directive_repeat1, 2), SHIFT_REPEAT(16),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_simple_directive_repeat1, 2), SHIFT_REPEAT(16),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_simple_directive_repeat1, 2), SHIFT_REPEAT(37),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_simple_directive_repeat1, 2), SHIFT_REPEAT(24),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_simple_directive_repeat1, 2), SHIFT_REPEAT(24),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_simple_directive_repeat1, 2), SHIFT_REPEAT(25),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_simple_directive_repeat1, 2), SHIFT_REPEAT(25),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthese, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthese, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri, 2, .production_id = 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uri, 2, .production_id = 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, .production_id = 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2, .production_id = 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthese, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthese, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conf_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conf_repeat1, 2), SHIFT_REPEAT(3),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conf_repeat1, 2), SHIFT_REPEAT(59),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conf, 1),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(47),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(30),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(54),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(33),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_lua_block_repeat1, 2),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lua_block_repeat1, 2), SHIFT_REPEAT(38),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lua_code, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lua_code, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__lua_code_repeat1, 2),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__lua_code_repeat1, 2), SHIFT_REPEAT(38),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_directive, 2, .production_id = 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_directive, 2, .production_id = 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_directive, 3, .production_id = 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_directive, 3, .production_id = 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_directive, 3, .production_id = 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_directive, 3, .production_id = 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_directive, 2, .production_id = 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_directive, 2, .production_id = 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lua_block, 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lua_block, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lua_code, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lua_code, 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lua_block_directive, 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lua_block_directive, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lua_code, 4),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lua_code, 4),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lua_code, 7),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lua_code, 7),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lua_code, 6),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lua_code, 6),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lua_code, 10),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lua_code, 10),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lua_code, 9),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lua_code, 9),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lua_code, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lua_code, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [348] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_nginx(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
