#include<iostream>
using namespace std;

void diamond(int rows);

main()
{
    int rows;

    cout << "Enter the desired number of rows: ";
    cin >> rows;

    diamond(rows);
}
void diamond(int rows)
{
    for(int i=rows;i>=1;i--)
    {
        for(int col=1;col<=i;col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}