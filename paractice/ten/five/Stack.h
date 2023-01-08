#include <iostream>
#include "customer.h"

typedef customer Item;

class Stack {
  private:
    const static int len = 10; // 静态变量声明，存储空间也是静态变量的位置
    Item items[len];
    int top;
  public:
    Stack();
    bool push(const Item &item);
    bool pop(Item & item);
    bool isEmpty() const;
    bool isFull() const;
};