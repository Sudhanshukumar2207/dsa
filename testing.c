#include<stdio.h>
void main(){
    int a[50],n,i,b;
    printf("Enter length of array : ");
    scanf("%d",&n);
    printf("Enter %d no : ",n);
    for(i=0;i<n;scanf("%d",&a[i++]));
    printf("Enter index from what you want to delete : ");
    scanf("%d",&b);
    printf("------Displaying-----------\nValues of Array before del ara : ");
    for(i=0;i<n;printf("%d ",a[i++]));
    for(i=b;i<n;a[i]=a[i+1],i++);
    printf("\nValues of Array after del ara : ");
    for(i=0;i<n-1;printf("%d ",a[i++]));
}