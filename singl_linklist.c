#include <stdio.h>
#include<stdlib.h>
typedef struct list
{
    int data;
    struct list *next;
} node;
node *new, *temp, *start, *end;

void create(){
    while(1){
        char ch='\0';
        new=(node*)malloc(sizeof(node));
        printf("Enter a no : ");
        scanf("%d",&new->data);
        if(start==NULL)
            start=new;
        else
            end->next=new;
        end=new;
        end->next=NULL;
        printf("Doy  you want to continue y/n : ");
        while (ch != 'n' && ch != 'N' && ch != 'y' && ch != 'Y')
            scanf("%c", &ch);
        if (ch == 'n' || ch == 'N')
            break;
    }
}

void display(){
    if(start==NULL)
        printf("List is Empty!\n");
    else
        for(temp=start;temp;temp=temp->next)
            printf("%d ",temp->data);
}

void fadd(){
    if(start==NULL)
        printf("List is not Available!");
    else{
        new=(node*)malloc(sizeof(node));
        printf("Enter a no : ");
        scanf("%d",&new->data);
        new->next=start;
        start=new;
    }
}

void eadd(){
    if(start==NULL)
        printf("List is not Available!");
    else{
        new=(node*)malloc(sizeof(node));
        printf("Enter a no : ");
        scanf("%d",&new->data);
        end->next=new;
        end=new;
        end->next=NULL;
    }
}

void fdell(){
    if(start==NULL)
        printf("List is Empty!");
    else if (start==end){
        free(start);
        start=end=NULL;
    }
    else{
        temp=start;
        start=start->next;
        free(temp);
    }
}

void edell(){
    if(start==NULL)
        printf("List is Empty!");
    else if (start==end){
        free(start);
        start=end=NULL;
    }
    else{
        for (temp = start;temp->next!=end; temp=temp->next);
        free(end);
        end=temp;
        end->next=NULL;
    }    
}

void preadd(){
    if(start==NULL)
        printf("List is empty!");
    else{
        int ct=0,pos;
        node *x;
        printf("Enter Position : ");
        scanf("%d",&pos);
        for (temp=start;temp;temp=temp->next){
            ct++;
            if(ct==pos-1)
                x=temp;
        }
        if(pos==1)
            fadd();
        else if(pos>ct)
            printf("Invalid Position!");
        else{
            new=(node*)malloc(sizeof(node));
            printf("Enter a no : ");
            scanf("%d",&new->data);
            new->next=x->next;
            x->next=new;
        } 
    }
}

void postadd(){
    if(start==NULL)
        printf("List is Empty!");
    else{
        int ct=0,pos;
        node *x;
        printf("Enter Position : ");
        scanf("%d",&pos);
        for (temp=start;temp;temp=temp->next){
            ct++;
            if(ct==pos)
                x=temp;
        }
        if(ct==pos)
            eadd();
        else if (pos>ct)
            printf("Invalid Position!");
        else{
            new=(node*)malloc(sizeof(node));
            printf("Enter a no : ");
            scanf("%d",&new->data);
            new->next=x->next;
            x->next=new;
        }
    }
}

void btdell(){
    if(start==NULL)
        printf("List is Empty!");
    else{
        int ct=0,pos;
        node *x;
        printf("Enter Position : ");
        scanf("%d",&pos);
        for (temp=start;temp;temp=temp->next){
            ct++;
            if(ct==pos-1)
                x=temp;
        }
        if(pos>ct)
            printf("Invalid Position!");
        else if(pos==1)
            fdell();
        else if(pos==ct)
            edell();
        else{
            temp=x->next;
            x->next=temp->next;
            free(temp);
        }
    }
}

void main(){
    int ch;
    do{
        printf("\nPresh 1 for Create\nPresh 2 for Display\nPresh 3 for insertion at first\nPresh 4 for insertion at end\n");
        printf("press 5 for add node before specific position\npress 6 for add node after specific position\n");
        printf("Press 7 for deletion from first\nPress 8 for deletion from end\npress 9 for specific position deletion\nPresh 0 for exit!");
        printf("\n===========================\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            fadd();
            break;
        case 4:
            eadd();
            break;
        case 5:
            preadd();
            break;
        case 6:
            postadd();
            break;
        case 7:
            fdell();
            break;
        case 8:
            edell();
            break;
        case 9:
            btdell();
            break;
        case 0:
            printf("Thanks for visit!");
            break;
        default:
            printf("Plese enter valid input!\n");
            break;
        }
    }while(ch);
}