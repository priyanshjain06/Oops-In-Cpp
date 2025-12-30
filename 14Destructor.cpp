#include <iostream>
using namespace std;

class test
{
    static int count; // REVIEW if count is not static it will print 1 1 1 1 coz static deosnt belong to object but to class 

public:
    test()
    {
        count++;
        cout << "Objects alive: " << count << endl;
    }

    ~test()
    {
        count--;
        cout << "Objects alive: " << count << endl;
    }
};

int test::count = 0;

int main()
{
    test t1, t2, t3, t4;

    {
        test t5;
    } //REVIEW t5 destroyed HERE because destrcutor runs before the constructor  , if there is no destructor then it will not end 

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
