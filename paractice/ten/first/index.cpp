#include <iostream>
#include "Person.h"

using namespace std;

int main() {
  Person one = Person( "my", "selft" );
  Person two("Smythcraft");
  Person three("Dimwiddy", "Sam");


  one.Show();
  cout<<endl;
  one.FormalShow();

  return 0;
}