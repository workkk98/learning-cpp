#include <iostream>
using namespace std;

int add(int a, int b);

const double *f1(const double arr[], int n);
const double *f2(const double arr[], int);
const double *f3(const double *, int);

int main() {
  int (*add2)(int, int) = add;

  // 函数指针的两种使用，1. 直接使用add2，因为函数名就是一个指针。所以函数名和指针相同 2. (*add)()
  cout << add2(1, 2) << endl;

  // 函数指针数组
  const double *(*funArray[])(const double[], int) = { f1, f2, f3 };
  for (int i = 0; i < 3; ++i) {
    const double arr[] = { 1.0 };
    cout << (funArray[i])(arr, 1)[0] << endl;
  }
}

int add(int a, int b) {
  return a + b;
}

const double *f1(const double arr[], int n) {
  cout << "f1" << endl;
  double *p = (double *)malloc(sizeof (double) * n);
  for (int i = 0; i < n; ++i) {
    p[i] = arr[i];
  }
  return p;
}

const double *f2(const double arr[], int n) {
  cout << "f2" << endl;
  double *p = (double *)malloc(sizeof (double) * n);
  for (int i = 0; i < n; ++i) {
    p[i] = arr[i];
  }
  return p;
}

const double *f3(const double arr[], int n) {
  cout << "f3" << endl;
  double *p = (double *)malloc(sizeof (double) * n);
  for (int i = 0; i < n; ++i) {
    p[i] = arr[i];
  }
  return p;
}