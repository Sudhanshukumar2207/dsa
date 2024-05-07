#include<stdio.h>
void main(){
    int a[5]={1,3,5,7,9},n,i;
    printf("Enter a no what you find : ");
    scanf("%d",&n);
    for(i=0;i<5;i++){
        if(n==a[i]){
            printf("Found!");
            break;
        }
    }
    if(i==5)
        printf("Not found!");
}