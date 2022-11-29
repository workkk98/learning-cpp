#include <iostream>
#include <vector>

int getAverage(int, int);

int main() {
  using namespace std;
  vector<int> results;

  char ch;
  int a;
  int b;

  cout << "if enter value equal 0, processor will quit." << endl;
  while (true) {
    cout << "Enter first integer:  ";
    cin >> a;
    cout << "Enter second integer:  ";
    cin >> b;
    results.push_back(getAverage(a, b));

    if (a == 0 || b == 0) {
      break;
    }

  }

  for (int i = 0; i < results.size(); ++i) {
    cout << i+1 << ". average = " << results[i] << endl;
  }

  return 0;
}


int getAverage(int a, int b) {
  return 2 * a * b / (a + b);
}