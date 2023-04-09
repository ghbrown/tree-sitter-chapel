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
      $.argument_list,
      $._type,
      $.block_statement
    ),

    argument_list: $ => seq(
      '(',
      //eventually will be: optional($.formals),
      ')',
    ),

    privacy_specifier: $ => choice(
      'private',
      'public',
    ),

    _statement: $ => choice(
      $.block_statement,
      $.expression_statement,
      $.variable_declaration_statement,
      $.return_statement,
      //$.if_statement
    ),

    block_statement: $ => seq(
      '{',
      optional($.statements),
      '}'
    ),

    expression_statement: $ => seq(
      choice(
        $.variable_expression,
        //$.member_access_expression,
        //$.call_expression,
        //$.new_expression,
        //$.let_expression,
      ),
      ';',
    ),

    statements: $ => seq(
      $._statement,
      optional($.statements),
    ),

    variable_declaration_statement: $ => seq(
      optional($.privacy_specifier),
      //optional($.config-extern-or-export),
      $.variable_kind,
      $.variable_declaration_list,
      ';',
    ),

    variable_declaration_list: $ => choice(
      $.variable_declaration,
      seq(
        $.variable_declaration,
        $.variable_declaration_list,
      ),
    ),

    variable_declaration: $ => seq(
      $.identifier_list,
      optional($.type_part),
      optional($.initialization_part),
    ),

    type_part: $ => seq(
      ':',
      $.type_expression,
    ),


    initialization_part: $ => seq(
      '=',
      $._expression,
    ),

    _expression: $ => choice(
      //$.literal_expression,
      $.variable_expression,
      //$.call_expression,
      $.type_expression,
    ),

    variable_expression: $ => choice(
      $.identifier,
    ),

    type_expression: $ => choice(
      $.primitive_type,
      //$.enum_type,
      $._expression,
    ),

    primitive_type: $ => choice(
      'void',
      'nothing',
      'bool',
      'int', // TODO: make into seq(...,optional(...)) when primitive-type-parameter-part added
      'uint',
      'real',
      'imag',
      'complex',
      'string',
      'bytes',
      'enum',
      'record',
      'class',
      'owned',
      'shared',
      'unmanaged',
      'borrowed',
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
      optional($._expression),
      ';',
    ),

    identifier: $ => seq(
      $.letter_or_underscore,
      optional($.legal_identifier_chars),
    ),

    identifier_list: $ => choice(
      $.identifier,
      seq(
        $.identifier,
        $.identifier_list,
      ),
      //$.tuple_grouped_identifier_list,
      //seq(
      //  $.tuple_grouped_identifier_list,
      //  $.identifier_list,
      //),
    ),

    legal_identifier_chars: $ => repeat1(
      choice(
        $.letter_or_underscore,
        $.digit,
        '$',
      )
    ),

    letter_or_underscore: $ => choice(
      $.letter,
      '_',
    ),

    _type: $ => choice(
        'bool',
        'int',
    ),

    anything: $ => /.*/,
    letter: $ => /[a-zA-Z]/,
    digit: $ => /[\d]/,
    binary_digit: $ => /[01]/,
    number: $ => /[\d]./,
    assignment_operator: $ => choice(
      '=',
      '+=',
      '-=',
      '*=',
      '/=',
      '%=',
      '**=',
      '&=',
      '|=',
      '^=',
      '&&=',
      '||=',
      '<<=',
      '>>=',
    ),

  }
});
