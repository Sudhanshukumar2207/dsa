#include<stdio.h>
#define size 5
int stack[size],top=-1;
void push(){
    if (top==size-1)
        printf("Overflow!\n");
    else{
        printf("Enter the element : ");
        scanf("%d",&stack[++top]);
    }
}
void pop(){
    if(top==-1)
        printf("Underflow!\n");
    else
        stack[top--]=0;
}
void display(){
    if(top==-1)
        printf("Underflow!\n");
    else
        for (int i = top; i >=0; i--)
            printf("%d\n",stack[i]);
}
void main(){
    int ch;
    do{
        printf("Presh 1 for Push operation\nPresh 2 for Pop operation\nPresh 3 for Display\nPresh 0 for exit!");
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