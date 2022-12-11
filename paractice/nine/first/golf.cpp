#include "golf.h"
#include <string>
#include <iostream>

using namespace std;

void setgolf(struct golf &g, const char *name, int hc) {
  int nameInd = 0;
  int fullnameIndex = 0;
  // 这里可以使用strcpy这个函数
  while (nameInd < strlen(name) && fullnameIndex < Len - 1) {
    g.fullname[fullnameIndex++] = name[nameInd++];
  }

  g.handicap = hc;
}

// 从用户输入
int setgolf(struct golf &g) {
  cout << "please enter player name" << endl;
    std::cin.getline(g.fullname, Len);
    if(g.fullname[0])
    {
        std::cout << "Enter handicap: ";
        std::cin >> g.handicap;
        std::cin.get();
        return 1;
    }
    else
        return 0;

  // 这样子写第二个循环直接结束...
  // char name[Len];
  // // cin >> name;
  // cin.getline(name, 40);

  // if (!name[0]) {
  //   return 0;
  // }

  // cout << "please enter player handicap" << endl;

  // int handicap = 0;
  // cin >> handicap;

  // setgolf(g, name, handicap);

  // return 1;
}

void handicap(struct golf & g, int hc) {
  g.handicap = hc;
}

void showgolf(const struct golf & g) {
  cout << "g.fullname: " << g.fullname << endl;
  cout << "g.handicap: " << g.handicap << endl;
}
