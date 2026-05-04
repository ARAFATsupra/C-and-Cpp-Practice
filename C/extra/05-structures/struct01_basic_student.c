#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    struct Student s1;
    s1.roll_no = 1;
    strcpy(s1.name, "John");
    s1.marks = 95.5;
    printf("Roll No: %d\n",  s1.roll_no);
    printf("Name: %s\n",     s1.name);
    printf("Marks: %.2f\n",  s1.marks);
    return 0;
}
