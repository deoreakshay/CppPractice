#include <iostream>

using namespace std;

class Base {};

int main()
{
    auto x = 20;
    auto y = 20.5;
    auto b = Base();
    auto p= new Base();

    cout << typeid(x).name() << endl;
    cout << typeid(y).name() << endl;
    cout << typeid(b).name() << endl;
    cout << typeid(p).name() << endl;

    return 0;
}