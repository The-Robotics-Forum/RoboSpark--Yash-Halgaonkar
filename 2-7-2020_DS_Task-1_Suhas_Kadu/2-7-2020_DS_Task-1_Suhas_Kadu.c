//Write a program to accept and display details of 
//4 Students. Accept their ID,name,year,CGPA

#include"stdio.h"
#include"stdlib.h"

typedef struct
{
  int id;
  char name[20];
  int year;
  float cgpa;
}Student;

int main()
{
    Student s1[10];
    printf("Enter the details of Students");
    for(int i=1;i<5;i++)
    {
    printf("\nEnter the Id of Student %d: ",i);
    scanf("%d",&s1[i].id);
    printf("Enter the Name of Student %d: ",i);
    scanf("%s",s1[i].name);
    printf("Enter the Year of Student %d: ",i);
    scanf("%d",&s1[i].year);
    printf("Enter the C.G.P.A. of Student %d: ",i);
    scanf("%f",&s1[i].cgpa);
    }
    
    printf("\n\nDetails of Students are");
    for(int i=1;i<5;i++)
    {
        printf("\nId of Student %d is %d: ",i,s1[i].id);
        printf("\nName of Student %d is %s: ",i,s1[i].name);
        printf("\nYear of Student %d is %d: ",i,s1[i].year);
        printf("\nC.G.P.A. of Student %d is %f: ",i,s1[i].cgpa);
        
        
    }
    
}