#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    struct Student students[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: "); scanf("%d", &students[i].roll_no);
        printf("Name: ");    scanf("%s",  students[i].name);
        printf("Marks: ");   scanf("%f", &students[i].marks);
    }
    printf("\nDetails of Students:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d - Roll: %d | Name: %s | Marks: %.2f\n",
            i + 1, students[i].roll_no, students[i].name, students[i].marks);
    }
    return 0;
}
