#include <iostream>

#define x 100

#if defined (x) // if defined () 与 ifdef相同，#ifndef 与 if !defined() 用法相同
  #define y x
#endif

int main() {
  using namespace std;
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;

  return 0;
}