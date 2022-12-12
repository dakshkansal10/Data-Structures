#include<stdio.h>
int DAT[101];
int fib(int n)
{
    if(n==1 || n==2)
    return DAT[n]=n-1;
    else 
    {
        if(DAT[n]==0)
        DAT[n]=(fib(n-1)+fib(n-2));
    }
    return DAT[n];
}
void main()
{
    int n,a,i;
    printf("enter the value of a");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    printf("%d %d\t",i,fib(i));
}