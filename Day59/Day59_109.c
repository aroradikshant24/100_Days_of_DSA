//Q109: Write a program to take an integer array arr and an integer k as inputs. 
//Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int maxSumSubarray(int arr[], int n, int k) {
    int maxSum = 0, windowSum = 0;

    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }
    maxSum = windowSum;

    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    return maxSum;
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

    int result = maxSumSubarray(arr, n, k);
    printf("Maximum sum of subarrays of size %d is: %d\n", k, result);

    return 0;
}