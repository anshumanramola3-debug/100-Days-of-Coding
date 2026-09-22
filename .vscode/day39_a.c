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
        for(int j = i + 1; j < n; j++) {
            if(a[i][i] == a[j][j]) {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("Diagonal elements are distinct");
    else
        printf("Diagonal elements are not distinct");

    return 0;
}