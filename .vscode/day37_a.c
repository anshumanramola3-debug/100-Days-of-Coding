#include<stdio.h>

int main() {
    int r, c, a[100][100], rowSum[100];

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter matrix elements:\n");
    for(int i = 0; i < r; i++) {
        rowSum[i] = 0;
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            rowSum[i] += a[i][j];
        }
    }

    printf("Sum of each row:\n");
    for(int i = 0; i < r; i++) {
        printf("Row %d = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}