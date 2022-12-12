
#include<stdio.h>
void main()
{
    int a[10][10];
    int m,n,i,j,p,q;
    int det[10][10];
    int multi1[10][10];
    int multi2[10][10];
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
    multi1[i][j]=0;
    multi2[i][j]=0;
    det[i][j]=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            while(i==j)
            {
                a[p][q]=0;
                p=i+1;
                q=j+1;
                multi1[i][j]=a[i][j]*a[p][q];
            }
            while(i!=j){
            multi2[i][j]=a[i][j]*a[j][i];
            det[i][j]=multi1[i][j]-multi2[i][j];
        }
    }

    printf("determinant of matrix is:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",det[i][j]);
        }
        printf("\n");
    }
    }
}



    