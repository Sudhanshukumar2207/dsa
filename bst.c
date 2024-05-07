#include<stdio.h>
#include<stdlib.h>
typedef struct bst{
    int data;
    struct bst *left;
    struct bst *right; 
}node;
node *root, *new, *temp;
void insert(){
    new=malloc(sizeof(node));
    printf("Enter value what you want to insert : ");
    scanf("%d",&new->data);
    if(root==NULL)
        root=new;
    else{
        temp=root;
        while (temp){
            if(new->data < temp->data){
                if(temp->left==NULL){
                    temp->left=new;
                    break;
                }
                else
                    temp=temp->left;
            }
            else{
                if(temp->right==NULL){
                    temp->right=new;
                    break;
                }
                else
                    temp=temp->right;
            }
        }
    }
    new->left=NULL;
    new->right=NULL;
}
void preorder(node *temp){
    if(temp){
        printf("%d,",temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
}
void inorder(node *temp){
    if(temp){
        inorder(temp->left);
        printf("%d,",temp->data);
        inorder(temp->right);
    }
}
void postorder(node *temp){
    if(temp){
        postorder(temp->left);
        postorder(temp->right);
        printf("%d,",temp->data);
    }
}
void main(){
    int ch;
    do{
        printf("\nPresh 1 for insert\nPresh 2 for Display Preorder\nPresh 3 for Display Inorder\nPresh 4 for Display Postorder\nPresh 0 for exit!");
        printf("\n===========================\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch (ch){
        case 1:
            insert();
            break;
        case 2:
            preorder(root);
            break;
        case 3:
            inorder(root);
            break;
        case 4:
            postorder(root);
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