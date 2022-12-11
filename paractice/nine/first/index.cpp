#include <iostream>
#include "golf.h"

using namespace std;

int main() {
  while (true) {
    golf foo;
    int result = setgolf(foo);

    if (result == 0) {
      break;
    }

    showgolf(foo);
  }

  cout << "procedure done" << endl;
  return 0;
}