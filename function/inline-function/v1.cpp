#include <iostream>
using namespace std;

inline int add(int a, int b) {
  return a + b;
}

int main() {
  cout << "add(1,2) >>>>>>> " << add(1, 2) << '\n';
  return 0;
}
