#include <iostream>

using namespace std;

void f(char const *ptr)
{
    cout << "const pointer" << endl;
}

void f(int v)
{
    cout << "int argument" << endl;
}

int main()
{
    f();
    return 0;
}