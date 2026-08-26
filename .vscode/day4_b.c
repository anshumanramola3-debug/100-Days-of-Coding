
#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the number of terms from the user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Calculate the sum of the first n natural numbers
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Display the result
    printf("Sum of the first %d natural numbers: %d\n", n, sum);

    return 0;
}