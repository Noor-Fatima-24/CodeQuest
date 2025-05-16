/*
33: 
✅ Inverted character triangle: 
                                  D C B A  
                                  C B A  
                                  B A  
                                  A

 🎯Hint:

 1): Outer loop from i = n to 1
 2): Inner loop from j = i - 1 down to 0, print char('A' + j)

*/
#include<iostream>
using namespace std;

int main()
{
    
    for ( char i='D'; i >= 'A'; i--)
    {
        for (char j = 'D'; j >= i; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}