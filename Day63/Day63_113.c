//Q113: Write a program to take an integer array arr and an integer k as inputs. 
//The task is to find the kth smallest element in the array. 
//Print the kth smallest element as output.

#include <stdio.h>

#define MAX 100

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {

                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
    int n, k, i, arr[MAX];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value of k: ");
    scanf("%d", &k);
    bubbleSort(arr, n);
    if (k > 0 && k <= n) {
        printf("%d\n", arr[k-1]);
    } else {
        printf("Invalid value of k\n");
    }

    return 0;
}