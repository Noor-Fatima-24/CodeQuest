/*
23: 
✅ Half-Diamond Pattern: 
                        *
                        **
                        ***
                        ****
                        ***
                        **
                        *

 🎯Hint:

 1): First loop: 1 to n.
 2): Second loop: n-1 to 1.

 */
#include<iostream>
using namespace std;

int main()
{
    //upper
    for (int i = 1; i <= 4; i++)
    {
        // for (int s = 4; s >= i; s--)
        // {
        //     cout<<" ";
        // }
         for (int j = 1; j <= i ; j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
    //lower
    for (int i = 4; i >= 1; i--)
    {
        // for (int s = 4; s >= i; s--)
        // {
        //     cout<<" ";
        // }
        for (int j = 1; j <= i ; j++)
        {
           cout<<"*";
        }

        cout<<endl;
    }
    
    return 0;
}