#include<stdio.h>

int main() {
    char str[100];
    int len = 0, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[len] != '\0' && str[len] != '\n')
        len++;

    for(int i = 0, j = len - 1; i < j; i++, j--) {
        if(str[i] != str[j]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("String is a palindrome");
    else
        printf("String is not a palindrome");

    return 0;
}