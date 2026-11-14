//Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.//
#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the size of the first array: ");
    scanf("%d", &m);
    printf("Enter the size of the second array: ");
    scanf("%d", &n);

    int arr1[m], arr2[n];
    printf("Enter the elements of the first array (sorted): ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements of the second array (sorted): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[m + n];
    int i = 0, j = 0, k = 0;

    // Merge the two sorted arrays
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy any remaining elements from either array
    while (i < m) {
        merged[k++] = arr1[i++];
    }
    while (j < n) {
        merged[k++] = arr2[j++];
    }

    // Print the merged array
    printf("The merged sorted array is: ");
    for (int l = 0; l < m + n; l++) {
        printf("%d ", merged[l]);
    }
    printf("\n");

    return 0;
}