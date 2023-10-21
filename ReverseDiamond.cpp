#include <iostream>
using namespace std;

void reverseDiamond(int rows);

main()
{
    int rows;

    cout << "Enter the number of desired rows: ";
    cin >> rows;

    reverseDiamond(rows);
}
void reverseDiamond(int rows)
{
    int space=0,star=rows;
    for (int count=rows;count>=1;count--)
    {
        for (int i=1;i<=space;i++)
        {
            cout << " ";
        }
        star=rows-space;
        for (int j=star; j>=1; j--)
        {
            cout << "*";
        }
        space++;
        cout << endl;
    }
}