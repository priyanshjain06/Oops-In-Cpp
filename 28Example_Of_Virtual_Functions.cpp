// C++ program to illustrate
// concept of Virtual Functions

#include <iostream>
using namespace std;

class base
{
public:
    virtual void print() { cout << "print base class\n"; }

    void show() { cout << "show base class\n"; }
};

class derived : public base
{
    void print() { cout << "print derived class\n"; }

    void show() { cout << "show derived class\n"; }
};

int main()
{
    base *bptr;
    derived d;
    bptr = &d;

    // Virtual function, binded at runtime
    bptr->print();

    // Non-virtual function, binded at compile time
    bptr->show();

    return 0;
}


// Rules for Virtual Functions:-
// Virtual functions cannot be static.
// A virtual function can be a friend function of another class.
// Virtual functions should be accessed using a pointer or reference of base class type to achieve runtime polymorphism.
// A class may have a virtual destructor but it cannot have a virtual constructor.



// Limitations of Virtual Functions:-
// Slower: The function call takes slightly longer due to the virtual mechanism and makes it more difficult for the compiler to optimize because it does not know exactly which function is going to be called at compile time.
// Difficult to Debug: In a complex system, virtual functions can make it a little more difficult to figure out where a function is being called from.