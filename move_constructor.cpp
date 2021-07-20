#include <iostream>
#include <vector>

struct A{
    int * ptr;

    A(){
        std::cout << "A constructor" << std::endl;
        ptr = new int;
    }
    A(const A& a1){
        std::cout << "A copy constructor " << std::endl;
        this->ptr = new int;
    }
    A( A && a1){
        std::cout << "Move constructor" << std::endl;
        this->ptr = a1.ptr;
        a1.ptr = nullptr;
    }
    ~A(){
        std::cout << "destrcutor" << std::endl;
        delete ptr;
    }
};

int main()
{
    std::vector<A> v1;

    //v1.push_back(A());      // This calls a move constrcutor if it is present otherewise Copy constructor;

    A a1;
    v1.push_back(a1);          // This calls a copy constructor;  
    v1.push_back(std::move(a1)); //explicit call to move constrcutor;

    return 0;
}