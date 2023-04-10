module.exports = grammar({
  name: 'Chapel',
  rules: {
    // note: order of rules in this file controls matching precedence
    source_file: $ => repeat(
      choice(
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
      $._anything,
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

    proc_or_iter: $ => choice(
      'proc',
      'iter',
    ),

    procedure_kind: $ => choice(
      'inline',
      'export',
      'extern',
      'override',
    ),

    _statement: $ => choice(
      $.block_statement,
      $.expression_statement,
      $.return_statement,
      $.variable_declaration_statement,
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
        ',',
        $.variable_declaration_list,
      ),
    ),

    variable_declaration: $ => seq(
      $.identifier_list,
      optional($.type_part),
      optional($.initialization_part),
    ),

    type_part: $ => prec(3,seq(
      ':',
      $.type_expression,
    )),


    initialization_part: $ => prec(3,seq(
      '=',
      $._expression,
    )),

    _expression: $ => choice(
      $.literal_expression,
      $.variable_expression,
      //$.call_expression,
      $.type_expression,
    ),

    literal_expression: $ => choice(
      $.bool_literal,
      $.integer_literal,
      //$.real_literal,
      //$.imaginary_literal,
      //$.string_literal,
      //$.bytes_literal,
      //$.range_literal,
      //$.domain_literal,
      //$.array_literal,
    ),

    variable_expression: $ => choice(
      $.identifier,
    ),

    type_expression: $ => prec.left(choice(
      $.primitive_type,
      //$.enum_type,
      $._expression,
    )),

    bool_literal: $ => choice(
      'true',
      'false',
    ),

    integer_literal: $ => choice(
      $._digits,
      // TODO: add other choices here
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

    identifier: $ => prec.left(seq(
      $._letter_or_underscore,
      optional($._legal_identifier_chars),
    )),

    identifier_list: $ => prec.left(choice(
      $.identifier,
      seq(
        $.identifier,
        ',',
        $.identifier_list,
      ),
      //$.tuple_grouped_identifier_list,
      //seq(
      //  $.tuple_grouped_identifier_list,
      //  $.identifier_list,
      //),
    )),

    _legal_identifier_chars: $ => prec.left(seq(
      $._letter_or_underscore,
      optional($._legal_identifier_chars),
    )),

    _letter_or_underscore: $ => choice(
      $._letter,
      '_',
    ),

    _type: $ => choice(
        'bool',
        'int',
    ),

    _anything: $ => /.*/,
    _letter: $ => /[a-zA-Z]/,
    _digit: $ => /[\d]/,
    _binary_digit: $ => /[01]/,
    _number: $ => /[\d]./,

    _digits: $ => choice(
      $._digit,
      seq(
        $._digit,
        $._separator_digits,
      ),
    ),

    _separator_digits: $=> choice(
      $._digit,
      '_',
      seq(
        $._digit,
        $._separator_digits,
      ),
      seq(
        '_',
        $._separator_digits,
      ),
    ),
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
