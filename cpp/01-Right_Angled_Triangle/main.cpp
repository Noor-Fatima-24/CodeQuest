/*

01:
✅ Right-Angled Triangle: 
                            *
                            **
                            ***
                            ****

💡 Hint: Outer loop = rows, Inner loop = number of stars (*) in each row.

*/


#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++) // Outer loop controls the number of rows (from 1 to 4)
    {
        for (int j = 1; j <= i; j++)//Inner loop prints '*' equal to the current row number( i )
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}