#include <iostream>

void swap(int &a, int &b);

int main(int args, char **argv) {
  using namespace std;
  int foo = 10;
  int bar = 5;
  // 引用变量一定需要初始化
  int &foo1 = foo;
  int &bar1 = bar;

  // 与指针的区别：1. 是否需要初始化 2. 是否需要使用*
  swap(foo1, bar1);
  cout << "foo1: "<< foo1 << '\n';
  cout << "bar1: "<< bar1 << '\n';

  // 临时变量的概念, 1.实参的类型正确，但不是左值。2.实参的类型不正确，但可以转换为正确的类型。
  float a = 2.0;
  double b = 3.1;
  // swap(a, b); // 编译器报错因为本来就是用来交换值的，这有啥意义。
  cout << "a: "<< a << '\n';
  cout << "b: "<< b << '\n';

  return 0;
}

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}