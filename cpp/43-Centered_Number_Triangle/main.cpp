/*

43: 
✅ Centered Number Triangle: 
                                 1  
                                2 3  
                               4 5 6  
                              7 8 9 10


 🎯Hint:

 1): Left spaces = n - i - 1.
 2): Use counter to track current number.

*/
#include<iostream>
using namespace std;

int main()
{
    int c=1;
    for (int i = 1; i <= 4; i++)
    {
        for (int s = 3; s >= i; s--)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<c++<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}