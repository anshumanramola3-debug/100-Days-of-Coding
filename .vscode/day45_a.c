#include <stdio.h>

int main() {
    char str[1000], ch;
    int count = 0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character: ");
    scanf(" %c", &ch);  // Note the space before %c to consume any leftover newline

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }

    printf("Frequency = %d", count);
    return 0;
}