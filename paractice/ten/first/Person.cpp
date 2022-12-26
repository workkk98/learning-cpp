#include <iostream>
#include <string>
#include "Person.h"

Person::Person(const std::string &ln, const char * fn) {
  lname = ln;
  strcpy(fname, fn);
}


// 括号后面的const指不修改对象
void Person::Show() const {
  std::cout << this->fname << " · " << this->lname << std::endl;
}

void Person::FormalShow() const {
  std::cout << this->lname << " · " << this->fname << std::endl;
}