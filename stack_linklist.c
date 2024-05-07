#include<stdio.h>
#include<stdlib.h>
typedef struct list{    
    int data;
    struct list *next;
}node; 
node *top,*new,*temp;
void push(){  
    new = malloc(sizeof(node));  
    printf("Enter any item to be pushed on the stack : ");
    scanf("%d",&new->data);
    new->next=top;
    top=new;
}
void pop(){  
    if(top == NULL)        
        printf("Stack is Empty\n");    
    else    {        
        printf("Poped element = %d\n", top->data);     
        temp = top;       
        top = top->next;     
        free(temp);    
    }
}
void display(){   
    for(temp=top;temp;temp=temp->next)   
        printf("%d->", temp->data);      
    printf("NULL\n");
}
void main(){
    int ch;
    do{
        printf("Presh 1 for Push\nPresh 2 for Pop\nPresh 3 for Display\nPresh 0 for exit!");
        printf("\n===========================\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch (ch){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 0:
            printf("Thanks for visit!");
            break;
        default:
            printf("Plese enter valid input!\n");
            break;
        }
    }while (ch);
}