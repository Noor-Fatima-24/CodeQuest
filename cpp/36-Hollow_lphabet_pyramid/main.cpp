/*
36: 
✅ Hollow alphabet pyramid: 
                               A  
                              A B  
                             A   C  
                            A B C D


 🎯Hint:

 1): Outer loop for rows

Print space before pattern (n - i spaces)

 2):Inner loop for letters:

If first or last column or last row, print letter
Else, print space

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
            if ( j == 'A' || j == i || i == 'D')
            {
                cout<<j<<" ";
            }
            else{
                cout<<" ";
         
         cout<<" ";   }
        }
        cout<<endl;
    }
    
    return 0;
}