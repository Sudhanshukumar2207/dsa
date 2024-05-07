#include<stdio.h>
void main(){
    int m,n;
    printf("Enter the row and column of matric : ");
    scanf("%d%d",&m,&n);
    int a[m][n],i,j;
    printf("Enter %d no : ",m*n);
    for (i = 0; i < m; i++)
        for ( j = 0; j < n; j++)
            scanf("%d",&a[i][j]);
    printf("Martic is : \n");
    for (i = 0; i < m; i++,printf("\n"))
        for ( j = 0; j < n; j++)
            printf("%d  ",a[i][j]);
}