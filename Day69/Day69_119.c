//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    int max_val = -1;

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > max_val)
            max_val = arr[i];
    }
    int *freq = (int*)calloc(max_val + 1, sizeof(int));

    int repeated = -1;
    for (i = 0; i < n; i++) {
        freq[arr[i]]++;
        if (freq[arr[i]] == 2) {
            repeated = arr[i];
            break;
        }
    }
    printf("%d\n", repeated);

    free(arr);
    free(freq);
    return 0;
}