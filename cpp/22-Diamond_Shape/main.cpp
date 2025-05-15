/*
22: 
✅ Diamond Shape: 
                      *   
                     ***  
                    ***** 
                   ******* 
                    ***** 
                     ***  
                      *   

 🎯Hint:

 1):Combine upper and lower pyramid.
 2): First half: increasing stars.
 3): Second half: decreasing stars.

*/
#include<iostream>
using namespace std;

int main() 
{
    //top
    for (int i = 1; i <= 4; i++)
    {
        for (int s = 4; s >= i; s--)
        {
            cout<<" ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //bottom
    for (int i = 3; i >= 1; i--)
    {
        for (int s = 4; s >= i; s--)
        {
            cout<<" ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}