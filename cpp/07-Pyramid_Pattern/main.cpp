/*

07:
✅ Pyramid Pattern: 
                     *
                    ***
                   *****
                  *******

 💡 Hint: Use the first loop to print spaces (decreasing each row).Then, print stars (increasing each row).

*/
#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++)
    {
         for (int s = 1; s <= 4-i ; s++)
         {
            cout<<" ";
         }
         
        for (int j = 1; j <= i; j++)
        {
         cout<<"*"<<" ";
        }
       
        cout<<endl;
    }
    
    return 0;
}