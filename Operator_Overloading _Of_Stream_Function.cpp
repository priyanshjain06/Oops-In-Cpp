#include <iostream>
#include <fstream>
using namespace std;

class Distance
{
private:
    int feet;   // 0 to infinite
    int inches; // 0 to 12

public:

    Distance(int f=0, int i=0)
    {
        feet = f;
        inches = i;
    }

    friend ostream operator <<(ostream &output, const Distance &D);
};

ostream operator <<(ostream &output, const Distance &D)
{
    output << "F : " << D.feet << " I : " << D.inches;
    return output;
}

int main()
{
    Distance D1(11, 10);

    cout << "First Distance : " << D1 << endl;

    return 0;
}