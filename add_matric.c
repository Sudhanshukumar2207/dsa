#include<stdio.h>
void main(){
    int m,n;
    printf("Enter the row and column of matric : ");
    scanf("%d%d",&m,&n);
    int a[m][n],b[m][n],i,j;
    printf("Enter %d no for first matric : ",m*n);
    for (i = 0; i < m; i++)
        for ( j = 0; j < n; j++)
            scanf("%d",&a[i][j]);
    printf("Enter %d no for second matric : ",m*n);
    for (i = 0; i < m; i++)
        for ( j = 0; j < n; j++)
            scanf("%d",&b[i][j]);
    printf("Sum of two Martices is : \n");
    for (i = 0; i < m; i++,printf("\n"))
        for ( j = 0; j < n; j++)
            printf("%d  ",a[i][j]+b[i][j]);
}