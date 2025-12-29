//  One class type to other class type : When we assign an object of a class into the object of another class then it is called as class to class conversion.
//   The class to class conversion can be performed either by defining casting operator function in source class or using the constructor in the destination class.

// Conversion using casting operator function
#include <iostream>
using namespace std;

class Rectangle
{
    int width, length, area;

public:
    Rectangle(int w, int l)
    {
        width = w;
        length = l;
        area = width * length;
    }
    void output()
    {
        cout << "Length : " << length << " width:" << width << "Area of Rectangle:" << area << "\n";
    }
};

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
        cout << "Base:" << base << "Height:" << height << "Area of Triangle:" << area;
    }
    operator Rectangle()
    {
        Rectangle temp(base, height);
        return temp;
    }
};

int main()
{
    Triangle t(10, 20);
    Rectangle r = t; // Triangle to Rectangle
    t.print();
    r.output();
    return 0;
}