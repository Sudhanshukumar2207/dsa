#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
    int data;
    struct list *next;
}node;
node *start,*end,*temp,*fresh;
void main(){
    printf("Enter 5 no : ");
    for (int i = 0; i < 5; i++)
    {
        fresh=(node*)malloc(sizeof(node));
        scanf("%d",&fresh->data);
        if (start==NULL)
            start=fresh;
        else
            end->next=fresh;
        end=fresh;
        end->next=NULL;
    }
    for (temp=start;temp;temp=temp->next)
        printf("%d",temp->data);
}
