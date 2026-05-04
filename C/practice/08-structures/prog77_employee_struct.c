// Employee structure with read and display functions
// ARAFAT-0242320005191008
#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[100];
    char address[200];
    int age;
    float salary;
};

void readEmployeeDetails(struct Employee *emp);
void displayEmployeeDetails(struct Employee emp);

int main()
{
    struct Employee emp;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    readEmployeeDetails(&emp);
    displayEmployeeDetails(emp);
    return 0;
}

void readEmployeeDetails(struct Employee *emp) {
    printf("ID: ");      scanf("%d", &emp->id);
    printf("Name: ");    getchar(); fgets(emp->name, sizeof(emp->name), stdin);
    emp->name[strcspn(emp->name, "\n")] = 0;
    printf("Address: "); fgets(emp->address, sizeof(emp->address), stdin);
    emp->address[strcspn(emp->address, "\n")] = 0;
    printf("Age: ");     scanf("%d",   &emp->age);
    printf("Salary: ");  scanf("%f",   &emp->salary);
}

void displayEmployeeDetails(struct Employee emp) {
    printf("\nEmployee Details:\n");
    printf("ID: %d | Name: %s | Age: %d | Salary: %.2f\n",
        emp.id, emp.name, emp.age, emp.salary);
}
