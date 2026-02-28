// // Problem: Write a program to perform addition of two matrices having the same dimensions.
//  The sum of two matrices is obtained by adding corresponding elements of the matrices.

// // Input:
// // - First line: two integers m and n representing the number of rows and columns
// // - Next m lines: n integers each representing the elements of the first matrix
// // - Next m lines: n integers each representing the elements of the second matrix

// // Output:
// // - Print the resultant matrix after addition, with each row on a new line and elements separated by spaces
#include <iostream>
using namespace std;

int main() {
    int m, n;


    cin >> m >> n;

    int A[m][n], B[m][n], Sum[m][n];


    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }


    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }


    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }


    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << Sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
 