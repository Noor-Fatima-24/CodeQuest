/*
16: 
✅ 5. Number Increasing per Row:
                                 1  
                                 2 3  
                                 4 5 6  
                                 7 8 9 10  


 🎯Hint:

 1): Use a variable (like num = 1) and keep incrementing it.
 2): Outer loop for rows 1 to n, inner loop prints i numbers in each row.

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