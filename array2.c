#include<stdio.h>
void main(){
    int a[50],n,i,b,c;
    printf("Enter length of array : ");
    scanf("%d",&n);
    printf("Enter %d no : ",n);
    for(i=0;i<n;scanf("%d",&a[i++]));
    printf("Enter a no what you want to add : ");
    scanf("%d",&b);
    printf("Enter index : ");
    scanf("%d",&c);
    printf("------Displaying-----------\nValues of Array before add ara : ");
    for(i=0;i<n;printf("%d ",a[i++]));
    for(i=n;i>c;a[i]=a[i-1],i--);
    a[c]=b;
    printf("\nValues of Array after add ara : ");
    for(i=0;i<=n;printf("%d ",a[i++]));
}