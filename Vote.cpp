// WAP in C++ to check whether a person is eligible to vote or not. (A person is eligible to vote if his/her age is greater than or equal to 18 years).

#include <iostream>
using namespace std;
int main()
{
    int vote;
    string name;
    cout << "Enter your name: "<<endl;
    cin >> name;
    cout << "Hello "<< name <<", please enter your age: "<<endl;
    cin >> vote;
    if(vote>=18)
    {
        cout << "You are eligible to vote."<<endl;
    }
    else
    {
        cout << "You are not eligible to vote."<<endl;
    }
    return 0;
}
