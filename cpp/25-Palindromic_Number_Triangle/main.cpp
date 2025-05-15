/*
25: 
✅ Palindromic Number Triangle: 
                                 1  
                                 121  
                                 12321  
                                 1234321  

 🎯Hint:

 1): Print increasing numbers 1 to i.
 2): Then print decreasing numbers i-1 to 1.

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