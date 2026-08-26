#include <stdio.h>

int main() {
    int n, i;
    int binary[32];
    printf("Enter a number: ");
    scanf("%d", &n);
    i = 0;
    while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }
    printf("Binary representation: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
    return 0;
}