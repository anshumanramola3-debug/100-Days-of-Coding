#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], nge[n];
    int stack[n];
    int top = -1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        nge[i] = -1;
    }

    for (int i = n - 1; i >= 0; i--) {
        while (top != -1 && stack[top] <= arr[i]) {
            top--;
        }

        if (top != -1) {
            nge[i] = stack[top];
        }

        stack[++top] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", nge[i]);
    }

    return 0;
}