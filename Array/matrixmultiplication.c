
#include<stdio.h>
void main()
{
    int a[10][10];
    int m,n,i,j,p,q,k;
    int multi[10][10];
    printf("enter the number of rows of matrix 1");
    scanf("%d",&m);
    printf("enter the number of columns of matrix 1");
    scanf("%d",&n);
    printf("enter the elements of matrix 1");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int b[10][10];
    printf("enter the number of rows of matrix 2");
    scanf("%d",&p);
    printf("enter the number of columns of matrix 2");
    scanf("%d",&q);
    if(n==p)
    {
    printf("enter the elements of matrix 2");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
             multi[i][j]=0;
            for(k=0;k<n;k++)
            {
            multi[i][j]+=a[i][k]*b[k][j];
            }
    }
    }
    printf("\nmultiplication of two matrices:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++){
        printf("%d\t",multi[i][j]);
    }
    printf("\n");
    }
}
else
{
    printf("multiplication is not possible");
}
}