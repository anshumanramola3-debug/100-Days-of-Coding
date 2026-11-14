#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s[100];
    int n, i, topper;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    topper = 0;

    for(i = 1; i < n; i++) {
        if(s[i].marks > s[topper].marks) {
            topper = i;
        }
    }

    printf("\nTopper: %s (Marks: %d)\n",
           s[topper].name,
           s[topper].marks);

    return 0;
}