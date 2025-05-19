/*
45: 
🎯 Binary Triangle : 
                      1  
                      0 1  
                      1 0 1  
                      0 1 0 1

 🎯Hint:

 1):  Even rows start with 1, odd with 0.
 2):  Alternate 1 and 0.

 👩🏻‍💻logic: 
          if No.row + No.col = even no.  so print "1"
          if No.row + No.col = odd no.  so print "0"
     EX:     
                      1       1+1 = 1
                      0 1      2+1 = 3        2+2 = 4     
                      1 0 1     3+1 = 4        3+2 = 5     3+3 = 6    
                      0 1 0 1    4+1 = 5        4+2 = 6     4+3 = 7     4+4 = 8

*/
#include<iostream>
using namespace std;

int main()
{
    
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
           if ( (i + j) % 2 == 0 )
           {
            cout<<"1 ";
           }
           else{
            cout<<"0 ";
           }
           
        }
        cout<<endl;
    }
    
    return 0;
}