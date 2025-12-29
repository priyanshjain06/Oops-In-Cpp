// #include <iostream>
// using namespace std;

// class Y;

// class X
// {
//     int data;

// public:
//     void setValue(int value)
//     {
//         data = value;
//     }
//     friend void add(X, Y);
// };

// class Y
// {
//     int num;

// public:
//     void setValue(int value)
//     {
//         num = value;
//     }
//     friend void add(X, Y);
// };

// void add(X o1, Y o2)
// {
//     cout << "Summing data of X and Y objects gives me " << o1.data + o2.num;
// }
// int main()
// {
//     X a1;
//     a1.setValue(3);

//     Y b1;
//     b1.setValue(15);

//     add(a1, b1);
//     return 0;
// }

#include <iostream>
using namespace std;

// Forward declaration
class Complex;

class Calculator
{
public:
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // Individually declaring functions as friends
    // friend int Calculator ::sumRealComplex(Complex, Complex);
    // friend int Calculator ::sumCompComplex(Complex, Complex);

    // Aliter: Declaring the entire calculator class as friend
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;

    o1.setNumber(1, 4);
    o1.printNumber();

    o2.setNumber(5, 7);
    o2.printNumber();

    Calculator calc;

    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resc << " i" << endl;

    return 0;
}
