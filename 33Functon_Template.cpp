#include <iostream>
using namespace std;

template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    float a;
    a = funcAverage(5, 2);
    // a = funcAverage<int,int>(5, 2);

    printf("The average of these numbers is %f", a);

    float x = 10.5;
    float y = 7.78;
    swapp(x, y);
    // swapp(4,7);

    cout << "\n"
         << x << "\n"
         << y;
    return 0;
}
