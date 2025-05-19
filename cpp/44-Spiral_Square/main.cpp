/*

44: 
✅ Spiral Square (4x4): 
                        1  2  3  4  
                        12 13 14 5  
                        11 16 15 6  
                        10  9  8  7

 🎯Hint:

 1): Fill outer layers first, then go inward.
 2): loops per layer (left→right, top→bottom, right→left, bottom→top).
 3): This code is better done by using array.
 4): Flow of Spiral Movement:
                                 S tep 1 → Top Row       → 1 2 3 4
                                 Step 2 ↓ Right Column  →       5
                                 Step 3 ← Bottom Row    → 10 9 8 7
                                 Step 4 ↑ Left Column   → 6
                                 Step 5 → Inner Top     → 11 12
                                 Step 6 ↓ Inner Right   →    13
                                 Step 7 ← Inner Bottom  → 16 15 14


*/
#include<iostream>
using namespace std;

int main()
{
    int n = 4;                  // Size of matrix
    int a[4][4];                // 2D array to hold values
    int c = 1;                  // Counter starts from 1

    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;

    while (top <= bottom && left <= right)
    {
        // 1. Left → Right (top row)
        for (int i = left; i <= right; i++)
            a[top][i] = c++;
        top++;

        // 2. Top → Bottom (right column)
        for (int i = top; i <= bottom; i++)
            a[i][right] = c++;
        right--;

        // 3. Right → Left (bottom row)
        for (int i = right; i >= left; i--)
            a[bottom][i] = c++;
        bottom--;

        // 4. Bottom → Top (left column)
        for (int i = bottom; i >= top; i--)
            a[i][left] = c++;
        left++;
    }

    // Print the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }

    return 0;
}
