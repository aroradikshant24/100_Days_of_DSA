//Q108: Write a Program to take an integer array nums. 
//Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. 
//The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

#include <stdio.h>

void productExceptSelf(int nums[], int n, int answer[]) {
    int leftProduct[n];
    int rightProduct[n];

    leftProduct[0] = 1;
    for (int i = 1; i < n; i++) {
        leftProduct[i] = leftProduct[i - 1] * nums[i - 1];
    }

    rightProduct[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        rightProduct[i] = rightProduct[i + 1] * nums[i + 1];
    }

    for (int i = 0; i < n; i++) {
        answer[i] = leftProduct[i] * rightProduct[i];
    }
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int answer[n];
    productExceptSelf(nums, n, answer);
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
