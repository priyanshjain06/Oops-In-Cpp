#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string st2;

    // Opening files using constructor and reading it
    ifstream in("1_Sample.txt"); // Read operation

    // in >> st2;
    //  use to get data only till space

    getline(in, st2); // use to get complete line
    cout << st2;

    return 0;
}