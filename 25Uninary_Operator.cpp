#include <iostream>
using namespace std;

class Weight
{
private:
    int kg;

public:
    Weight()
    {
        kg = 0;
    }

    // Weight operator++(Weight const &obj)
    // {
    //     Weight result;
    //     result.kg = ++kg; + obj.kg;
    //     return result;
    // }

    void operator()
    {
        kg = 0;
    }

    void operator++()
    {
        ++kg;
    }

    void operator++(int)
    {
        kg++;
    }

    void operator -- ()
    {
        --kg;
    }

    void operator--(int)
    {
        kg--;
    }

    void print()
    {
        cout << "The weight is:\n"
             << kg << endl;
    }
};

int main()
{
    Weight obj;
    obj.print();

    ++obj;
    obj.print();

    obj++;
    obj.print();

    --obj;
    obj.print();

    obj--;
    obj.print();

    // Weight obj1, obj2;
    // obj2 = ++obj1;
    // obj1.print();
    // obj2.print();

    return 0;
}
