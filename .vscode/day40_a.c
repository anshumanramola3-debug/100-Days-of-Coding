#include<stdio.h>

int main() {
    int r, c, a[100][100];

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter matrix elements:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal Traversal:\n");

    for(int k = 0; k < c; k++) {
        int i = 0, j = k;
        while(i < r && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    for(int k = 1; k < r; k++) {
        int i = k, j = c - 1;
        while(i < r && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}