/*
17:
✅  Same Number Triangle Per Row: 
                                  1  
                                  2 2  
                                  3 3 3  
                                  4 4 4 4  

 🎯Hint:

 1): Outer loop from 1 to n.
 2): Inner loop prints the same number i times.

*/
#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}