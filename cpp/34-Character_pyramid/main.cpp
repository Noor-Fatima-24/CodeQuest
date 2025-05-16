/*
34: 
✅ Character pyramid: 
                        A  
                       ABA  
                      ABCBA  
                     ABCDCBA

                        A  
                       AB A  
                      ABC BA  
                     ABCD CBA

 🎯Hint:

 1): Outer loop for rows
 2): First inner loop: print spaces.
 3): Second loop: increasing letters from A to mid.
 4): Third loop: decreasing letters back to A.

*/
#include<iostream>
using namespace std;

int main()
{
    for (char i = 'A'; i <= 'D'; i++)
    {
        for (char s = 'C'; s >= i; s--)
        {
           cout<<" ";
        }
        
        for (char j = 'A'; j <= i; j++)
        {
            cout<<j;
        }
        //second part
         for (char j = i-1; j >= 'A'; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    
    return 0;
}