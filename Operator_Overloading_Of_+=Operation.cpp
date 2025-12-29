#include <iostream>

using namespace std;

class Distance
{
private:
    int feet;
    int inches;

public:
    Distance(int feet = 0, int inches = 0)
    {
        this->feet = feet;
        this->inches = inches;
    }

    Distance operator+=( Distance const &other)
    {
        feet += other.feet;
        inches += other.inches;

        if (inches >= 12)
        {
            feet += inches / 12;
            inches %= 12;
        }
    
    }

    void display() const
    {
        cout << "Total Distance: " << feet << " feet, " << inches << " inches" << endl;
    }
};

int main()
{
    Distance distance1(5, 8);
    Distance distance2(3, 4);

    distance1 += distance2;

    distance1.display();

    return 0;
}