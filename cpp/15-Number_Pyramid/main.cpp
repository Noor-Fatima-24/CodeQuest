/*

✅ 4. Number Pyramid: 
                            1  
                          1 2  
                        1 2 3  
                      1 2 3 4  

 🎯Hint:

 1): Print spaces before numbers: n - i spaces for row i.
 2): Then print numbers from 1 to i.

*/
#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int s = 1; s <= 4-i; s++)
        {
            cout<<" ";
        }
        
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    
    return 0;
}