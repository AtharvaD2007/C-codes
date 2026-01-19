// Wap to check if the given number is positive, negative or zero, if positive then check if it is even or odd.

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(num>0){
        if(num%2==0)
        cout<<"Positive even number"<<endl;
        else
        cout<<"Positive odd number"<<endl;
    }
    else if (num==0)
    cout << "Zero"<<endl;
    else
    cout << "Negative number"<<endl;
    return 0;
}
