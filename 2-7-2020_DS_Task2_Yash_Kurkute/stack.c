#include <stdio.h>
#include<stdlib.h>

int top= -1;
char n[100];

int push(char a)
{
    n[++top] = a;
    return top;
}

int pop()
{
    if(top==-1)
    {
        printf("Brackets Not Balanced");
        exit(0);
    }
    else
       return --top;
    
}

void check_top()
{
    if (top==-1)
        printf("Brackets Balanced");
       
    else
        printf("Brackets Not Balanced");
}

int main()
{
    char s[100];

    printf("Enter the figure\n");
    scanf("%s",&s);

    for (int i=0; s[i]!=0; i++)
    {
            if ( s[i]=='(')
            {
               top = push(s[i]);
            }
            else 
            {
                if( s[i]== ')')
            {
                    top = pop();
            }
                else
                {
                    printf("Enter the correct brackets");
                    exit(0);
                }

            }
    }
 check_top();
}
