// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed

// Nesting of member functions

#include <iostream>
#include <string>
using namespace std;

// REVIEW -  cpp doesnt support nesting of member function but for interview it means : function calling another member function !

class Calculator
{
public:
    void add(int a, int b)
    {
        printResult(a + b);
    }

private:
    void printResult(int result)
    {
        cout << "Result: " << result << endl;
    }
};
