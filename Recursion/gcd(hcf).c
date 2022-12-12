#include<stdio.h>
int hcf(int a,int b)
{
    if(a%b==0)
    return b;
return(hcf(b,a%b));
}
void main()
{
    int a,b;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("%d",hcf(a,b));
}