
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Student
{
   char name[20];
    int roll;
}Student;

typedef struct Queue
{
    Student s1[5];
    int front,rear;
}Queue;


Student enqueue(Queue *q,Student s1)
{

        q->s1[q->rear].roll=s1.roll;
        strcpy(q->s1[q->rear].name,s1.name);
        return q->s1[q->rear++];

    
}

int isEmpty(Queue *q)
{
    return q->front==q->rear;
}

void init(Queue *q)
{
    q->front=0;
    q->rear=0;
    strcpy(q->s1[0].name,"aa");
    q->s1[0].roll=12;
}

Student dequeue(Queue *q)
{
    return q->s1[q->front++];
}

int main()
{
    
    Queue *q1=(Queue *)malloc(sizeof(Queue));
    init(q1);
    Student s1={"MORTAL",26};
    Student s2={"VIPER",12};
    Student s3={"REGA",15};
    Student s4={"JOHNNY",22};
    Student s5={"NEYOO",19};
    Student s;
    
    if(s1.roll%2==0)
    {
     s=enqueue(q1,s1);
    printf("Name:%s\nRoll NO.:%d\n\n",s.name,s.roll);
    }
    
    if(s2.roll%2==0)
    {
    s = enqueue(q1,s2);
    printf("Name:%s\nRoll NO.:%d\n\n",s.name,s.roll);
    }
    
    if(s3.roll%2==0)
    {
    s = enqueue(q1,s3);
    printf("Name:%s\nRoll NO.:%d\n\n",s.name,s.roll);
    }
    
    if(s4.roll%2==0)
    {
    s = enqueue(q1,s4);
    printf("Name:%s\nRoll NO.:%d\n\n",s.name,s.roll);
    }
    
    if(s5.roll%2==0)
    {
    s = enqueue(q1,s5);
    printf("Name:%s\nRoll NO.:%d\n\n",s.name,s.roll);
    }

    return 0;
}
