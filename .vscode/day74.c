#include <stdio.h>

int main() {
    FILE *source, *destination;
    char sourceFile[100], destFile[100];
    char ch;

    printf("Enter source filename: ");
    scanf("%s", sourceFile);

    printf("Enter destination filename: ");
    scanf("%s", destFile);

    source = fopen(sourceFile, "r");

    if (source == NULL) {
        printf("Error: Cannot open source file.\n");
        return 1;
    }

    destination = fopen(destFile, "w");

    if (destination == NULL) {
        printf("Error: Cannot create destination file.\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully from %s to %s\n",
           sourceFile, destFile);

    return 0;
}