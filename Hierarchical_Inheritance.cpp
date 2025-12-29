#include <iostream>
using namespace std;

class number
{
protected:
    float num;

public:
    void getdata()
    {
        cout << "Enter the number to get its area or  volume:" << endl;
        cin >> num;
    }
};

class square_area : public number
{
public:
    float area;

    void calculateArea()
    {
        area = num * num;
        cout << "Area of a square is: " << area << " units" << endl;
    }
};

class cube_volume : public number
{
public:
    float cube;

    void calculateVolume()
    {
        cube = num * num * num;
        cout << "Volume of cube is: " << cube << " units" << endl;
    }
};

int main()
{
    square_area obj1;
    obj1.getdata();
    obj1.calculateArea();

    cube_volume obj2;
    obj2.getdata();
    obj2.calculateVolume();

    return 0;
}
