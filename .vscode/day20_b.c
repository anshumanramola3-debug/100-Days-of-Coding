#include <stdio.h>

int main() {
    int n, complement = 0, power = 1;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    while (n != 0) {
        if (n % 10 == 0) {
            complement += 1 * power;
        }
        n /= 10;
        power *= 10;
    }
    printf("1's complement is %d", complement);
    return 0;
}   