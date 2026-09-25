#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0};

    printf("Enter string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (++freq[str[i] - 'a'] == 2) {
            printf("First repeating character: %c", str[i]);
            return 0;
        }
    }

    printf("No repeating character");
    return 0;
}