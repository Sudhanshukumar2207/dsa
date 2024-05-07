#include<stdio.h>
void main(){
    int a[50],n,i;
    printf("Enter length of array : ");
    scanf("%d",&n);
    printf("Enter %d no : ",n);
    for(i=0;i<n;scanf("%d",&a[i++]));
    printf("------Displaying-----------\nValues of Array ara : ");
    for(i=0;i<n;printf("%d ",a[i++]));
    for(i=0;i<n;printf("%d ",&a[i++]));
}