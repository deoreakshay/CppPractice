#include <iostream>

using namespace std;

class Base
{
    public:
    Base(){}
    Base(int x): x(x){}

    friend void fun(Base &);

    private:
    int x;
};

void fun(Base &obj)
{
    cout << obj.x << endl;
    obj.x = 25;
    cout << obj.x << endl;
}

int main()
{
    Base b(10);
    fun(b);
    return 0;
}