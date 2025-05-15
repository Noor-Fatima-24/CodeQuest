/*
26: 
✅ Number Diamond : 
                    1  
                    121  
                    12321  
                    1234321  
                    12321  
                    121  
                    1  

 🎯Hint:

 Combine two palindromic triangles:

 1): First part: rows 1 to n.
 2): Second part: rows n-1 to 1.

*/
#include<iostream>
using namespace std;

int main()
{
    //upper
    for (int i = 1; i <= 4; i++)
    {
       for (int j = 1; j <= i; j++)
       {
        cout<<j;
       }
       for (int j = i-1; j >= 1; j--)
       {
        cout<<j;
       }
       cout<<endl;
    }
    //lower
    for (int i = 3; i >= 1; i--)
    {
       for (int j = 1; j <= i; j++)
       {
        cout<<j;
       }
       for (int j = i-1; j >= 1; j--)
       {
        cout<<j;
       }
       cout<<endl;
    }
    
    return 0;
}