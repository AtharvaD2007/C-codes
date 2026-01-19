// WAP in C++ to check whether a number is greater than, less than or equal to 10.
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a numbar :";
    cin>>a;
    if(a>10)
    cout<<"The number is greater than 10";
    else if (a<10)
    cout<<"the number is less than 10";
    else
    cout<<"the number is equal to 10";
    
    return 0;
}