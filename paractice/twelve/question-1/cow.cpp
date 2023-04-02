#include "cow.h"
#include <iostream>
#include <string.h>

using namespace std;

Cow::Cow() {
  cout << "Cow constructor 1" << endl;
  hobby = new char[10];
  weight = 100;
}

Cow::Cow(const char *nm, const char *ho, double wt) {
  cout << "Cow constructor 2" << endl;
  strcpy(name, nm);

  // const_case 强制类型转换
  // hobby = const_cast<char *>(ho);
  int len = strlen(ho);
  cout<< "len = " << len << endl;
  hobby = new char[len + 1];
  strcpy(hobby, ho);

  weight = wt;
}

Cow::Cow(const Cow &c) {
  cout << "Cow constructor 3" << endl;
  strcpy(name, c.name);

  int len = strlen(c.hobby);
  cout<< "len = " << len << endl;
  // new动态分配内存和栈管理内存的不同
  hobby = new char[len + 1];
  strcpy(hobby, c.hobby);


  weight = c.weight;
}

Cow::~Cow() {
  cout << "Cow destructor" << endl;
  delete hobby;
}

Cow & Cow::operator=(const Cow & c) {
  cout << "Cow assignment operator" << endl;

  strcpy(name, c.name);

  int len = strlen(c.hobby);
  cout<< "len = " << len << endl;
  // new动态分配内存和栈管理内存的不同
  hobby = new char[len + 1];
  strcpy(hobby, c.hobby);

  weight = c.weight;
  return *this;
}

void Cow::ShowCow() const {
  cout<< "name:   " << this->name << endl;
  cout<< "hobby:   " << *this->hobby << endl;
  cout<< "weight:   " << this->weight << endl;
}