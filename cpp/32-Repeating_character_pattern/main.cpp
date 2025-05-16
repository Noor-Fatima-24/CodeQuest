/*
32: 
✅ hRepeating character pattern: 
                                  A A A A  
                                  B B B B  
                                  C C C C  
                                  D D D D

 🎯Hint:

 1): Outer loop for rows (i = 0 to n - 1)
 2): Inner loop: print same character n times
 3): Character = 'A' + i

*/
#include<iostream>
using namespace std;

int main()
{
    for (char i = 'A';i <= 'D'; i++)
    {
        for (char j = 'A'; j <= 'D'; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}