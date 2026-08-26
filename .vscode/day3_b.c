
#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swap the numbers using a third variable
    temp = a;
    a = b;
    b = temp;

    // Display the swapped numbers
    printf("After swapping: %d %d\n", a, b);

    return 0;
}
