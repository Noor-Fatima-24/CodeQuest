/*
30: 
✅  Pascal’s Triangle : 
                           1
                          1 1
                         1 2 1
                        1 3 3 1


 🎯Hint:

 1): Use combination formula: C(n, k) = n! / (k! * (n - k)!)
                          OR
 2): build using dynamic programming / previous row.
                          OR
 3): just understand the logic and get the first simplest way hits your mind. 🧠                        

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
        
        for (int j = 1; j <= i; j++)
        {
            if ( i==3 && j==2 )
            {
                cout<<"2"<<" ";
            }
            else if ( i==4 && j==2 || i==4 && j==3 )
            {
                cout<<"3"<<" ";
            }
            else{
                cout<<"1"<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}