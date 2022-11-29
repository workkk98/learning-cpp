#include <iostream>

using namespace std;

int main() {
  // const修饰指针
  int foo = 10;
  int foo2 = 20;
  const int *bar = &foo; // 指向const的指针
  int* const baz = &foo; // const指针，这个翻译的太到位了

  // bar const修饰int变量，即不能通过指针修改变量foo
  // *bar = 20; // invalid
  cout << "*bar = " << *bar << endl;
  bar = &foo2;
  cout << "after assign foo2, *bar = " << *bar << endl;

  // baz const修饰指针，即不能变更指针地址。
  // *baz = &foo2; // invalid
  *baz = 30;
  cout << "*baz = " << *baz << endl;
  cout << "foo = " << foo << endl;
}