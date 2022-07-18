#include <iostream>
#include <vector>

int main() {
  using namespace std;
  vector<int> v1(2);
  v1[0] = 1;
  v1[1] = 2;
  v1.push_back(3);
  for (int i = 0; i < 3; ++i) {
    cout<<v1[i]<<endl;
  }
  return 0;
}