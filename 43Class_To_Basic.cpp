// Class type to basic type: When we assign an object to a primitive data type’s variable, then it is called as class type to basic conversion.

//  To perform class type to basic type conversion we have to define the casting operator function. The casting operator function must be a member of the class. The casting operator function cannot have any return datatype and it does not take any parameter.

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

    operator int()
    {
        return n;
    }
};

int main()
{
    Number obj = 100;
    obj.printDetails();
    int y = obj; // obj.operator int()

                             cout << "\nThe value is " << y << endl;

    return 0;
}