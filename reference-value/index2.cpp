#include <iostream>
#include <cstring>

struct car
{
  /* data */
  int horsePower;
  float length;
  std::string name;
};

void replaceCar(struct car &target);

int main() {
  using namespace std;
  struct car myCar = {
    176,
    4.98,
    "LEXUS ES300h"
  };
  struct car &tempCar = myCar;
  replaceCar(tempCar);
  cout << "myCar.name" << myCar.name << endl;
}


void replaceCar(struct car &target) {
  target.name = "BMW 530i";
}