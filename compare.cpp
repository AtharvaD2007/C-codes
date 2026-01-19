// WAP to compare two numbers and display whether they are equal, or which one is greater.
#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout<<"Enter 1st number :";
    cin>>a;
    cout<<"Enter 1st number :";
    cin>>b;
    if(a==b)
    cout<<"Both numbers are equal"<<endl;

    else if (a>b)
    cout<<"The number "<<a<<" is greater than "<<b<<endl;
    else
    cout<<"The number "<<a<<" is less than "<<b<<endl;
    return 0;
}
