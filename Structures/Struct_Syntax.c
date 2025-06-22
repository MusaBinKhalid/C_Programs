#include <stdio.h>

struct Programmer
{
    char name[10];
    char language[10];
    int salary;
};

int main(void)
{

    struct Programmer p1, p2, p3;

    printf("Enter Name: ");
    scanf("%s", &p1.name);

    printf("Enter Programming Language: ");
    scanf("%s", &p1.language);

    printf("Enter Salary: ");
    scanf("%d", &p1.salary);

    printf("\nName: %s\nLanguage: %s\nSalary: %d", p1.name, p1.language, p1.salary);

    printf("\n\nEnter Name: ");
    scanf("%s", &p2.name);
                
    printf("Enter Programming Language: ");
    scanf("%s", &p2.language);

    printf("Enter Salary: ");
    scanf("%d", &p2.salary);

    printf("\nName: %s\nLanguage: %s\nSalary: %d", p2.name, p2.language, p2.salary);

    printf("\n\nEnter Name: ");
    scanf("%s", &p3.name);

    printf("Enter Programming Language: ");
    scanf("%s", &p3.language);

    printf("Enter Salary: ");
    scanf("%d", &p3.salary);

    printf("\nName: %s\nLanguage: %s\nSalary: %d", p3.name, p3.language, p3.salary);

    return 0;
}