/*
31: 
✅ Alphabet triangle: 
                       A  
                       A B  
                       A B C  
                       A B C D

 🎯Hint:

 1): Use outer loop for rows (i = 1 to n)
 2): Inner loop: print characters starting from 'A' to 'A' + i - 1
 3): Use: (char)('A' + j) inside the inner loop

*/
#include<iostream>
using namespace std;

int main()
{
    for (char i = 'A'; i <= 'D'; i++)
    {
        for (char j = 'A'; j <= i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}