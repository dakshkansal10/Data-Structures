#include<stdio.h>
struct time
{
    int hr;
    int min;
    int sec;
}t[5];
int main()
{
    int i,n,a,b;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("enter the time in hour");
      scanf("%d",&t[i].hr);
      printf("enter the time in minutes");
      scanf("%d",&t[i].min);
      printf("enter the time in seconds");
      scanf("%d",&t[i].sec);
    }
    for(i=1;i<n;i++)
    {
      a=t[i].sec+t[i-1].sec;
      b=t[i].min+t[i-1].min+(a/60);
      t[i].hr=t[i].hr+t[i-1].hr+(b/60);
      t[i].min=(b%60);
      t[i].sec=(a%60);
    }
    printf("the total time is: \n");
    printf("%d %d %d",t[n-1].hr ,t[n-1].min ,t[n-1].sec);
}

