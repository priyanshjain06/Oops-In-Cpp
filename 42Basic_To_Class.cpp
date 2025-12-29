//  Basic to class type : When we create objects using the variables of primary data types then it is called as basic to class type conversion.
//  Generally we use single argument constructor to perform type conversion from basic type to class type.

#include <iostream>
using namespace std;

class Number
{
    int n;

public:
    Number(int n)
    {
        this->n = n;
    }

    void printDetails()
    {
        cout << n;
    }
};

int main()
{
    Number obj = 100; // Number x(100);
    obj.printDetails();
    return 0;
}