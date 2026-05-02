//Q124: Take two filenames from the user – a source file and a destination file. 
//Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourceFileName[100], destFileName[100];
    int ch;


    printf("Enter the source file name: ");
    scanf("%99s", sourceFileName);

    printf("Enter the destination file name: ");
    scanf("%99s", destFileName);

    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }


    destFile = fopen(destFileName, "w");
    if (destFile == NULL) {
        printf("Error opening destination file!\n");
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }


    fclose(sourceFile);
    fclose(destFile);

    printf("File copied successfully to %s\n", destFileName);

    return 0;
}