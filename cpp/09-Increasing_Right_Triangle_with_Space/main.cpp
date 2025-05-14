/*

09: 
  🎯 Increasing Right Triangle with Space:
                                         * 
                                         * * 
                                         * * * 
                                         * * * * 

💡 Hint: Print * with a space after each star

*/
#include<iostream>
using namespace std;
 
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}