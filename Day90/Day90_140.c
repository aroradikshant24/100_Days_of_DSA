//Q140: Define a struct with enum Gender and print person's gender.

#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };
struct Person {
    enum Gender gender;
};
int main() {
    char input[20];
    struct Person person;

    printf("Enter Gender (MALE, FEMALE, OTHER): ");
    scanf("%19s", input);

    if (strcmp(input, "MALE") == 0)
        person.gender = MALE;
    else if (strcmp(input, "FEMALE") == 0)
        person.gender = FEMALE;
    else
        person.gender = OTHER;

    switch (person.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        default:
            printf("Other\n");
    }
    return 0;
}