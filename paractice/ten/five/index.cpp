#include <iostream>
#include "Stack.h"


int main() {
  using namespace std;

  Stack *foo = new Stack();

  foo->isEmpty();

  struct customer c1 = {
    "zhanghefan",
    2
  };

  foo->push(c1);

  customer c2;
  foo->pop(c2);

  cout << "c2.fullname = " << c2.fullname << endl;

  return 0;
}