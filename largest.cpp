#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cout<<"Enter the first number: ";
    cin>> a;
    cout<<"Enter the second number: ";
    cin>> b;
    cout<<"Enter the third number: ";
    cin>> c;
    if(a>b && a>c)
    cout<<"The greatest of the three is "<<a<<endl;
    else if (b>a && b>c)
    cout<<"The greatest of the three is "<<b<<endl;
    else
    cout<<"The greates of the three is "<<c<<endl;

    return 0;
}