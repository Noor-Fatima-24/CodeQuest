/*
20: 
✅ Hollow Pyramid: 
                   ---*---   
                   --*-*--  
                   -*---*- 
                   *******
 
 🎯Hint:

Outer loop:

 1):rows 1 to n.

Inner loop:

 2): Print spaces: n - i or start from n and end at i.
 3): Print stars and spaces: star at start and end of row, space between.

*/
#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int s = 3; s >= i; s--)
        {
            cout<<" ";
        }
        
         for (int j = 1; j <= (2 * i - 1); j++)
        {
            if (j == 1 || j == (2 * i - 1) || i == 4)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }
    
    return 0;
}