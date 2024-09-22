// PATTERNS

const COMMENT = token(/;[^;]*/);

const STRING = token(seq('"', repeat(choice(/[^"\\"]/, seq("\\", /(.|\n)/))), '"'))

const SYMBOL = token(/[a-zA-Z][^\s"\\:;\.\[\]\(\)]*|\d+[a-zA-Z][^\s"\\:;\.\[\]\(\)]*/);

const NUMBER = token(/[+-]?\d+\.?\d*/);

// MAIN SETUP

module.exports = grammar({
  name: "bliss",

  // TO SKIP (WHITESPACE AND COMMENTS)

  extras: ($) => [/(\s|\f)/, /* TODO */ $.comment],

  rules: {

    // WHAT TO DO WITH THE FILE

    source_file: ($) => repeat($._sexp),

    // TOKEN TYPES

    _sexp: ($) =>
      choice(
        $.special_form,
        $.function_definition,
        $.module_definition,
        $.list,
        $.value_list,
        $._atom
      ),

    // DEFINITIONS

    special_form: ($) =>
      prec(
        1,
        seq(
          "(",
          choice(
            "mod",
            "def",
            "def-rec",
            "fun",
            "let",
            "let-mut",
            "ret", // (maybe)
            "use",
            "if",
            "and",
            "or",
          ),
          repeat($._sexp),
          ")"
        )
      ),

    comment: ($) => COMMENT,

    function_definition: ($) =>
      prec(
        1,
        seq(
          "(",
          choice("def", "def-rec"),
          field("name", $.symbol),
          field("parameters", $.value_list),
          repeat($._sexp),
          ")"
        )
      ),

    module_definition: ($) =>
      prec(
        1,
        seq(
          "(",
          "mod",
          field("name", $.symbol),
          repeat($._sexp),
          ")"
        )
      ),

    _atom: ($) =>
      choice(
        $.number,
        $.string,
        $.symbol,
      ),

    number: ($) => NUMBER,

    string: ($) => STRING,

    symbol: ($) =>
      choice(
        "def",
        "def-rec",
        SYMBOL
      ),

    dot: ($) => token("."),

    list: ($) => seq("(", choice(repeat($._sexp)), ")"),

    value_list: ($) => seq("[", choice(repeat($._sexp)), "]"),
  },
});
