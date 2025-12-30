#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int); // REVIEW Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y) //REVIEW ----> This is a parameterized constructor as it takes 2 parameters
{
    a = x;
    b = y;
}

int main()
{
    // Implicit call
    Complex a(4, 6); //REVIEW - 
    a.printNumber();

    // Explicit call
    Complex b = Complex(5, 7); //REVIEW - 
    b.printNumber();

    return 0;
}