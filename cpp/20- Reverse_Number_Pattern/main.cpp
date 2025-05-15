/*
20: 
✅  Reverse Number Pattern: 
                            4 3 2 1  
                            3 2 1  
                            2 1  
                            1  

 🎯Hint:

 1):Outer loop from n to 1.
 2): Inner loop from i down to 1.

*/
#include<iostream>
using namespace std;

int main()
{
    for (int i = 4; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}