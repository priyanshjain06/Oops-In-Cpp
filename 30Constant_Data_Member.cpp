// When a function is declared as const, it can be called on any type of object. Non-const functions can only be called by non-const objects.

// Constant Functions can also access the private members just like normal functions.

// Syntax to define Constant variables:-
// Const classname objectname;
 

// C++ program to demonstrate that data cannot be updated
// in a Constant member function

#include <iostream>
using namespace std;

class Demo
{
    int x;

public:
    void set_data(int a) { x = a; }

    // constant member function
    int get_data() const;
};

int Demo::get_data() const
{
    // Error while attempting to modify the data
    // member
   // ++x;
    return x;
};

int main()
{
    //Const Demo d;

    Demo d;
    d.set_data(10);
    cout << endl
         << d.get_data();

    return 0;
}