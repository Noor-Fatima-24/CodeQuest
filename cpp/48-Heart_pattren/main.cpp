#include <iostream>
using namespace std;

int main() {
    int n = 6; // size of heart (you can change it)

    // Upper part
    for (int i = n / 2; i <= n; i += 2) {
        for (int j = 1; j < n - i; j += 2)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }

    // Lower part
    for (int i = n; i >= 1; i--) {
        for (int j = i; j < n; j++)
            cout << " ";
        for (int j = 1; j <= (i * 2) - 1; j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}
