#include<stdio.h>
#include<stdlib.h>
typedef struct list{    
    int data;    
    struct list *next;  
}node;
node *front, *rear, *new, *temp;
void insert(){
    new = (node*)malloc(sizeof(node));
    printf("Enter  any item to be inserted on the Queue : ");
    scanf("%d",&new->data);
    if(front==NULL)
        front = new;
    else
        rear->next=new;
    rear = new;
    rear->next=NULL; 
} 
void delete(){
    if(front == NULL)        
        printf("Queue is Empty\n");    
    else    {        
        printf("Deleted element = %d\n", front->data);     
        temp = front;       
        front = front->next;
        free(temp);     
    }
}
void dispfrontrear(){
    printf("Front Element is %d", front->data); 
    printf("\nRear Element is %d\n", rear->data); 
}
void display(){
    for(temp=front;temp;temp=temp->next)     
        printf("%d->", temp->data);  
    printf("NULL\n");
}
void main(){
    int ch;
    do{
        printf("\nPresh 1 for insert\nPresh 2 for delete\nPresh 3 for Display\nPresh 4 for Display Q Front and Rear\nPresh 0 for exit!");
        printf("\n===========================\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch (ch){
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            dispfrontrear();
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