#include <iostream>
#include <cstring>
using namespace std;

int main(int args, char **argv) {
  // 与c的不同，字符串可以字面量声明(包括编译器能自己计算)
  char foo[] = "Do u happy today?\n";
  cout << foo;

  cout << "prefix" "suffix\n";
  // strlen是不计算\0的，所以就把它当作js的length就行了。
  cout << "foo.length = " << strlen(foo);

  return 0;
}