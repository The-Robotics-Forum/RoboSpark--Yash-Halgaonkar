//program to make records for 4 students using structure
#include<stdio.h>
#include<stdlib.h>

struct record
{
    int id;
    char name[30];
    int year;
    float cgpa;
};

int main()
{
    struct record stud[5];
    printf("enter the following details");
    for(int i=1;i<5;i++)
    {
        printf("\nEnter the student Id of stud %d : ",i);
        scanf("%d",&stud[i].id);
        printf("\nEnter the student name of stud %d : ",i);
        scanf("%s",&stud[i].name);
        printf("\nEnter the student year of stud %d : ",i);
        scanf("%d",&stud[i].year);
        printf("\nEnter the student C.G.P.A of stud %d : ",i);
        scanf("%f",&stud[i].cgpa);
    }
    printf("The student details are");
    for(int i = 1;i<5;i++)
    {
        printf("\nstudent Id of %d is : %d ",i,stud[i].id);
        printf("\nstudent name of %d is : %s: ",i,stud[i].name);
        printf("\nstudent year of %d is : %d: ",i,stud[i].year);
        printf("\nstudent C.G.P.A of %d is : %f: ",i,stud[i].cgpa);
    }

}