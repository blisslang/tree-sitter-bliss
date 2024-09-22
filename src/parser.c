#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_LPAREN = 1,
  anon_sym_mod = 2,
  anon_sym_def = 3,
  anon_sym_def_DASHrec = 4,
  anon_sym_fun = 5,
  anon_sym_let = 6,
  anon_sym_let_DASHmut = 7,
  anon_sym_ret = 8,
  anon_sym_use = 9,
  anon_sym_if = 10,
  anon_sym_and = 11,
  anon_sym_or = 12,
  anon_sym_RPAREN = 13,
  sym_comment = 14,
  sym_number = 15,
  sym_string = 16,
  aux_sym_symbol_token1 = 17,
  sym_dot = 18,
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK = 20,
  sym_source_file = 21,
  sym__sexp = 22,
  sym_special_form = 23,
  sym_function_definition = 24,
  sym_module_definition = 25,
  sym__atom = 26,
  sym_symbol = 27,
  sym_list = 28,
  sym_value_list = 29,
  aux_sym_source_file_repeat1 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_mod] = "mod",
  [anon_sym_def] = "def",
  [anon_sym_def_DASHrec] = "def-rec",
  [anon_sym_fun] = "fun",
  [anon_sym_let] = "let",
  [anon_sym_let_DASHmut] = "let-mut",
  [anon_sym_ret] = "ret",
  [anon_sym_use] = "use",
  [anon_sym_if] = "if",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_RPAREN] = ")",
  [sym_comment] = "comment",
  [sym_number] = "number",
  [sym_string] = "string",
  [aux_sym_symbol_token1] = "symbol_token1",
  [sym_dot] = "dot",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_source_file] = "source_file",
  [sym__sexp] = "_sexp",
  [sym_special_form] = "special_form",
  [sym_function_definition] = "function_definition",
  [sym_module_definition] = "module_definition",
  [sym__atom] = "_atom",
  [sym_symbol] = "symbol",
  [sym_list] = "list",
  [sym_value_list] = "value_list",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_def_DASHrec] = anon_sym_def_DASHrec,
  [anon_sym_fun] = anon_sym_fun,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_let_DASHmut] = anon_sym_let_DASHmut,
  [anon_sym_ret] = anon_sym_ret,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_comment] = sym_comment,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
  [sym_dot] = sym_dot,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_source_file] = sym_source_file,
  [sym__sexp] = sym__sexp,
  [sym_special_form] = sym_special_form,
  [sym_function_definition] = sym_function_definition,
  [sym_module_definition] = sym_module_definition,
  [sym__atom] = sym__atom,
  [sym_symbol] = sym_symbol,
  [sym_list] = sym_list,
  [sym_value_list] = sym_value_list,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def_DASHrec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let_DASHmut] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ret] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_symbol_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__sexp] = {
    .visible = false,
    .named = true,
  },
  [sym_special_form] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_module_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__atom] = {
    .visible = false,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_value_list] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
  field_parameters = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_parameters] = "parameters",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 2},
  [1] =
    {field_name, 2},
    {field_parameters, 3},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      ADVANCE_MAP(
        '"', 1,
        '(', 6,
        ')', 18,
        '.', 47,
        ';', 19,
        '[', 48,
        ']', 49,
        'a', 35,
        'd', 30,
        'f', 44,
        'i', 32,
        'l', 27,
        'm', 37,
        'o', 38,
        'r', 31,
        'u', 40,
        '+', 2,
        '-', 2,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      ADVANCE_MAP(
        '"', 1,
        '(', 6,
        ')', 18,
        ';', 19,
        '[', 48,
        ']', 49,
        'd', 30,
        '+', 2,
        '-', 2,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_def_DASHrec);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_fun);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_let_DASHmut);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_ret);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_use);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'c') ADVANCE(9);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'd') ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'm') ADVANCE(45);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 's') ADVANCE(28);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'u') ADVANCE(36);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'u') ADVANCE(43);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_def_DASHrec] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_let_DASHmut] = ACTIONS(1),
    [anon_sym_ret] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [aux_sym_symbol_token1] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(28),
    [sym__sexp] = STATE(7),
    [sym_special_form] = STATE(7),
    [sym_function_definition] = STATE(7),
    [sym_module_definition] = STATE(7),
    [sym__atom] = STATE(7),
    [sym_symbol] = STATE(7),
    [sym_list] = STATE(7),
    [sym_value_list] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_def_DASHrec] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(11),
    [sym_string] = ACTIONS(13),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [2] = {
    [sym__sexp] = STATE(6),
    [sym_special_form] = STATE(6),
    [sym_function_definition] = STATE(6),
    [sym_module_definition] = STATE(6),
    [sym__atom] = STATE(6),
    [sym_symbol] = STATE(6),
    [sym_list] = STATE(6),
    [sym_value_list] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_mod] = ACTIONS(17),
    [anon_sym_def] = ACTIONS(19),
    [anon_sym_def_DASHrec] = ACTIONS(19),
    [anon_sym_fun] = ACTIONS(21),
    [anon_sym_let] = ACTIONS(21),
    [anon_sym_let_DASHmut] = ACTIONS(21),
    [anon_sym_ret] = ACTIONS(21),
    [anon_sym_use] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_and] = ACTIONS(21),
    [anon_sym_or] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(25),
    [sym_string] = ACTIONS(27),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [3] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_module_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_list] = STATE(3),
    [sym_value_list] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_def] = ACTIONS(34),
    [anon_sym_def_DASHrec] = ACTIONS(34),
    [anon_sym_RPAREN] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(37),
    [sym_string] = ACTIONS(40),
    [aux_sym_symbol_token1] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(29),
  },
  [4] = {
    [sym__sexp] = STATE(13),
    [sym_special_form] = STATE(13),
    [sym_function_definition] = STATE(13),
    [sym_module_definition] = STATE(13),
    [sym__atom] = STATE(13),
    [sym_symbol] = STATE(12),
    [sym_list] = STATE(13),
    [sym_value_list] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_def_DASHrec] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(46),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(48),
    [sym_string] = ACTIONS(50),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [5] = {
    [sym__sexp] = STATE(10),
    [sym_special_form] = STATE(10),
    [sym_function_definition] = STATE(10),
    [sym_module_definition] = STATE(10),
    [sym__atom] = STATE(10),
    [sym_symbol] = STATE(10),
    [sym_list] = STATE(10),
    [sym_value_list] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_def_DASHrec] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(56),
  },
  [6] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_module_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_list] = STATE(3),
    [sym_value_list] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_def_DASHrec] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(58),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(60),
    [sym_string] = ACTIONS(62),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [7] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_module_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_list] = STATE(3),
    [sym_value_list] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_def_DASHrec] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(60),
    [sym_string] = ACTIONS(62),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [8] = {
    [sym__sexp] = STATE(13),
    [sym_special_form] = STATE(13),
    [sym_function_definition] = STATE(13),
    [sym_module_definition] = STATE(13),
    [sym__atom] = STATE(13),
    [sym_symbol] = STATE(13),
    [sym_list] = STATE(13),
    [sym_value_list] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_def_DASHrec] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(46),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(48),
    [sym_string] = ACTIONS(50),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [9] = {
    [sym__sexp] = STATE(13),
    [sym_special_form] = STATE(13),
    [sym_function_definition] = STATE(13),
    [sym_module_definition] = STATE(13),
    [sym__atom] = STATE(13),
    [sym_symbol] = STATE(27),
    [sym_list] = STATE(13),
    [sym_value_list] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_def_DASHrec] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(46),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(48),
    [sym_string] = ACTIONS(50),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [10] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_module_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_list] = STATE(3),
    [sym_value_list] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_def_DASHrec] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(60),
    [sym_string] = ACTIONS(62),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(66),
  },
  [11] = {
    [sym__sexp] = STATE(15),
    [sym_special_form] = STATE(15),
    [sym_function_definition] = STATE(15),
    [sym_module_definition] = STATE(15),
    [sym__atom] = STATE(15),
    [sym_symbol] = STATE(15),
    [sym_list] = STATE(15),
    [sym_value_list] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_def_DASHrec] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(68),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(70),
    [sym_string] = ACTIONS(72),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [12] = {
    [sym__sexp] = STATE(14),
    [sym_special_form] = STATE(14),
    [sym_function_definition] = STATE(14),
    [sym_module_definition] = STATE(14),
    [sym__atom] = STATE(14),
    [sym_symbol] = STATE(14),
    [sym_list] = STATE(14),
    [sym_value_list] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_def_DASHrec] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(76),
    [sym_string] = ACTIONS(78),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [13] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_module_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_list] = STATE(3),
    [sym_value_list] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_def_DASHrec] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(80),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(60),
    [sym_string] = ACTIONS(62),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [14] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_module_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_list] = STATE(3),
    [sym_value_list] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_def_DASHrec] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(82),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(60),
    [sym_string] = ACTIONS(62),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [15] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_module_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_list] = STATE(3),
    [sym_value_list] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_def_DASHrec] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(84),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(60),
    [sym_string] = ACTIONS(62),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 4,
      anon_sym_def,
      anon_sym_def_DASHrec,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(86), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [18] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 4,
      anon_sym_def,
      anon_sym_def_DASHrec,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(90), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [36] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 4,
      anon_sym_def,
      anon_sym_def_DASHrec,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [54] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 4,
      anon_sym_def,
      anon_sym_def_DASHrec,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(98), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [72] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 4,
      anon_sym_def,
      anon_sym_def_DASHrec,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [90] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 4,
      anon_sym_def,
      anon_sym_def_DASHrec,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(106), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 4,
      anon_sym_def,
      anon_sym_def_DASHrec,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(110), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 4,
      anon_sym_def,
      anon_sym_def_DASHrec,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(114), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 4,
      anon_sym_def,
      anon_sym_def_DASHrec,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(118), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 4,
      anon_sym_def,
      anon_sym_def_DASHrec,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(122), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 4,
      anon_sym_def,
      anon_sym_def_DASHrec,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(126), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [198] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    STATE(11), 1,
      sym_value_list,
    ACTIONS(130), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
    ACTIONS(132), 4,
      anon_sym_def,
      anon_sym_def_DASHrec,
      sym_number,
      aux_sym_symbol_token1,
  [219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 18,
  [SMALL_STATE(18)] = 36,
  [SMALL_STATE(19)] = 54,
  [SMALL_STATE(20)] = 72,
  [SMALL_STATE(21)] = 90,
  [SMALL_STATE(22)] = 108,
  [SMALL_STATE(23)] = 126,
  [SMALL_STATE(24)] = 144,
  [SMALL_STATE(25)] = 162,
  [SMALL_STATE(26)] = 180,
  [SMALL_STATE(27)] = 198,
  [SMALL_STATE(28)] = 219,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_list, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_list, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 5, 0, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_definition, 5, 0, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 4, 0, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_definition, 4, 0, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_list, 3, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_list, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_form, 4, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_form, 4, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_form, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_form, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, 0, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, 0, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_bliss(void) {
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
