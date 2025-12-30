#include <iostream>
using namespace std;

class Base
{
    int data1; //REVIEW  private by default and is not inheritable

public:
    int data2;
    void setData();
    int getData1();
};

void Base::setData(void)
{
    data1 = 10;
    data2 = 20;
}

int Base::getData1()
{
    return data1;
}

class Derived : public Base
{
    int data3;

public:
    void product();
    void display();
};

void Derived::product()
{
    // If inheritance is private, you cannot access data1 directly in Derived.
    // Use the getter function from the Base class.
    data3 = data2 * getData1();
}

void Derived::display()
{
    cout << "Value of data 1 is " << getData1() << endl;
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
}

int main()
{
    Derived der;
    der.setData();
    der.product();
    der.display();

    return 0;
}
