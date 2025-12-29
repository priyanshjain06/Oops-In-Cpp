// C++ program to demonstrate function overriding

#include <iostream>
using namespace std;

class Parent
{
public:
    void GeeksforGeeks_Print()
    {
        cout << "Base Function" << endl;
    }
};

class Child : public Parent
{
public:
    void GeeksforGeeks_Print()
    {
        cout << "Derived Function" << endl;
    }
};

int main()
{
    Child Child_Derived;
    Child_Derived.GeeksforGeeks_Print();
    return 0;
}

// Parent::GeeksforGeeks_Print(); 

// Child Child_Derived;
// Parent* ptr = &Child_Derived;
// ptr->GeeksforGeeks();

// Child_Derived.Parent::GeeksforGeeks();


