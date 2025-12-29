// 1. A class is abstract if it has at least one pure virtual function.
// 2. We can have pointers and references of abstract class type.
// 3. An abstract class can have constructors.
// 4. An abstract class in C++ can also be defined using struct keyword.
// 5. If we do not override the pure virtual function in the derived class, then the derived class also becomes an abstract class.


#include <iostream>
using namespace std;

class Base
{
public:
    virtual void fun() = 0;
};

class Derived : public Base
{
public:
    void fun()
    {
        cout << "fun() called";
    }
};

int main(void)
{
    Derived d;
    d.fun();
    return 0;
}
