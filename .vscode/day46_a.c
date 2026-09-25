#include <stdio.h>

int main() {
    char str[1000];

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0, j; str[i] != '\0'; i++) {
        char c = str[i];
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
            for (j = i; str[j] != '\0'; j++)
                str[j] = str[j + 1];
            i--;
        }
    }

    printf("Result: %s", str);
    return 0;
}