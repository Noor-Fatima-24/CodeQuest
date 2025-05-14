/*

08: 
  👩🏻‍💻Inverted Pyramid: 
                   *******
                    *****
                     ***
                      *

💡 Hint: Reverse of the pyramid .

*/
#include<iostream>
using namespace std;

int main()
{
    for (int i = 4; i >= 1; i--)
    {
        for (int s = 1; s <= 4-i; s++)
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