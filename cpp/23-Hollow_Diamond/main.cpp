/*
23: 
✅ Hollow Diamond: 
                       *   
                      * *  
                     *   * 
                    *     *
                     *   * 
                      * *  
                       *   

 🎯Hint:

 1): Similar to diamond but with spaces inside.
 2): Star only at start and end of each line.
 3): use same : 
                 if (j == 1 || j == (2 * i - 1) || i == 4)
                   cout << "*";
                 else
                   cout << " ";

*/
#include<iostream>
using namespace std;

int main()
{
    //upper
    for (int i = 1; i <= 4; i++)
    {
        for (int s = 4; s >= i; s--)
        {
            cout<<" ";
        }
        for (int j = 1; j <= 2*i-1 ; j++)
        {
            if (j==1  || j== 2*i-1)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }

        cout<<endl;
    }
    //lower
    for (int i = 3; i >= 1; i--)
    {
        for (int s = 4; s >= i; s--)
        {
            cout<<" ";
        }
        for (int j = 1; j <= 2*i-1 ; j++)
        {
            if (j==1  || j== 2*i-1)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }

        cout<<endl;
    }
    
    return 0;
}