#include<stdio.h>
int fib(int n)
{
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else
    return fib(n-1)+fib(n-2);
}
void main()
{
    int n,a,i;
    printf("enter the value of a");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    printf("%d\t",fib(i));
}