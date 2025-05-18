/*

41: 
✅ Snake Pattern : 
                    1  2  3  4  
                    8  7  6  5  
                    9 10 11 12  
                    16 15 14 13  


 🎯Hint:

 1): Alternate direction for each row (use modulo % 2).
 2): Loop: Outer for rows, inner for columns.
 3): Counter: Use a single variable to increment.

*/
#include<iostream>
using namespace std;

int main()
{
   int c=1;
        for (int i = 1; i <= 4; i++)
        {
             if ( i % 2 == 1 )
             {
                for (int j = 1; j <= 4; j++)
                {
                   cout<<c<<" ";
                  c++;
                }
             }
             else
             {
                  // since we’re going to print 4 numbers
            for (int j = 4; j >= 1; j--)
            {
                cout << c << " ";
                c++;
            }
                 
             }
             
        cout<<endl;
        
        }
    return 0;
}

/*

Objective of the Code:
The code prints a 4×4 matrix with numbers from 1 to 16 in a zigzag row-wise fashion:

Even-indexed rows (i % 2 == 0) are printed left to right
Odd-indexed rows (i % 2 == 1) are printed right to left

*/