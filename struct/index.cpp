#include <iostream>
#include <cstring>
using namespace std;


// 不定义结构名，但声明结构体变量
struct {
  std::string name;
  int age;
} me;

int main() {
  me.name = "zhf";
  me.age = 25;

  cout << "too old" << me.age << endl;

  // 结构就不像js中的对象那么灵活，只能通过同类型修改值（结构赋值），或者是一个个修改成员
  struct car {
    std::string name;
  };
  car bmw = {
    "BMW"
  };

  car benz = {
    "Benz"
  };

  bmw = benz;
  cout << "bmw.name = benz.name   " << bmw.name << endl;
}