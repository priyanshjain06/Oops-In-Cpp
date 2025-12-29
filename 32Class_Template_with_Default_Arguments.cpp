#include <iostream>
using namespace std;

template <class T1=int, class T2=int>
class myClass
{
public:  // ||||||||||||||||||||||||||||||||||||||||||||||||||||||

    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << data1 <<endl<<data2<<endl;
    }
};

// template <class T1=int, class T2=int>
// void  myClass<T1,T2>::display()
// {}

int main()
{
    myClass<int, char>   obj1(1, 'c');
    obj1.display();

    cout<<endl;

    myClass<>    obj2(1,2);
    obj2.display();

    //myClass<int, float>  obj(1, 1.8);
    //obj.display();
}
