#include "./the-only-instance.h"
#include <string>

TheOnlyInstance::TheOnlyInstance() {
  // foo = 1;
}

TheOnlyInstance* TheOnlyInstance::getTheOnlyInstance() {
  // 初始化全局变量
  static TheOnlyInstance onlyOne;
  std::string foo = "assign";
  for(int i = 0; i< foo.size() && i < 10; ++i) {
    onlyOne.bar[i] = foo[i];
  }
  return &onlyOne;
}


int main() {
  // calling a protected constructor of class 'TheOnlyInstance'
  // TheOnlyInstance bar;

  TheOnlyInstance* bar = TheOnlyInstance::getTheOnlyInstance();

  return 1;
}