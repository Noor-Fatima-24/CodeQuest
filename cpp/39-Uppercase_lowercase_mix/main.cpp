/*

39: 
✅ Uppercase & lowercase mix: 
                              A  
                              b c  
                              D E F  
                              g h i j

 🎯Hint:

 1): rack row number (i).
 2): If row is Odd row → UPPERCASE letters.
 3): If row is even row → lowercase letters.
 4): Use a shared character counter for all rows.

*/
#include<iostream>
using namespace std;

int main()
{
    char ch='A';
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ( i % 2 == 1 )
            {
                cout<<ch<<" ";
            }
            else{
                cout << (char)(tolower(ch)) << " "; // used to make "ch" a shared character counter.
            }
            ch++;
        }
        cout<<endl;
    }
    
    return 0;
}
/*

cout << (char)(tolower(ch)) << " ";

explanation:

This line prints a lowercase version of the character ch, even though ch is an uppercase letter

tolower(ch) ---- Converts the character ch to lowercase (e.g., 'B' → 'b')
(char)	---- Casts the result of tolower(ch) back to a char (since tolower returns an int)

*/