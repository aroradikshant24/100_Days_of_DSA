//Q145: Return a structure containing top student's details from a function.

#include <stdio.h>
#include <string.h>
#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS 100
struct Student {
    char name[MAX_NAME_LENGTH];
    int roll;
    int marks;
};
struct Student getTopStudent(struct Student students[], int count) {
    struct Student topStudent = students[0];
    for (int i = 1; i < count; i++) {
        if (students[i].marks > topStudent.marks) {
            topStudent = students[i];
        }
    }
    return topStudent;
}
int main() {
    int n;
    struct Student students[MAX_STUDENTS];
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d (Name Roll Marks): ", i + 1);
        scanf("%s %d %d", students[i].name, &students[i].roll, &students[i].marks);
    }
    struct Student topStudent = getTopStudent(students, n);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", topStudent.name, topStudent.roll, topStudent.marks);
    return 0;
}