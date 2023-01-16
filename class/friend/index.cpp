#include <iostream>
#include "timer.h"

int main(int args, char *argv[]) {
  Timer a(3, 50);
  Timer b(10, 20);

  // 不可以像下面这行语句直接访问a对象的minute属性，所以只有成员函数或友元函数。
  //std::cout << "a.minute = " << a.minute << std::endl;

  // 重载运算符， 运算符的重载本质上是成员函数的调用。
  Timer c = a + b;

  c.show();


  Timer d = 3 * a;
  d.show();

  return 0;
}