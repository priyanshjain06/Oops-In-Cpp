// Conversion using constructor
#include <iostream>
using namespace std;

class Triangle
{
    int base, height;
    float area;

public:
    Triangle(int b, int h)
    {
        base = b;
        height = h;
        area = 0.5 * base * height;
    }

    void print()
    {
        cout << "Base:" << base << " Height:" << height << " Area of Triangle:" << area << "\n";
    }

    int getBase()
    {
        return base;
    }

    int getHeight()
    {
        return height;
    }
};

class Rectangle
{
    int width, length, area;

public:
    void output()
    {
        cout << "Length: " << length << " Width: " << width << " Area of Rectangle: " << area;
    }

    Rectangle(Triangle t)
    {
        width = t.getBase();
        length = t.getHeight();
        area = width * length;
    }
};

int main()
{
    Triangle t(10, 20);
    Rectangle r(t); // Pass the Triangle object as a parameter to the Rectangle constructor
    t.print();
    r.output();
    return 0;
}
