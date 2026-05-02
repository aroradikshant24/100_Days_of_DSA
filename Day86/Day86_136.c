//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>
#include <string.h>
enum Operation { ADD, SUBTRACT, MULTIPLY };
int main() {
    enum Operation op;
    char operation[10];
    int a, b, result;

    printf("Enter operation (ADD, SUBTRACT, MULTIPLY) followed by two integers: ");
    scanf("%s %d %d", operation, &a, &b);

    if (strcmp(operation, "ADD") == 0) {
        op = ADD;
    } else if (strcmp(operation, "SUBTRACT") == 0) {
        op = SUBTRACT;
    } else if (strcmp(operation, "MULTIPLY") == 0) {
        op = MULTIPLY;
    } else {
        printf("Invalid operation\n");
        return 1;
    }
    switch (op) {
        case ADD:
            result = a + b;
            break;
        case SUBTRACT:
            result = a - b;
            break;
        case MULTIPLY:
            result = a * b;
            break;
        default:
            printf("Invalid operation\n");
            return 1;
    }
    printf("Result: %d\n", result);
    return 0;
}


