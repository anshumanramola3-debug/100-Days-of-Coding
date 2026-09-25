#include <stdio.h>

int main() {
    char str[1000], word[1000];
    int max = 0, len = 0, j = 0;

    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0;; i++) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            len++;
        } else {
            if (len > max) {
                max = len;
                for (int k = i - len, m = 0; k < i; k++, m++)
                    word[m] = str[k];
                word[len] = '\0';
            }
            len = 0;
        }

        if (str[i] == '\0')
            break;
    }

    printf("Longest word: %s", word);
    return 0;
}