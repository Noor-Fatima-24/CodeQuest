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
 4): use a "temp" variable for storing the reverse order of "c".

*/
#include<iostream>
using namespace std;

int main()
{
   int c = 1;   // c is the number counter, starts from 1

   for (int i = 1; i <= 4; i++) // Outer loop for rows (1 to 4)
   {
       if (i % 2 == 1) // If row number is odd (1st, 3rd)
       {
           for (int j = 1; j <= 4; j++) // Print left to right
           {
               cout << c << " ";
               c++; // Move to next number
           }
       }
       else // If row number is even (2nd, 4th)
       {
           // We want to print 4 numbers in reverse
           int temp = c + 3;  // Because we are about to print 4 numbers in reverse
           for (int j = 1; j <= 4; j++)
           {
               cout << temp-- << " "; // Print and decrease
               c++; // Still increase counter, because we used the value
           }
       }
       cout << endl; // Move to next line after each row
   }

   return 0;
}


