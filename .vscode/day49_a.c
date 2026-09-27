//Print the initials of a name.//
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);
    
    // Remove newline character if present
    name[strcspn(name, "\n")] = 0;
    
    printf("Initials: %c", name[0]);
    
    for (int i = 1; i < strlen(name); i++) {
        if (name[i] == ' ') {
            printf("%c", name[i + 1]);
        }
    }
    printf("\n");
    
    return 0;
}