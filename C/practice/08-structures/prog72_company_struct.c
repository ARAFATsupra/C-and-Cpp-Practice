// Company structure with user input
// ARAFAT-0242320005191008
#include <stdio.h>
#include <string.h>

struct company {
    char name[100];
    char address[200];
    char phone[15];
    int noOfEmployee;
};

int main()
{
    struct company myCompany;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("Enter company name: ");
    fgets(myCompany.name, sizeof(myCompany.name), stdin);
    myCompany.name[strcspn(myCompany.name, "\n")] = 0;
    printf("Enter company address: ");
    fgets(myCompany.address, sizeof(myCompany.address), stdin);
    myCompany.address[strcspn(myCompany.address, "\n")] = 0;
    printf("Enter phone number: ");
    fgets(myCompany.phone, sizeof(myCompany.phone), stdin);
    myCompany.phone[strcspn(myCompany.phone, "\n")] = 0;
    printf("Enter number of employees: ");
    scanf("%d", &myCompany.noOfEmployee);

    printf("\nCompany Information:\n");
    printf("Name: %s\n",     myCompany.name);
    printf("Address: %s\n",  myCompany.address);
    printf("Phone: %s\n",    myCompany.phone);
    printf("Employees: %d\n",myCompany.noOfEmployee);
    return 0;
}
