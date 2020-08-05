#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

//inserting node at beginning
void insert_beg(int data, struct node **head)
{
     struct node *new_node = (struct node*)malloc(sizeof(struct node));
      new_node ->data =data;

      if (*head == NULL)
    {
       *head = new_node;
       return;
    }
        new_node -> next = *head;
      *head = new_node;
}

//inserting a node in between the linked list
void insert_mid(int data,struct node* prev_node)
{
    if (prev_node == NULL)
    {
       printf("The previous node cannot be NULL");
       return;
    }
    struct node* new_node =(struct node*) malloc(sizeof(struct node));
    new_node->data  = data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

//inserting a node at the last
 void insert_last(int data, struct node **head)
 {
      struct node *new_node = (struct node*)malloc(sizeof(struct node));

      new_node ->data =data;
      new_node->next = NULL;

      struct node *temp = *head;

    if (*head == NULL)
    {
       *head = new_node;
       return;
    }

        while (temp->next != NULL)
        temp = temp->next;

    temp ->next = new_node;
    return;
 }


 //deleting a node
 void delete_node(struct node **head, int data)
 {
     struct node * temp = *head;
     struct node * prev = *head  ;

     if(temp-> data == data)
     {
         *head = temp->next;
        free(temp);
        return;
     }
     while(temp != NULL && temp-> data != data)
     {
         prev= temp;
         temp= temp-> next;
     }

     if (temp== NULL)
        return;

     else
         prev-> next= temp->next;

 free(temp);

 }
 void print(struct node *head)  //function to print the linke list
 {
     struct node *temp = head;
    while(temp ->next !=NULL)
    {
        printf("%d ",temp->data);
        temp= temp->next;
    }
    printf("%d ",temp->data);
 }


int main()
{
    //Forming a linked list with four nodes
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *third = (struct node*)malloc(sizeof(struct node));
    struct node *fourth = (struct node*)malloc(sizeof(struct node));

    head -> data =500;
    second -> data = 600;
    third -> data = 700;
    fourth -> data = 800;

    head ->next = second;
    second-> next= third;
    third-> next = fourth;
    fourth->next = NULL;

    //displaying the linked list before insertion deletion operaton
    printf("The linked list before insertion and deletion operations\n");
    print(head);
    //applying insertion and deletion operations
       insert_beg(100, &head);
       insert_mid(250, second );
       insert_last(400,&head);
       delete_node(&head,700);
    //displaying the linked list after insertion deletion operaton
    printf("\n The linked list after insertion and deletion operations\n");
    print(head);

}