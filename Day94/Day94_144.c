//Q144: Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %.2f\n", s.name, s.roll_no, s.marks);
}
int main() {
    struct Student student;
    printf("Enter Name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = 0; 
    printf("Enter Roll Number: ");
    scanf("%d", &student.roll_no);
    printf("Enter Marks: ");
    scanf("%f", &student.marks);
    printStudent(student);
    return 0;
}