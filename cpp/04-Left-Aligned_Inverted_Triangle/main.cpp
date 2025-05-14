/*

04:
✅ left-Aligned Triangle: 
                            ****
                            -***
                            --**
                            ---*

 💡 Hint: First print increasing spaces, then decreasing stars.

*/
#include<iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if ( j <= i )
            {
                cout<<" ";
            }
           else 
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}