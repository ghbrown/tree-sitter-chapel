module.exports = grammar({
  name: 'Chapel',
  rules: {
    // note: order of rules in this file controls matching precedence
    source_file: $ => repeat(
      choice(
        $._definition,
        $._statement,
        $._comment,
      )
    ),

    _comment: $ => choice(
      $.inline_comment,
      //$.block_comment,
    ),

    inline_comment: $ => seq(
      '//',
      $.anything,
    ),

    _definition: $ => choice(
      $.function_definition,
      // TODO: other kinds of definitions
    ),

    function_definition: $ => seq(
      'proc',
      $.identifier,
      $.parameter_list,
      $._type,
      $.block
    ),

    parameter_list: $ => seq(
      '(',
       // TODO: parameters
      ')',
    ),

    _type: $ => choice(
        'bool',
        'int',
    ),

    block: $ => seq(
      '{',
      repeat($._statement),
      '}'
    ),

    _statement: $ => choice(
      $.variable_declaration_statement,
      $.return_statement,
      //$.if_statement
    ),

    variable_declaration_statement: $ => choice(
      seq(
        $.variable_kind,
        $.identifier,
        ':',
        $._type,
        ';',
      ),
      seq(
        $.variable_kind,
        $.identifier,
        ':',
        $._type,
        '=',
        $._expression,
        ';',
      ),
    ),

    variable_kind: $ => choice(
      'param',
      'const',
      'var',
      'ref',
      'const ref',
    ),

    return_statement: $ => seq(
      'return',
      $._expression,
      ';'
    ),

    _expression: $ => choice(
      $.variable_expression,
      $.number,
    ),

    variable_expression: $ => choice(
      $.identifier,
    ),

    // TODO: formal specification given in lexical structure docs
    //identifier: $ => /[a-z]+/,
    identifier: $ => choice(
      $.letter_or_underscore,
      seq(
        $.letter_or_underscore,
        $.legal_identifier_chars,
      ),
    ),

    // TODO: current version of legal_identifier_chars does not match
    //       multiple characters
    legal_identifier_chars: $ => choice(
      $.letter_or_underscore,
      $.digit,
      '$',
    ),

    letter_or_underscore: $ => choice(
      $.letter,
      '_',
    ),

    anything: $ =>/.*/,
    letter: $ => /[a-zA-Z]/,
    digit: $ => /[\d]/,
    number: $ => /[\d]./,

  }
});
