#include<iostream>
using namespace std;

bool primeNumber(int number);

main()
{
    int number;

    cout << "Enter Number: ";
    cin >> number;

    bool x = primeNumber(number);
    cout << x ;
}
bool primeNumber(int number)
{
    if((number<2 || number%2==0) && number!=2)
    {
        return false;
    }
    else if(number==2 || number==3)
    {
        return true;
    }
    else
    {
        for(int i=3;i<=number;i=i+2)
        {
            if(number%i==0 && number!=i)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    }
}