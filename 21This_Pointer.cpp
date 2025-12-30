//  1) When local variable’s name is same as member’s name

// #include <iostream>
// using namespace std;
// class A
// {
//     int a;

// public:
//     void setData(int a)
//     {
//         this->a = a;
//     }

//     void getData()
//     {
//         cout << "The value of a is " << a << endl;
//     }
// };
// int main()
// {
//     A a;
//     a.setData(4);
//     a.getData();
//     return 0;
// }

// REVIEW 2) To return reference to the calling object

class A
{
    int a;

public:
    A& setData(int a) // REVIEW -
    {
        this->a = a;
        return *this;
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    A a;

    a.setData(4).getData();
    return 0;
}
