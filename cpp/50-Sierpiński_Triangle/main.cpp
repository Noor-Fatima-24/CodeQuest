#include <iostream>
#include <vector>
using namespace std;

// Recursive function to draw Sierpinski triangle
void draw(int x, int y, int size, vector<vector<char>> &canvas) {
    if (size == 1) {
        canvas[x][y] = '*';
        return;
    }

    int newSize = size / 2;
    draw(x, y, newSize, canvas); // top
    draw(x + newSize, y - newSize, newSize, canvas); // left
    draw(x + newSize, y + newSize, newSize, canvas); // right
}

int main() {
    int n;
    cout << "Enter height (power of 2, e.g. 2, 4, 8, 16): ";
    cin >> n;

    vector<vector<char>> canvas(n, vector<char>(2 * n, ' '));

    draw(0, n - 1, n, canvas);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * n; j++)
            cout << canvas[i][j];
        cout << endl;
    }
}
