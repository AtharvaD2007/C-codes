#include<iostream>
using namespace std;
int main()
{
    int n=1;

start:
    cout<<n<<" ";
    n++;
    if(n<=10)
    goto start;
    return 0;
}