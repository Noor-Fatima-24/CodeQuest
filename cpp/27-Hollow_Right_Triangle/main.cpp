/*
27: 
✅ Hollow Right Triangle : 
                           *
                           * *
                           *   *
                           *****
                             

 🎯Hint:

 1): Outer loop:
                rows 1 to n.
 2): Inner loop:
           Print star at start, end, or last row; otherwise print space.

*/
#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++)
    { 
        for (int j = 1; j <= i; j++)
        {
            if ( j==1 || j==i ||  i == 4 )
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}
/*

#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++) // Outer loop for rows
    {
        for (int j = 1; j <= 5; j++) // Fixed number of columns (5)
        {
            // Row 1: print '*' only at column 3 (center)
            if (i == 1 && j == 3)
                cout << "*";

            // Row 2: print '*' at columns 2 and 4
            else if (i == 2 && (j == 2 || j == 4))
                cout << "*";

            // Row 3: print '*' at columns 1 and 5
            else if (i == 3 && (j == 1 || j == 5))
                cout << "*";

            // Row 4: print '*' on all columns
            else if (i == 4)
                cout << "*";

            // Otherwise print space
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}


*/