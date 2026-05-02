//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include <stdio.h>
#include <string.h>

typedef enum {
    SUCCESS, FAILURE, TIMEOUT, INVALID_STATUS
} Status;
Status get_status_from_string(char *status_str) {
    if (strcmp(status_str, "SUCCESS") == 0) return SUCCESS;
    if (strcmp(status_str, "FAILURE") == 0) return FAILURE;
    if (strcmp(status_str, "TIMEOUT") == 0) return TIMEOUT;
    return INVALID_STATUS;
}
void print_status_message(Status s) {
    switch (s) {
        case SUCCESS:
            printf("Operation succeeded\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
        default:
            printf("Invalid status\n");
    }
}
int main() {
    char input[20];
    printf("Enter status (SUCCESS, FAILURE, TIMEOUT): ");
    scanf("%s", input);

    Status status = get_status_from_string(input);
    print_status_message(status);

    return 0;
} 