#include <iostream>
#include "Stack.h"

using namespace std;

Stack::Stack() {
  cout << "Stack initial" << endl;
  top = 0;
}

// 如果指明this指针，则不能修改对象里的属性？
bool Stack::push(const Item &item) {
  if (top >= len) {
    cout << "Stack overflow" << endl;
    return false;
  }

  cout << "Push item.fullname = " << item.fullname << endl;
  items[top++] = item;

  return true;
}

bool Stack::pop(Item &item) {
  if (top > 0) {
    item = items[--top];
    return true;
  }

  return false;
}


bool Stack::isEmpty() const {
  return (bool)top == 0;
}

bool Stack::isFull() const {
  return top == len;
}