#include <iostream>
using namespace std;

int main() {
    int a[2][3], t[3][2];

    cout << "Enter elements of matrix A (2x3):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    // Transpose logic
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            t[j][i] = a[i][j];
        }
    }

    cout << "Transpose of matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}