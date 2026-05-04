// Array of Student structs with input and display functions
// ARAFAT-0242320005191008
#include <stdio.h>
#include <string.h>

struct Student {
    int RollNo;
    char Name[100];
    char Address[200];
    int Age;
    float AverageMarks;
};

void readStuDet(struct Student students[], int count);
void disStuDet(struct Student students[], int count);

int main()
{
    struct Student students[3];
    int count = 3;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    readStuDet(students, count);
    disStuDet(students, count);
    return 0;
}

void readStuDet(struct Student students[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: "); scanf("%d", &students[i].RollNo);
        printf("Name: ");    getchar(); fgets(students[i].Name, sizeof(students[i].Name), stdin);
        students[i].Name[strcspn(students[i].Name, "\n")] = 0;
        printf("Address: "); fgets(students[i].Address, sizeof(students[i].Address), stdin);
        students[i].Address[strcspn(students[i].Address, "\n")] = 0;
        printf("Age: ");     scanf("%d", &students[i].Age);
        printf("Avg Marks: "); scanf("%f", &students[i].AverageMarks);
        printf("\n");
    }
}

void disStuDet(struct Student students[], int count) {
    printf("\nStudent Details:\n\n");
    for (int i = 0; i < count; i++) {
        printf("Student %d - Roll: %d | Name: %s | Age: %d | Avg: %.2f\n",
            i+1, students[i].RollNo, students[i].Name, students[i].Age, students[i].AverageMarks);
    }
}
