/*
18: 
✅ Odd Number Triangle: 
                        1  
                        1 3  
                        1 3 5  
                        1 3 5 7  

 🎯Hint:

 1): Outer loop for rows.
 2): Inner loop runs i times; print 2 * j - 1.

*/
#include<iostream>
using namespace std;

int main()
{
    
    
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        { 
          cout<< 2 * j - 1<<" ";           
        }
       cout<<endl;
    }
    
    return 0;
}