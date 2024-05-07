#include<stdio.h>
#define n 5
int queue[n],front=-1,rear=-1;

void insert(){
    if((rear==n-1 && front==0) || front==rear+1)
        printf("Overflow!");
    else{
        if(rear==n-1)
            rear=-1;
        printf("Enter the element : ");
        scanf("%d",&queue[++rear]);
        if(front==-1)
            front++;
    }
}

void delet(){
    if(front==-1)
        printf("Underflow!");
    else if(front==rear){
        queue[front]=0;
        front=-1;
        rear=-1;
    }
    else{
        queue[front]=0;
        front=(front+1)%n;
    }
}

void display(){
    if(rear==-1)
        printf("Underflow!");
    else
        for (int i=front;;i++){
            printf("%d ",queue[i]);
            if(i==rear)
                break;
            if(i==4 && rear!=4)
                i=-1;
        }
}

void main(){
    int ch;
    do{
        printf("\nPresh 1 for insertion\nPresh 2 for deletion\nPresh 3 for Display\nPresh 0 for exit!");
        printf("\n===========================\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
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