/*

42: 
✅ Zigzag Number Pattern: 
                             1  
                            2 3  
                           4   5  
                          6     7
  clearly look at the spaces:  
                          ---1  
                          --2-3  
                          -4---5  
                          6-----7

 🎯logic:

 1):  Print leading spaces: as they are decreasing from 3 to 1.
 2): Outer loop: Rows.
 3): Inner loop: Print spaces + number.
     3A): Print first number.
            (only for i > 1)
     3B): Inner spaces (gaps between numbers)(1,3,5)(2*i-3).
     3C): Second/next number .  

*/
#include<iostream>
using namespace std;

int main()
{
    int c = 1;

    for (int i = 1; i <= 4; i++)
    {
        // Print leading spaces
        for (int s = 1; s <= 4 - i; s++)
        {
            cout << " ";
        }

        // Print the first number
        cout << c++;

        // Print inner spaces and second number (only for rows > 1)
        if (i > 1)
        {
            for (int n = 1; n <= 2 * i - 3; n++)
            {
                cout << " ";
            }

            // Print second number
            cout << c++;
        }

        cout << endl;
    }

    return 0;
}
