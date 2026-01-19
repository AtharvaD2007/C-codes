// WAP TO CHECKWHETHER THE PERSON IS A CHILD , GROWING AGE OR 
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age <13)
    cout<<"You are a child"<<endl;
    else if (age>=13 && age<18)
    cout << "You are growing age"<<endl;
    else
    cout << "You are adult."<<endl;
    return 0;
}

