#include<iostream>
using namespace std;

void triangle(int rows);

main()
{
    int rows;

    cout << "Enter the desired number of rows: ";
    cin>>rows;

    triangle(rows);
}
void triangle(int rows)
{
    for(int i=1;i<=rows;i++)
    {
        for(int col=1;col<=i;col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}