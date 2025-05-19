/*
45: 
🎯 Mirrored Binary Triangle : 
                                 1  
                                0 1  
                               1 0 1  
                              0 1 0 1

 🎯Hint:

 1):   Same as binary triangle + leading spaces = n - i - 1.

*/
#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int s = 3; s >= i; s--)
        {
            cout<<" ";
        }
    for (int j = 1; j <= i; j++)
        {
            if ( ( i+j ) % 2 == 0 )
            {
                cout<<"1 ";
            }
            else
            {
                cout<<"0 ";
            }
           
        }
         cout<<endl;
    }
    
    return 0;
}