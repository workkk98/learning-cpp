#include <iostream>

using namespace std;

int main() {
  char name[30];
  char favoriteFood[20];
  cout << "please enter u name:\n";
  cin >> name;
  cout << "please enter u favorite food\n";
  cin >> favoriteFood;
  cout << "Your name is: " << name 
    << " favorite food is " << favoriteFood << "book is done.\n";
  return 0;
}