// C++ Program to Demonstrate
// Operator Overloading using + operator



// #include <iostream>
// using namespace std;

// class Complex
// {
// private:
//     int real, imag;

// public:
//     Complex(int r = 0, int i = 0)
//     {
//         real = r;
//         imag = i;
//     }

//     // Overloading the + operator
//     Complex &operator+(Complex const &obj)
//     {
//         real += obj.real;
//         imag += obj.imag;
//         return *this;
//     }

//     void print()
//     {
//         cout << real << " + " << imag << "i" << '\n';
//     }
// };

// int main()
// {
//     Complex c1(10, 5);
//     Complex c2(2, 4);

//     // Using the + operator
//     c1 + c2;

//     c1.print();
//     return 0;
// }






#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // this is not a constructor
    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }

    void print()
    {
        cout << real << " + " << imag << "i" << '\n';
    }
};

int main()
{
    Complex c1(10, 5);
    Complex c2(2, 4);
    Complex c3 = c1 + c2; // c1+c2;
    c3.print();           // c1.print
    return 0;
}

// #include <iostream>
// using namespace std;
// class Complex
// {
// private:
//     int real, imag;

// public:
//     Complex(int r = 0, int i = 0)
//     {
//         real = r;
//         imag = i;
//     }
//     void print() { cout << real << " + i" << imag << endl; }
//     // The global operator function is made friend of this
//     // class so that it can access private members
//     friend Complex operator+(Complex const &c1,
//                              Complex const &c2);
// };
//
// Complex operator+(Complex const &c1, Complex const &c2)
// {
//     return Complex(c1.real + c2.real, c1.imag + c2.imag);
// }
// 
// int main()
// {
//     Complex c1(10, 5), c2(2, 4);
//     Complex c3 = c1 + c2; // An example call to "operator+"
//     c3.print();
//     return 0;
// }
