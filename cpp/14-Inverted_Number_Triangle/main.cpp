/*

14:
✅ 3. Inverted Number Triangle: 
                                1 2 3 4  
                                1 2 3  
                                1 2  
                                1
                                
 🎯 Hint:

    Use outer loop for rows from n down to 1.
     Inner loop runs from 1 to current row number                                

*/

#include<iostream>
using namespace std;

int main()
{
    for (int i = 4; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    
    return 0;
}