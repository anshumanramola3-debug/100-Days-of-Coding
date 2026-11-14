#include <stdio.h>

int main() {
    FILE *file;
    char name[50];
    int age;

    // Open file in write mode
    file = fopen("info.txt", "w");

    if (file == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    // Get user input
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Write data to file
    fprintf(file, "Name: %s", name);
    fprintf(file, "Age: %d\n", age);

    // Close the file
    fclose(file);

    // Confirmation message
    printf("Data was successfully saved to info.txt\n");

    return 0;
}