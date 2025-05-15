/*
28: 
✅ Mirror Right Triangle: 
                              *
                             **
                            ***
                           ****

 🎯Hint:

 1): Print spaces: n - i or reverse the space loop.
 2): Then stars: i.

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
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}