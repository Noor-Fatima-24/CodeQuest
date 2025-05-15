/*
29: 
✅ Floyd’s Triangle: 
                     1  
                     2 3  
                     4 5 6  
                     7 8 9 10  

 🎯Hint:

 1): Use counter variable.
 2): Outer loop for rows 1 to n.
 3): Inner loop prints i numbers, incrementing the counter.

*/
#include<iostream>
using namespace std;

int main()
{
    int c=1;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
    
    return 0;
}