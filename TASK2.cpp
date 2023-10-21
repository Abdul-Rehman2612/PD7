#include<iostream>
using namespace std;

void shape(int rows);

main()
{
    int rows;

    cout << "Enter the desired number of rows: ";
    cin >> rows;

    shape(rows);
}
void shape(int rows)
{  
    int x=rows/2;
    int space=x,star=1;
    for (int count=1;count<=x;count++)
    {
        space--;
        for(int i=space;i>=1;i--)
        {
            cout << " " ;
        }
        star=x-space;
        for(int j=1;j<=star;j++)
        {
            cout << "*" ;
        }
        cout << endl ;
        if (count==x)
        {
            break;
        }
    }
        space=0,star=x;
        for (int count=x;count>=1;count--)
        {
            for (int i=1;i<=space;i++)
            {
                cout << " ";
            }
            star=x-space;
            for (int j=star; j>=1; j--)
            {
                cout << "*";
            }
            space++;
            cout << endl;
        }
}
