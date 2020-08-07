#include<stdio.h>
#include<stdlib.h>

#define No 5
#define max 100

struct node
{
    int data;
    struct node *left,*right;
};

struct node* new(int data)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
}

void postorder(struct node* node)
{
    if (node == NULL)
    return;

    postorder(node->left);

    postorder(node->right);

    printf("%d ", node->data);
}

struct node* insert(struct node* node, int key)
{
    if (node == NULL) return new(key);

    if (key < node->data)
        node->left  = insert(node->left, key);
    else if (key > node->data)
        node->right = insert(node->right, key);

    return node;
}

struct node* search(struct node* node, int key)
{
    if (node == NULL || node->data == key) return node;

    if (node->data < key) return search(node->right, key);

    return search(node->left, key);
}

int main()
{
    struct node *node;
    int arr[max], i, j, k;
    char check;

    printf(">> Enter elements\n");
    for(i=0;i<No;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(j=0;j<No;j++)
    {
        if(j==0)
        {
            node = new(arr[j]);
        }
        else
        {
            insert(node, arr[j]);
        }
    }

    printf(">> Check Postorder Traversals  [y/n] : ");
    fflush(stdin);
    scanf("%c", &check);

    if(check == 'y')
    {
        printf("The postorder is: ");
        postorder(node);
    }

    printf("\n>> Check if the node is present [y/n] : ");
    fflush(stdin);
    scanf("%c", &check);

    if(check == 'y')
    {
        printf(">> Enter value to search \n");
        scanf("%d", &k);

        if (search(node, k)==0)
        {
            printf("Nope he valu '%d' is NOT present ", k);
        }
        else
        {
            printf("Yes the node  '%d' is present", k);
        }
    }

    return 0;
}
