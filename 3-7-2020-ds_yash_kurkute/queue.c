#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct studentrec
{
    int roll_no;
    char name[30];
};

struct queue
{
    int roll_no;
    char name[30];
    int front , rear;
};

void initialize( struct queue* q)
{
    q->front=0;
    q->rear=0;

}
 void print(struct queue *q)
 {
     printf("\n Roll No: %d Name : %s", q->roll_no, q-> name);
 }

void enqueue(struct studentrec *p , struct queue *q)
{
    q->roll_no=p->roll_no;
    strcpy(q->name , p->name);
    (q->rear) ++;
    print(q);

}

void main()
{
    int no_stud , i;
    struct studentrec *p ;
    struct queue *q;

    printf("\n Enter total number of students : ");
    scanf("%d" , &no_stud);

    p = (struct studentrec *)malloc(no_stud*sizeof(struct studentrec));
    q = (struct queue *)malloc(no_stud*sizeof(struct queue));
    initialize(q);

    printf("\n Enter the details of student - \n ");
    for ( i=0 ; i<no_stud ; i++)
    {
        printf("\n Enter Roll No of student %d : ", i+1);
        scanf("%d" , &(p+i)->roll_no);
        fflush(stdin);

        printf(" Enter name of student %d : ", i+1);
        gets((*(p+i)).name);
        fflush(stdin);

    }

    for ( i=0 ; i<no_stud ; i++)
    {
        if( ((p+i)->roll_no) % 2 == 0)
        {
            enqueue(p+i , q);
        }
    }

}