/*

11: 
  Number Triangle:
                   1
                   1 2
                   1 2 3
                   1 2 3 4

💡 Hint: Inner loop prints numbers from 1 to i.

*/
#include<iostream>
using namespace std;

int main() 
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    
    return 0;
}
