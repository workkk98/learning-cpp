#include<iostream>
using namespace std;
class MyClass
{
public:
    MyClass(int i = 0)
    {
        cout << i;
    }
    MyClass(const MyClass &x)
    {
        cout << 2;
    }
    MyClass &operator=(const MyClass &x)
    {
        cout << 3;
        return *this;
    }
    ~MyClass()
    {
        cout << 4;
    }
};
int main()
{
    MyClass obj1(1), obj2(2);
    // 下面这行语句也是obj3的初始化逻辑（类的实例化语法）。调用的是构造函数而非重载的赋值函数。
    MyClass obj3 = obj1;
    return 0;
}

// 最终输出的值为 122444
