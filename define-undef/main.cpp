#include <iostream>
using namespace std;

void registerModule();
void registerModule2();
void _register_foo();

//在用#define 定义时 ,
// 斜杠("\")是用来续行的
// "#"用来把参数转换成字符串，是给参数加上双引号。
// "##"则用来连接前后两个参数, 连接两个字符串。转换结果不带双引号。字符串和##有空格也是可以的，例如a ## b
// "#@"是给参数加上单引号

int main() {
  registerModule();
  // V("abc"); // use of undeclared identifier 'V'

  registerModule2();
}

void registerModule() {
  #define V(moduleName) printf(moduleName);
  V("aaa\n");
  #undef V
}

void registerModule2() {
  #define V(moduleName) _register_##moduleName();
  V(foo);
  #undef V
}

void _register_foo() {
  cout << "foo" << endl;
}