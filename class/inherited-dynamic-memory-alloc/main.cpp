#include <iostream>
#include "baseDMA.h"
#include "lackDMA.h"

int main(int args, char **argv) {
  baseDMA foo("foo", 2);

  baseDMA bar = foo;

  lackDMA foo1("color1", "foo1", 2);

  return 0;
}