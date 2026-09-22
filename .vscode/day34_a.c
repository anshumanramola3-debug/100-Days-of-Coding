
#include <stdio.h>

int main() {
    int arr[100], size, pos, element;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);
    
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    for (int i = size - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }
    
    arr[pos - 1] = element;
    
    size++;
    
    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}