#include <stdio.h>

int main() {
    float percentage;
    char grade;

    printf("Enter the percentage (0-100): ");
    scanf("%f", &percentage);

    if (percentage >= 90 && percentage <= 100) {
        grade = 'A';
    } else if (percentage >= 80 && percentage < 90) {
        grade = 'B';
    } else if (percentage >= 70 && percentage < 80) {
        grade = 'C';
    } else if (percentage >= 60 && percentage < 70) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("The assigned grade is: %c\n", grade);

    return 0;
}