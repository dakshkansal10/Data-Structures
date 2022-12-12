#include<stdio.h>
int fact(int n)
{
    if(n==0)
    return 1;
    else
    return(n*fact(n-1));
}
void main()
{
    int i,n,f;
    printf("enter the value of n");
    scanf("%d",&n);
    f=fact(n);
    printf("the factorial of given number is:");
    printf("%d",f);
}
