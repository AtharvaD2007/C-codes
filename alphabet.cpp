#include <iostream>
using namespace std;
int main()
{
    char l;
    cout<<"Enter an alphabet: ";
    cin>>l;
    switch (l)
    {
        case 'A': case 'E': case 'I': case 'O': case 'U': case 'a': case 'e': case 'i': case 'o': case 'u':
        cout<<l<<" is a vowel"<<endl;
        break;

        default:
        cout<<l<<" is a consonant"<<endl;
        break;
    }
}