
#include "assertion-macros.h"

int
main(void) {
  assert_bail();
  assert(1 == 2);
  return 0;
}
