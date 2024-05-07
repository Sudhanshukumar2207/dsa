#include<stdio.h>
#define size 5
int queue[size],front=-1,rear=-1;
void insert(){
    if(rear==size-1)
        printf("Overflow!");
    else{
        printf("Enter the element : ");
        scanf("%d",&queue[++rear]);
        if(front==-1)
            front++;
    }
}
void delet(){
    if(front==-1||front>rear)
        printf("Underflow!");
    else
        queue[front++]=0;
}
void display(){
    if(rear==-1)
        printf("Underflow!");
    else
        for (int i=front;i<=rear;i++)
            printf("%d ",queue[i]);  
}
void main(){
    int ch;
    do{
        printf("\nPresh 1 for insertion\nPresh 2 for deletion\nPresh 3 for Display\nPresh 0 for exit!");
        printf("\n===========================\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch (ch){
        case 1:
            insert();
            break;
        case 2:
            delet();
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