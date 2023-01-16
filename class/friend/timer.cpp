#include <iostream>

// c++引用文件的名称只能是小写吗？
#include "timer.h"

Timer::Timer() {
  minute = hour = 0;
}

Timer::Timer(int h, int m) {
  hour = h;
  minute = m;
}

Timer::~Timer() {
  std::cout<< "destroy timer" << std::endl;
}

Timer Timer::operator+(Timer &t) const {
  Timer ret;

  ret.minute = this->minute + t.minute;
  ret.hour = this->hour + t.hour + t.minute / 60;
  ret.minute = t.minute % 60;

  return ret;
}

// friend不需要在函数实现里写明
Timer operator*(int a, Timer &b) {
  Timer ret;
  ret.minute = b.minute * a;
  ret.hour = b.hour * a + ret.minute / 60;
  ret.minute = ret.minute % 60;

  return ret;
}

void Timer::show() {
  std::cout<< "this.hour = " << this->hour << std::endl;
  std::cout<< "this.minute = " << this->minute << std::endl;
}