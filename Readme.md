
# assertion-macros

  Simple assertion macros

## Installation

  Install with [clib(1)](https://github.com/clibs/clib):

    $ clib install stephenmathieson/assertion-macros.h

## API

### `assert_failures()`

  Get the number of failed assertions.

### `assert_reset()`

  Reset the number of failed assertions.

### `assert_bail()`

  Exit after the first failed assertion.

### Assertion macros:

- `assert(expression)`
- `assert_ok(expression)`
- `assert_equal(a, b)`
- `assert_not_equal(a, b)`
- `assert_str_equal(a, b)`
- `assert_str_not_equal(a, b)`
- `assert_strn_equal(a, b, n)`
- `assert_strn_not_equal(a, b, n)`

## Example

  See [example.c](https://github.com/stephenmathieson/assertion-macros.h/blob/master/example.c) and [bail.c](https://github.com/stephenmathieson/assertion-macros.h/blob/master/bail.c).

## License

(The MIT License)

Copyright (c) 2013 Stephen Mathieson &lt;me@stephenmathieson.com&gt;

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
'Software'), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.