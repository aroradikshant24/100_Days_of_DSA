//Q125: Open an existing file in append mode and allow the user to enter a new line of text. 
//Append the text at the end without overwriting existing content.

#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char text[256];

    printf("Enter the filename to append text: ");
    scanf("%99s", filename);
    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening the file!\n");
        return 1;
    }
    getchar();
    printf("Enter the text to append: ");
    fgets(text, sizeof(text), stdin);
    fprintf(file, "%s", text);
    fclose(file);
    printf("File updated successfully with appended text.\n");

    return 0;
}