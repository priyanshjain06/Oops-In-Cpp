#include <iostream>
using namespace std;

int count = 0;

class test
{
public:
    test()
    {
        count++;
        cout << "No of objects created are: " << count << endl;
    }

    ~test()
    {
        cout << "No of objects destroyed are: " << count << endl;
        count--;
    }
};

int main()
{
    test t1, t2, t3, t4;

    {
        test t5;
    }
    
    {
        test t6;
    }

    return 0;
}





// #include <iostream>
// using namespace std;

// // Destructor never takes an argument nor does it return any value
// int count = 0;

// class num
// {
// public:
//     num()
//     {
//         count++;
//         cout << "This is the time when constructor is called for object number" << count << endl;
//     }

//     ~num()
//     {
//         cout << "This is the time when my destructor is called for object number" << count << endl;
//         count--;
//     }
// };
// int main()
// {
//     cout << "We are inside our main function" << endl;
//     cout << "Creating first object n1" << endl;
//     num n1;
//     {
//         cout << "Entering this block" << endl;
//         cout << "Creating two more objects" << endl;
//         num n2, n3;
//         cout << "Exiting this block" << endl;
//     }
//     cout << "Back to main" << endl;
//     return 0;
// }
