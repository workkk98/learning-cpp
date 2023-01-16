class Timer
{
  int minute;
  int hour;
  public:
    Timer();
    Timer(int h, int m);
    ~Timer();
    void show();
    Timer operator+(Timer &t) const;

    // 友元函数，函数原型需要friend定义。
    friend Timer operator*(int a, Timer &b);
};