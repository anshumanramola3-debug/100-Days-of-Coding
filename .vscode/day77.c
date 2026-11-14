#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input, *output;
    char ch;

    input = fopen("info.txt", "r");

    if (input == NULL) {
        printf("Error: Could not open info.txt\n");
        return 1;
    }

    output = fopen("output.txt", "w");

    if (output == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(input);
        return 1;
    }

    while ((ch = fgetc(input)) != EOF) {
        fputc(toupper(ch), output);
    }

    fclose(input);
    fclose(output);

    printf("Conversion completed. Output written to output.txt\n");

    return 0;
}