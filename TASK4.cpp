#include<iostream>
using namespace std;

int triangularNumber(int number);

main()
{
    int number;

    cout << "Enter number of Triangle: ";
    cin >> number;

    int sum = triangularNumber(number);
    cout << "Dots in the Triangle: " << sum;
}
int triangularNumber(int number)
{   int sum=0;
    for(int x=1;x<=number;x++)
    {   
        sum=sum+x;
    }
    return sum;
}