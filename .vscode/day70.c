//Write a program to take a string input. Change it to sentence case.//
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert to sentence case
    str[0] = toupper(str[0]);
    for (int i = 1; i < strlen(str); i++) {
        str[i] = tolower(str[i]);
    }

    printf("Sentence case: %s", str);
    return 0;
}