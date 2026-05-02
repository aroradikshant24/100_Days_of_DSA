//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    char ch;

    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input.txt\n");
        return 1;
    }
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output.txt\n");
        fclose(inputFile);
        return 1;
    }
    while ((ch = fgetc(inputFile)) != EOF) {
        fputc(toupper((unsigned char)ch), outputFile);
    }
    fclose(inputFile);
    fclose(outputFile);

    printf("Text converted to uppercase and saved to output.txt\n");

    return 0;
}