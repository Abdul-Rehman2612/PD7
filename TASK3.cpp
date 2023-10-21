#include<iostream>
using namespace std;

void Amplify(int number);

main()
{
    int number;

    cout << "Enter the number to Amplify: ";
    cin >> number;

    Amplify(number);
}
void Amplify(int number)
{
    for(int x=1;x<=number;x++)
    {
        if(x%4==0 && x==number)
        {
            cout << x*10 ;
        }
        else if(x%4 == 0)
        {
            cout << x*10 << ", ";
            continue;
        }
        if(x!=number)
        {
            cout << x << ", ";
        }
        else
        {
            cout << x ;
        }
        
    }
}