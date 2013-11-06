
#include "assertion-macros.h"

int main(int argc, char **argv) {
  assert_bail();
  assert(1 == 2);
  return 0;
}
