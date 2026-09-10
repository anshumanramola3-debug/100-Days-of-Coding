#include <stdio.h>

int main() {
    int i, j;
    // Loop for rows
    for(i = 5; i >= 1; i--) {
        // Loop for columns
        for(j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to next line after each row
    }
    return 0;
}
