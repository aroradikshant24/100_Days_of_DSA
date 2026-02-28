// Problem: Given an array of integers, rotate the array to the right by k positions.

// Input:
// - First line: integer n
// - Second line: n integers
// - Third line: integer k

// Output:
// - Print the rotated array
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    // Handle k greater than n
    k = k % n;

    // Temporary array for rotated result
    int rotated[n];

    // Place last k elements at the beginning
    for (int i = 0; i < k; i++) {
        rotated[i] = arr[n - k + i];
    }

    // Shift remaining elements
    for (int i = k; i < n; i++) {
        rotated[i] = arr[i - k];
    }

    // Print rotated array
    for (int i = 0; i < n; i++) {
        cout << rotated[i] << " ";
    }

    return 0;
}