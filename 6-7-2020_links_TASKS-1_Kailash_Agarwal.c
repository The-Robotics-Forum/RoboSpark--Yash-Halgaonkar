#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data ;
    struct node *next; 
};

int main ()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head -> data = 10;
    head-> next = NULL;

    struct node *sec_link = (struct node *)malloc(sizeof(struct node));
    sec_link -> data = 20;
    sec_link -> next = NULL;
    head -> next = sec_link;

    //insertion of a node
    struct node *insert = (struct node *)malloc(sizeof(struct node));
    insert -> data = 15;
    head ->next = insert;
    insert ->next = sec_link;
    sec_link -> next = NULL;

    struct node *frth_link = (struct node *)malloc(sizeof(struct node));
    frth_link -> data = 25;
    frth_link -> next = NULL;
    sec_link -> next = frth_link;
    

    struct node *temp = head ;
    while(temp->next !=NULL)
    {
        printf("%d ->",temp ->data);
        temp = temp->next ;
    }
    printf("%d ->NULL",temp ->data);
    
}