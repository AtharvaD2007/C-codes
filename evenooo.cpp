#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number :";
    cin >> n;
    int i=0;

    if(n%2==0){
        i=1;
    }
    else{
        i=0;
    }
    switch(i){
        case 1:
            cout << n << " is even number"<< endl;
            break;
        case 0:
            cout << n << " is odd number"<< endl;
            break;
        default:
            cout << "Invalid input"<< endl;
    }
}