#include<stdio.h>
void main(){
    int m,n,p;
    printf("Enter the row and column of first matric : ");
    scanf("%d%d",&m,&n);
    printf("Enter the column of second matric : ");
    scanf("%d",&p);
    int a[m][n],b[n][p],i,j,k;
    printf("Enter %d no for first matric : ",m*n);
    for (i = 0; i < m; i++)
        for ( j = 0; j < n; j++)
            scanf("%d",&a[i][j]);
    printf("Enter %d no for second matric : ",n*p);
    for (i = 0; i < n; i++)
        for ( j = 0; j < p; j++)
            scanf("%d",&b[i][j]);
    printf("Multiplication of two Martices is : \n");
    for (i = 0; i < m; i++,printf("\n"))
        for ( j = 0; j < p; j++){
            int sum=0;
            for ( k = 0; k < n; k++)
                sum=sum+a[i][k]*b[k][j];
            printf("%d ",sum);
        }   
}