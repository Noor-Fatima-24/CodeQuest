/*

40: 
✅  ASCII(intacter pattern: 
                             65  
                             65 66  
                             65 66 67  
                             65 66 67 68

 🎯Hint:

 1): Outer loop for rows.
 2): Inner loop: print numbers from 65 to 65 + i - 1.
 3): Just print numbers, not characters (optional to convert).

*/
#include<iostream>
using namespace std;

int main()
{
    for (int i = 'A'; i <= 'D'; i++)
    {
        for (int j = 'A'; j <= i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}