#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("Factorial of %d is: %lld\n", n, factorial);
    return 0;
}