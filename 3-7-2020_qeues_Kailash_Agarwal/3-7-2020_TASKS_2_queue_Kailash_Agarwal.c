#include<stdio.h>
#include<stdlib.h>

#define No 4


typedef struct Queue
{
    int arr[10];
    int front, rear;
}Queue;


struct Student
{
    char name[20];
    int rollno;
}stud[No];



void initl(Queue* q)
{
    q->front=0;
    q->rear=0;
}

void enqueue(Queue* q, int x)
{
    q->arr[q->rear++]=x;
}

int dequeue(Queue* q)
{
    return q->arr[q->front++];
}

int isEmpty(Queue* q)
{
    return q->front == q-> rear;
}

int main()
{
    int i, j;

    Queue* q1 = (Queue*)malloc(sizeof(Queue));
    initl(q1);

    for(i=0;i<No;i++)
    {
        printf("\nEnter the name of Student %d: ", i+1);
        fflush(stdin);
        gets(stud[i].name);

        printf("Enter %s's roll number: ", stud[i].name);
        scanf("%d", &stud[i].rollno);

        if(stud[i].rollno%2==0)
        {
            enqueue(q1, stud[i].rollno);
        }
    }

    if(isEmpty(q1))
    {
        printf("\nNo of Student with even Roll numbers\n");
        exit(0);
    }

    printf("\neven roll number Student name : \n");
    for(i=0;i<No;i++)
    {
        for(j=q1->front;j<q1->rear;j++)
        {
            if(stud[i].rollno == q1->arr[j])
            {
                printf("%s\n", stud[i].name);
            }
        }
    }
}
