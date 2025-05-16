/*
37: 
✅ Diamond with characters: 
                              A  
                             ABA  
                            ABCBA  
                           ABCDCBA  
                            ABCBA  
                             ABA  
                              A


 🎯Hchar:

 1): Prchar top half using logic from Character Pyramid.
 2): Then prchar bottom half in reverse.
 3): Use two loops: one for upper and one for lower half.

*/
#include<iostream>
using namespace std;

int main()
{
    //upper
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
        for (char j = i-1; j >= 'A'; j--)
        {
            cout<<j;
        }
        
        cout<<endl;
    }
    //lower
    for (char i = 'C'; i >= 'A'; i--)
    {
        for (char s = 'C'; s >= i; s--)
        {
            cout<<" ";
        }
        for (char j = 'A'; j <= i; j++)
        {
            cout<<j;
        }
        for (char j = i-1; j >= 'A'; j--)
        {
            cout<<j;
        }
        
        cout<<endl;
    }
    
    return 0;
}