/*

   02:
✅  Inverted Right-Angled Triangle: 
                                      ****
                                      ***
                                      **
                                      *


💡 Hint:  Outer loop = rows, Inner loop = starts from max stars and decreases.

*/

#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}