
#include<stdio.h>
void main()
{
    int a[10][10];
    int m,n,i,j;
    int b[10][10];
    printf("enter the number of rows of matrix 1");
    scanf("%d",&m);
    printf("enter the number of columns of matrix 1");
    scanf("%d",&n);
    if(m==n)
    {
    printf("enter the elements of matrix 1");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
           b[i][j]=a[j][i];
              printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    }
    else
    printf("transpose is not possible");
}