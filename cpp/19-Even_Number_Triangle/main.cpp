/*
19: 
✅ Even Number Triangle: 
                         2  
                         2 4  
                         2 4 6  
                         2 4 6 8  

 🎯Hint:

 1): Outer loop from 1 to n.
 2): Inner loop prints first i even numbers (2 × j).

*/
#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++)
    {
       for (int j = 1; j <= i; j++)
       {
        cout<< 2*j <<" ";
       }
       cout<<endl;
    }
    
    return 0;
}