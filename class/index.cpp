#include <iostream>
#include "stock.h"

Stock::Stock() {
  using std::cout;
  cout << "Stock::Stock()" << std::endl;
}

Stock::~Stock() {
  std::cout << "Stock::~Stock()" << std::endl;
}

int main() {
  {
    Stock foo;
  }
  return 0;
}