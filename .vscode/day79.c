#include <stdio.h>

int main() {
    FILE *file;
    int n, num, sum = 0, count = 0;
    float average;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    file = fopen("numbers.txt", "w");

    if (file == NULL) {
        printf("Error creating numbers.txt\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        fprintf(file, "%d ", num);
    }

    fclose(file);

    file = fopen("numbers.txt", "r");

    if (file == NULL) {
        printf("Error opening numbers.txt\n");
        return 1;
    }

    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(file);

    average = (float)sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}