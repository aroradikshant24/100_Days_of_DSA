//Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. 
//If the file pointer is NULL, print an error message; otherwise, read and display its content.

#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char buffer[256];

    printf("Enter the filename: ");
    scanf("%99s", filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }
    printf("File opened successfully.\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    fclose(file);

    return 0;
}