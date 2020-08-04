#include<stdio.h>

struct student
{
    int id;
    char name[25];
    int year;
    float cgpa;
};

void main()
{
    struct student stud1;
    struct student stud2;
        
    printf("\nEnter first student details -> ");

    printf("\nEnter first students id : ");
    scanf("%d", &stud1.id);
    printf("Enter first students name : ");
    scanf("%s", &stud1.name);
    printf("Enter first students year : ");
    scanf("%d", &stud1.year);
    printf("Enter first students cgpa : ");
    scanf("%f", &stud1.cgpa);

    
    printf("\nEnter second student details ->");

    printf("\nEnter second students id : ");
    scanf("%d", &stud2.id);
    printf("Enter second students name : ");
    scanf("%s", &stud2.name);
    printf("Enter second students year : ");
    scanf("%d", &stud2.year);
    printf("Enter second students cgpa : ");
    scanf("%f", &stud2.cgpa);

    printf("\nStudent 1 details : ");
    printf("\nStudent 1 - id is : %d", stud1.id);
    printf("\nStudent 1 - name is : %s", stud1.name);
    printf("\nStudent 1 - year is : %d", stud1.year);
    printf("\nStudent 1 - cgpa is : %.2f", stud1.cgpa);

    printf("\n\nStudent 2 details : ");
    printf("\nStudent 2 - id is : %d", stud2.id);
    printf("\nStudent 2 - name is : %s", stud2.name);
    printf("\nStudent 2 - year is : %d", stud2.year);
    printf("\nStudent 2 - cgpa is : %.2f", stud2.cgpa);

    
}