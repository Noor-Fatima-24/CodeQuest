/*
38: 
✅ Alternating character triangle: 
                                   A  
                                   B C  
                                   D E F  
                                   G H I J

 🎯Hint:

 1): Use a variable like ch = 'A'.
 2): Outer loop: rows.
 3): Inner loop: print ch++.

*/
#include<iostream>
using namespace std;

int main()
{
    char ch='A';
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<ch++<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}