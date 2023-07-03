#include <cstring>
#include <iostream>
#include "baseDMA.h"

using namespace std;

baseDMA::baseDMA(const char * l, int r) {
  cout<<"baseDMA 构造函数"<<endl;
  int len = strlen(l);
  label = new char[len + 1];
  strcpy(label, l);
  rating = r;
}

baseDMA::baseDMA(const baseDMA &rs) {
  cout << "baseDMA 复制拷贝函数" << endl;
  char * temp = (char *)rs.label;
  int len = strlen(temp);
  label = new char[len + 1];
  strcpy(label, temp);
  rating = rs.rating;
}

baseDMA::~baseDMA() {
  delete[] label;
  cout << "" << endl;
}

// 类型 + 类作用域 + 函数名
baseDMA & baseDMA::operator=(const baseDMA & rs) {
  char * temp = rs.label;
  int len = strlen(temp);
  label = new char[len + 1];
  strcpy(label, temp);
  rating = rs.rating;

  return *this;
}
