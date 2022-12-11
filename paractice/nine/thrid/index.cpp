#include <iostream>
#include <new>

#define N 2
#define MaxSize 20

// 别忘了结构体对齐。
char buffer[100];

struct chaff {
  char dross[MaxSize];
  int slag;
};

int main() {
  using namespace std;
  chaff *p1 = new chaff[N];
  // 定位new
  chaff *p2 = new(buffer) chaff[N];

  cout << "&p2 = " << p2 << endl;
  cout << "&buffer =" << (void *)buffer << endl;

  chaff target;
  cout << "please enter chaff's dross, maxsize = 20" << endl;
  cin.getline(target.dross, 20);

  target.slag = strlen(target.dross);

  for (int i = 0; i < N; i++) {
    (p2+i)->slag = target.slag;
    strcpy((p2+i)->dross, target.dross);
    cout << "dross = " << (p2+i)->dross << endl;
  }

  return 0;
}