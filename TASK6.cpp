#include<iostream>
using namespace std;

int primorial(int primeNumCount);

main()
{
    int primeNumCount;

    cout << "Enter Number: ";
    cin >> primeNumCount;

    cout << primorial(primeNumCount);
}
int primorial(int primeNumCount)
{
    int x=1;
    int multiplyPrime=1,primeNumber=2;
    while (x<=primeNumCount)
    {
        if(primeNumber==2)
        {
            multiplyPrime=multiplyPrime*primeNumber;
            primeNumber=primeNumber+1;
            x=x+1;
        }
        else if(primeNumber>=3)
        {
            int j=3;
            for(int i=j;i<=primeNumber;i=i+2)
            {
                if(primeNumber%i==0 && primeNumber!=i)
                {    
                    primeNumber=primeNumber+2;
                    break;
                }
                else if(primeNumber%i==0 && primeNumber==i)
                {
                    multiplyPrime=multiplyPrime*primeNumber;
                    x=x+1;
                    primeNumber=primeNumber+2;
                    break;
                }
            }
        }
    }
    return multiplyPrime;
}