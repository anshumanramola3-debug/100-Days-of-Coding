#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character if present
    name[strcspn(name, "\n")] = 0;

    printf("Initials: %c", name[0]);

    // Find the last space to separate first names from surname
    int last_space = -1;
    for (int i = 0; i < strlen(name); i++) {
        if (name[i] == ' ') {
            last_space = i;
        }
    }

    // Print initials of first names
    for (int i = 1; i < last_space; i++) {
        if (name[i] == ' ') {
            printf("%c", name[i + 1]);
        }
    }

    // Print the full surname
    if (last_space != -1) {
        printf(" %s", name + last_space + 1);
    }

    printf("\n");

    return 0;
}