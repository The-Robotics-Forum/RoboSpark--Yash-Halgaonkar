
#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
    
};

struct node *newNode(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
}



struct node *deleteNode(struct node *head,int value)
{
    struct node *temp2 = head,*prev;
    
    if(temp2->next!=NULL && temp2->data==value)
    {
        head=temp2->next;
        free(temp2);
        exit(0);
    }
    
    while(temp2->next!=NULL && temp2->data!=value)
    {
        prev = temp2;
        temp2= temp2->next;
    }
    
    //unlinking the node 
    prev->next = temp2->next;
    free(temp2);
    
}


struct node *insertNode(struct node *prev,int data)
{
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    
    new_node->next = prev->next;
    prev->next = new_node;
    
    
}

int main()
{
    
    
    struct node *head = newNode(12);
    struct node *n2 = newNode(2);
    struct node *n3 = newNode(3);
    struct node *n4 = newNode(7);
    
    
    head->next=n2;
    n2->next=n3;
    n3->next=n4;
    
    
   
    struct node *temp = head;
    printf("Linked List:\n");
    
    while(temp->next!=NULL)
    {
        printf("%d-->",temp->data);
        temp=temp->next;
    }
    printf("%d-->NULL",temp->data);
    
    
    
    
   //inserting a node 
    insertNode(n3,18);
    
    temp = head;
    printf("\n\nLinked List after inserting a node:\n");
    
    while(temp->next!=NULL)
    {
        printf("%d-->",temp->data);
        temp=temp->next;
    }
    printf("%d-->NULL",temp->data);
    
    
    //deleting node
    
    deleteNode(head,3);
    printf("\n\nLinked List after deletion of node:\n");
    
    temp=head;
    while(temp->next!=NULL)
    {
        printf("%d-->",temp->data);
        temp=temp->next;
    }
    printf("%d-->NULL",temp->data);
    
    
    
    //Inserting a node
    
    
    
    return 0;
}
