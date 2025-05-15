/*
27: 
✅ Hollow Right Triangle : 
                           *
                           * *
                           *   *
                           *****
                             

 🎯Hint:

 1): Outer loop:
                rows 1 to n.
 2): Inner loop:
           Print star at start, end, or last row; otherwise print space.

*/
#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++)
    { 
        for (int j = 1; j <= i; j++)
        {
            if ( j==1 || j==i ||  i == 4 )
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}