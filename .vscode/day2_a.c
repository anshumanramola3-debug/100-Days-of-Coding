//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.//
#include <stdio.h>

int main() {
    int length, breadth;
    int area, perimeter;

    // Input length and breadth from the user
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);

    // Calculate area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Display the results
    printf("Area of the rectangle: %d\n", area);
    printf("Perimeter of the rectangle: %d\n", perimeter);

    return 0;
    
}
