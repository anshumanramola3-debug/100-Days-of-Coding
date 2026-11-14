#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    printf("\n\n-------------------------------------------------\n");
    printf("| %-20s | %-8s | %-5s |\n", "Name", "Roll No", "Marks");
    printf("-------------------------------------------------\n");

    for(i = 0; i < 5; i++) {
        printf("| %-20s | %-8d | %-5d |\n",
               s[i].name,
               s[i].roll_no,
               s[i].marks);
    }

    printf("-------------------------------------------------\n");

    return 0;
}