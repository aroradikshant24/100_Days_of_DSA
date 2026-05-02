//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>
#include <string.h>
enum UserRole { ADMIN, USER, GUEST };
int main() {
    enum UserRole role;
    char inputRole[10];

    printf("Enter user role (ADMIN, USER, GUEST): ");
    scanf("%s", inputRole);

    if (strcmp(inputRole, "ADMIN") == 0) {
        role = ADMIN;
    } else if (strcmp(inputRole, "USER") == 0) {
        role = USER;
    } else if (strcmp(inputRole, "GUEST") == 0) {
        role = GUEST;
    } else {
        printf("Invalid role\n");
        return 1;
    }
    switch (role) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Invalid role\n");
            return 1;
    }
    return 0;
}