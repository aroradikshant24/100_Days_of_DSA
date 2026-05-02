//Q143: Find and print the student with the highest marks.

#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
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
    int topper_index = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[topper_index].marks) {
            topper_index = i;
        }
    }
    printf("Topper: %s (Marks: %.2f)\n", students[topper_index].name, students[topper_index].marks);
    return 0;
}