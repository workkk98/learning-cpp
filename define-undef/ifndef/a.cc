#include "foo.h"

// foo.h文件名转换成了_FOO_H_
#ifndef _FOO_H_
#define _FOO_H_
  boo compare(int a, int b) {
    return a > b;
  }
#endif