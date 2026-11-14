#include <stdio.h>

int main() {
    FILE *file;
    char line[100];

    // Open the file in read mode
    file = fopen("info.txt", "r");

    if (file == NULL) {
        printf("Error: Could not open info.txt\n");
        return 1;
    }

    printf("Contents of info.txt:\n\n");

    // Read and print each line until EOF
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(file);

    return 0;
}