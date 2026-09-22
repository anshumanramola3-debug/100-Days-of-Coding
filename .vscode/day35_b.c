
#include <stdio.h>  

int main() {
    int arr[100], size, k;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate right: ");
    scanf("%d", &k);

    // Adjust k to be within the bounds of the array
    k = k % size;

    // Rotate the array to the right by k positions
    for (int i = 0; i < k; i++) {
        int temp = arr[size - 1];
        for (int j = size - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }

    printf("Array after rotation: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}