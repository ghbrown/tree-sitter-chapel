
## Contributing

### Useful resources

- [overview](https://tree-sitter.github.io/tree-sitter/creating-parsers) of `tree-sitter` parser creation
- Chapel grammar: [full specification](https://chapel-lang.org/docs/language/spec/syntax.html#productions-listed-application-order), [basics](https://chapel-lang.org/docs/language/spec/lexical-structure.html)
- `tree-siter-<other languages>`: [C](https://github.com/tree-sitter/tree-sitter-c), [Fortran](https://github.com/stadelmanma/tree-sitter-fortran), [Zig](https://github.com/maxxnino/tree-sitter-zig)
- [learn Chapel in Y minutes](https://learnxinyminutes.com/docs/chapel/): a great source of test code

The other `tree-sitter`s are primarily useful for conventions and tricks in `grammar.js`, but C and Zig also use different approaches to get C bindings.


### Style

- **rule naming**: `named-rule` is given by `named_rule`, or `_named_rule` if it should be hidden in the syntax tree


### Notes

- While the `tree-sitter` docs suggest not simply translating a grammar specification into a `grammar.js` file, this is the process I have been following.
  This is for two reasons: it's pretty easy, it will probably make testing easier (in the sense that the rate of change of renaming and restructing will be low, and instead new capabilities will just be added).

- I have not written any tests yet. While *this is not okay*, I have been focusing on adding as many features as possible.

