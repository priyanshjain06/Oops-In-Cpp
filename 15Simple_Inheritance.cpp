// Derived Class syntax
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
// {
//     class members/methods/etc...
// }


#include <iostream>
using namespace std;

class Parent
{
public:
    int id_p;
};

class Child : public Parent
{
public:
    int id_c;
};

int main()
{
    Child obj1;

    obj1.id_c = 7;
    obj1.id_p = 91;
    cout << "Child id is: " << obj1.id_c << '\n';
    cout << "Parent id is: " << obj1.id_p << '\n';

    return 0;
}

// #include <iostream>
// using namespace std;

// // Base Class
// class Employee
// {
// public:
//     int id;
//     float salary;
//     Employee(int inpId)
//     {
//         id = inpId;
//         salary = 34.0;
//     }
//     Employee() {}
// };

// // Creating a Programmer class derived from Employee Base class
// class Programmer : public Employee
// {
// public:
//     int languageCode;
//     Programmer(int inpId)
//     {
//         id = inpId;
//         languageCode = 9;
//     }
//     void getData()
//     {
//         cout << id << endl;
//     }
// };


// int main()
// {
//     Employee harry(1), rohan(2);
//     cout << harry.salary << endl;
//     cout << rohan.salary << endl;

//     Programmer skillF(10);
//     cout << skillF.languageCode << endl;
//     cout << skillF.id << endl;
//     skillF.getData();
//     return 0;
// }
