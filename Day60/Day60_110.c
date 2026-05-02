//Q110: Write a program to take an integer array arr and an integer k as inputs.
// The task is to find the maximum element in each subarray of size k moving from left to right. 
//Print the maximum elements for each window separated by spaces as output.

#include <stdio.h>
#include <limits.h>

void maxSlidingWindow(int arr[], int n, int k) {
    for (int i = 0; i <= n - k; i++) {
        int max = INT_MIN;
        for (int j = i; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        printf("%d ", max);
    }
    printf("\n");
}

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the size of subarray: ");
    scanf("%d", &k);

    maxSlidingWindow(arr, n, k);

    return 0;
}