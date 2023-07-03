#include "baseDMA.h"
#include "lackDMA.h"
#include "cstring"
#include <iostream>

lackDMA::lackDMA(const char *c, const char * l, int r): baseDMA(l, r) {
  std::cout<< "lackDMA 构造函数" << std::endl;
  c = new char[strlen(c), + 1];
}