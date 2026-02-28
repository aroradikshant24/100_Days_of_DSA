// Problem: Given a matrix, calculate the sum of its primary diagonal elements. The primary diagonal consists of elements where row index equals column index.

// Input:
// - First line: two integers m and n
// - Next m lines: n integers each

// Output:
// - Print the sum of the primary diagonal elements
#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int matrix[m][n];


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int sum = 0;

    for (int i = 0; i < m && i < n; i++) {
        sum += matrix[i][i];
    }

    cout << sum << endl;

    return 0;
}