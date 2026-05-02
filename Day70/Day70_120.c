//Q120: Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[i] != '\0' && isalpha(str[i])) {
        str[i] = toupper(str[i]);
    }
    i++;

    while (str[i] != '\0') {
        if (str[i - 1] == ' ' && isalpha(str[i])) {
            str[i] = toupper(str[i]);
        }
        i++;
    }

    printf("%s", str);

    return 0;
}