#include <stdio.h>

int main() {
    FILE *file;
    char text[200];

    file = fopen("info.txt", "a");

    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    fprintf(file, "%s", text);

    fclose(file);

    printf("Text appended successfully to info.txt\n");

    return 0;
}
