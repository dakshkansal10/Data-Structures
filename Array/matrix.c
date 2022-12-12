#include<stdio.h>
void main()
{
    int a[10][10];
    int m,n,i,j;
    printf("enter the number of rows of matrix");
    scanf("%d",&m);
    printf("enter the number of columns of matrix");
    scanf("%d",&n);
    printf("enter the elements of rows and columns");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        printf("\t%d",a[i][j]);
    
    printf("\n");
    }
}