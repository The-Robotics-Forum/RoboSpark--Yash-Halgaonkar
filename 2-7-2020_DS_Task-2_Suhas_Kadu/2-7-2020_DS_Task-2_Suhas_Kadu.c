#include<stdio.h>
#include<stdlib.h>

int push(char element,char *arr,int top)
{
    arr[++top]=element;
    return top;
}

int pop(int top)
{
    if(top==-1)
    {
        printf("\n");
        
    }
    else
    {
    return --top;
    }
}

int isEmpty(int top)
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    char arr[8];
    int top=-1,i=0;
    
    printf("enter the brackets");
    scanf("%s",arr);
    
    while(arr[i]!='\0')
    {
        if(arr[i]=='(')
        {
            top=push(arr[i],arr,top);
        }
        else if(arr[i]==')')
        {
            if(arr[i]==')')
            {
            if(arr[i]==')')
            {
            top=pop(top);
            }
            else
            {
            printf("\nNot Balanced");
             break;
            }
            }
            
        }
        i++;
    }
        
    if(isEmpty(top))
    {
        printf("Balanced");
    }
    else
    {
        printf("Not Balanced");
    }
    
    
}
