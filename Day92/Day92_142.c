//Q142: Store details of 5 students in an array of structures and print all.

#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
int main() {
    struct Student students[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Enter Name: ");
        getchar();
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0; 
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }
    printf("\n%-20s %-10s %-10s\n", "Name", "Roll No", "Marks");
    printf("--------------------------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("%-20s %-10d %-10.2f\n", students[i].name, students[i].roll_no, students[i].marks);
    }
    return 0;
}