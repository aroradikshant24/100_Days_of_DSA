//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int vowels = 0, consonants = 0;

    printf("Enter the filename: ");
    scanf("%99s", filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening the file!\n");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) {
        ch = tolower((unsigned char)ch);
    if ((ch >= 'a' && ch <= 'z')) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        vowels++;
    } else {
        consonants++;
    }
        }
    }

    fclose(file);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}