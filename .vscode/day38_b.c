#include<stdio.h>

int main() {
    int n, a[100][100], flag = 1;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("Matrix is symmetric");
    else
        printf("Matrix is not symmetric");

    return 0;
}