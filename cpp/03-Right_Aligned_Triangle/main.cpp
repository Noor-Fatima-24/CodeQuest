/*

03:
✅ Right-Aligned Triangle: 
                            ---*
                            --**
                            -***
                            ****


💡 Hint: First print spaces (4 - row), then stars (row times).
*/
#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if ( j <= 4-i )
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