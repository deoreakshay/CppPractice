#include <iostream>

void function(int & ref)
{
    std::cout << "Normal" << std::endl;
}

void function(int && ref)
{
    std::cout << "Rval ref" << std::endl;
}


int main()
{
    int i = 10;

    const int &j = 30;

    int && k = 29;  // r value reference;
    k++;

    std::cout << k << std::endl;

    function(i);
    function(200);
    return 0;
}