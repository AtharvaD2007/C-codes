#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n";
    cout << "Enter your choice (1-4): ";
    cin>>n;
    int a, b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<< "Enter the second number: ";
    cin>>b;
    switch(n) {
        case 1:
            cout<<"Result: "<< a + b << endl;
            break;
        case 2:
            cout<<"Result: "<< a - b << endl;
            break;
        case 3:
            cout<<"Result: "<< a * b << endl;
            break;
        case 4:
            if(b != 0) {
                cout<<"Result: "<< a / b << endl;
            } else {
                cout<<"Error: Division by zero!"<< endl;
            }
            break;
        default:
            cout<<" Invalid choice!"<< endl;
    }
    return 0;




}
