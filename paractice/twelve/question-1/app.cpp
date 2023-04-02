#include <iostream>
#include "cow.cpp"

int main(int argc, char *argv[]) {
  Cow cow1;

  Cow cow2("foo", "drink water", 200);


  cow2.ShowCow();

  Cow cow3 = cow2;
  cow3.ShowCow();

  cow1 = cow3;

  cow1.ShowCow();
}