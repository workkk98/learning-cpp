#include <iostream>
using namespace std;

// 函数重载，两个函数原型、两个函数实现（因为本质上不是一个函数）
void printStr(const string);
// 函数重载主要和函数参数有关，参数数量、类型、是否是常量。引用和数据变量则视为相同
void printStr(const string, int);

int add(int, int);
float add(float, float);
double add(double, double);

int main() {
  const string foo = "2022-10-16";

  cout << "printStr(foo)" << endl;
  printStr(foo);

  cout << "printStr(foo, 1)" << endl;
  printStr(foo , 1);

  // 值的一提的是，如果参数类型不同，c++会尝试转类型并调用其中一个，但这个case中有三个原型都可以，那就会报错了
  // call to 'add' is ambiguous
  // add(1, 2.0);
}

void printStr(const string a) {
  cout << a << '\n';
}

void printStr(const string a, int b) {
  if (b == 0) return;

  printStr(a);
}

int add(int a, int b) {
  return a + b;
}

float add(float a, float b) {
  return a + b;
}

float add(double a, double b) {
  return a + b;
}