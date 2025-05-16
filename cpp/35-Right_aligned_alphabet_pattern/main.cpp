/*
35: 
✅ Right-aligned alphabet pattern: 
                                     A  
                                    AB  
                                   ABC  
                                  ABCD

 🎯Hint:

 1): Outer loop for rows
 2): First inner loop: spaces.
 3): Second inner loop: characters from A to A + i.

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
        cout<<endl;
    }
    
    return 0;
}