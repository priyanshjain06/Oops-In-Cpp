#include <iostream>
#include <cstdlib> // Include for malloc
using namespace std;

// Overloading new operator
void *operator new(size_t size)
{
    cout << "Customize new operator called. Allocating \n"
         << size << " bytes." << endl;

    void *p = malloc(size);
    return p;
}

// Overloading delete operator
void operator delete(void *p)
{
    cout << "Customized delete operator called." << endl;
    free(p);
}

int main()
{
    double *p = new double();
    delete p;
    cout <<p;
    return 0;
}
