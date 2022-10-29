#include <iostream>
#include <string>
using namespace std;

// template提供了一种更简单的方式去调用函数（范型编程）
// 与函数重载的区别参数列表的长度模板函数是相同的，但函数重载可以不同

// 模板函数有三种类型，函数定义

// https://github.com/czs108/Cpp-Primer-5th-Notes-CN/tree/master/Chapter-16%20Templates%20and%20Generic%20Programming

struct job {
  string position;
  string name;
  int salary;
};

// typename替换成class也是可行的
template <typename T>
void swap2(T &, T &);

// 3. 显示具体化explicait specialization (必须在模板函数声明后面)
template <> void swap2<job>(job& a, job& b) {
  string temp = a.name;
  a.name = b.name;
  b.name = temp;
}


int main() {

  int a = 1;
  int b = 2;
  swap2(a, b);

  double a1 = 1.1;
  double b1 = 2.2;
  swap2(a1, b1);

  // 此处省略 显示函数

  cout << "a: " << a << endl;
  cout << "b: " << b << endl;

  cout << "a1: " << a1 << endl;
  cout << "b1: " << b1 << endl;

  job foo = {
    "2-1",
    "FE",
    25000
  };

  job bar = {
    "1-2",
    "BE",
    20000
  };


  swap2(foo, bar);
  cout << "foo.name: " << foo.name << endl;
  cout << "bar.name: " << bar.name << endl;
}


// 1. 隐式实例化
template <typename T>
void swap2(T &a, T &b) {
  T temp = a;
  a = b;
  b = temp;
}

