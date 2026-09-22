
#include <stdio.h>

int main() {
    int arr[100], size, pos;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &pos);

    // Shift elements to the left
    for (int i = pos - 1; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrement the size of the array
    size--;

    printf("Array after deletion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}