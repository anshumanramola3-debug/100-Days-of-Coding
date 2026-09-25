#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];

    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);

    int start = 0;

    for (int i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            for (int j = i - 1; j >= start; j--)
                printf("%c", str[j]);

            if (str[i] != '\0')
                printf("%c", str[i]);

            start = i + 1;
        }

        if (str[i] == '\0')
            break;
    }

    return 0;
}