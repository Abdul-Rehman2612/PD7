#include <iostream>
using namespace std;

void reverseTriangle(int rows);

main()
{
    int rows;

    cout << "Enter the number of desired rows: ";
    cin >> rows;

    reverseTriangle(rows);
}
void reverseTriangle(int rows)
{
    int space=rows,star=1;
    for (int count=1;count<=rows;count++)
    {
        space--;
        for(int i=space;i>=1;i--)
        {
            cout << " " ;
        }
        star=rows-space;
        for(int j=1;j<=star;j++)
        {
            cout << "*" ;
        }
        cout << endl ;
    }
}