//Q111: Write a program to take an integer array arr and an integer k as inputs. 
//The task is to find the first negative integer in each subarray of size k moving from left to right. 
//If no negative exists in a window, print "0" for that window. 
//Print the results separated by spaces as output.

#include <stdio.h>

#define MAX 100

void printFirstNegative(int arr[], int n, int k) {
    int queue[MAX], front = 0, rear = 0;
    int i;
    for (i = 0; i < k; i++) {
        if (arr[i] < 0)
            queue[rear++] = i;
    }
    for (; i < n; i++) {
        if (front != rear)
            printf("%d ", arr[queue[front]]);
        else
            printf("0 ");

        while (front != rear && queue[front] <= i - k)
            front++;

        if (arr[i] < 0)
            queue[rear++] = i;
    }
    if (front != rear)
        printf("%d", arr[queue[front]]);
    else
        printf("0");
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

    printFirstNegative(arr, n, k);

    return 0;
}