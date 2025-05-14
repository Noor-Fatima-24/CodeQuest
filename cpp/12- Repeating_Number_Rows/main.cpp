/*

12:
    Repeating Number Rows: 
                            1 1 1 1
                            2 2 2 2
                            3 3 3 3
                            4 4 4 4

💡 Hint: Outer loop = row number; Inner loop = repeat i in each row.

*/
#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
           cout<<i<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}