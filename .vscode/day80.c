#include <stdio.h>

int main() {
    FILE *file;
    char name[50];
    int roll, marks, n;

    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar();

    file = fopen("students.txt", "w");

    if (file == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Name: ");
        fgets(name, sizeof(name), stdin);

        printf("Enter Roll Number: ");
        scanf("%d", &roll);

        printf("Enter Marks: ");
        scanf("%d", &marks);
        getchar();

        fprintf(file, "%s%d %d\n", name, roll, marks);
    }

    fclose(file);

    file = fopen("students.txt", "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nStudent Records:\n\n");

    while (fgets(name, sizeof(name), file) != NULL) {
        printf("%s", name);
    }

    fclose(file);

    return 0;
}