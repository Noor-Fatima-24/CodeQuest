/*

05:
✅ Solid Square: 
                  ****
                  ****
                  ****
                  ****

💡 Hint: Outer loop = rows, Inner loop = fixed number of stars each row

*/
#include<iostream>
using namespace std;

int main() 
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}