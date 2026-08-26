

#include <stdio.h>
int main() {
    int a, b;

    // Input two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swap the numbers without using a third variable
    a = a + b; // Step 1: Add both numbers and store in 'a'
    b = a - b; // Step 2: Subtract 'b' from the new 'a' to get original 'a'
    a = a - b; // Step 3: Subtract new 'b' from the new 'a' to get original 'b'

    // Display the swapped numbers
    printf("After swapping: %d %d\n", a, b);

    return 0;
}