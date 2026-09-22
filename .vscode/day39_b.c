#include<stdio.h>

int main() {
    int n, a[100][100], sum = 0;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        sum += a[i][i];
    }

    printf("Sum of main diagonal elements = %d", sum);

    return 0;
}