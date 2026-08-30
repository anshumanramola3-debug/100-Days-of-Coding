#include <stdio.h>

int main() {
    int n, product = 1, digit, hasOdd = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) {
        digit = n % 10;
        if (digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        n /= 10;
    }
    if (hasOdd) {
        printf("Product of odd digits is %d", product);
    } else {
        printf("No odd digits found.");
    }
    return 0;
}