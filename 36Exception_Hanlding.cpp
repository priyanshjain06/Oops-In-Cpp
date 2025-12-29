// Synatx:
// try
// {
//     throw (you can use a number or a variable here)
// }
// catch(int arg1) {}   ------> U can use multiple  catch here but only one will be executed
// catch(int arg2){}
// and so on ..... 


// Note: Whatever which is written after throw will not execute if the throw conditions meets 
// When the condition of throw is meet the control will go to catch function 
// You can also use a function which can be used to throw error , call that function in the body of "if" ,in this code
// you can also pass class objects as arguments in catch.







// you cannot declare variable in try function because it will give error 








#include <iostream>
using namespace std;

int main()
{
    int numerator, denominator,result;

    cout<<"Enter Numerator and Denominator:"<<endl;
    cin>>numerator>>denominator;

    try
    {
        if(denominator==0)
        {
            throw denominator;
        }
        result=numerator/denominator;
        cout<<"\nResult is:"<<result<<endl;
    }

    catch(int) // catch(int e)
    {
        cout<<" 0 is not allowed as denominator"<<endl;
    }
    //You can write multiple catch blocks here but only one will be executed  which meets the user(input) conditon
}