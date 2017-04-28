
#include <stdbool.h>
#include "assertion-macros.h"

void
assert_ok_tests() {
  assert_reset();
  assert_equal(0, assert_failures());

  // passes
  assert_ok(1);
  assert_ok(true);
  assert_ok(1 == 1);

  // failures
  assert_ok(0);
  assert_ok(false);
  assert_ok(1 == 2);

  assert_equal(3, assert_failures());
}

void
assert_equal_tests() {
  assert_reset();
  assert_equal(0, assert_failures());

  // passes
  assert_equal(0, 0);
  assert_equal(1, 1);
  assert_equal('a', 'a');

  // failures
  assert_equal(1, 0);
  assert_equal(2, 1);
  assert_equal('a', 'b');

  assert_equal(3, assert_failures());
}

void
assert_not_equal_tests() {
  assert_reset();
  assert_equal(0, assert_failures());

  // passes
  assert_not_equal(1, 0);
  assert_not_equal(2, 1);
  assert_not_equal('a', 'b');

  // failures
  assert_not_equal(0, 0);
  assert_not_equal(1, 1);
  assert_not_equal('a', 'a');

  assert_equal(3, assert_failures());
}

void
assert_str_equal_tests() {
  assert_reset();
  assert_equal(0, assert_failures());

  // passes
  assert_str_equal("hello world", "hello world");
  assert_str_equal("", "");

  // failures
  assert_str_equal("hello world", "goodbye world");
  assert_str_equal("hello", "hello world");

  assert_equal(2, assert_failures());
}

void
assert_str_not_equal_tests() {
  assert_reset();
  assert_equal(0, assert_failures());

  // passes
  assert_str_not_equal("hello world", "goodbye world");
  assert_str_not_equal("hello", "hello world");

  // failures
  assert_str_not_equal("hello world", "hello world");
  assert_str_not_equal("", "");

  assert_equal(2, assert_failures());
}

int
main(void) {
  assert_ok_tests();
  assert_equal_tests();
  assert_not_equal_tests();
  assert_str_equal_tests();
  assert_str_not_equal_tests();

  assert_reset();
  return assert_failures();
}
