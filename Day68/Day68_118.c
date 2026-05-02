//Q118: Write a program to take an input array of size n. 
//The array should contain all the integers between 0 to n except for one. 
//Print that missing number

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter size of array (n): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int expected_sum = (n * (n + 1)) / 2;

    int actual_sum = 0;
    for (i = 0; i < n; i++) {
        actual_sum += arr[i];
    }
    int missing = expected_sum - actual_sum;
    printf("%d\n", missing);

    return 0;
}