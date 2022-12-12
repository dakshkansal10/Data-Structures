#include<stdio.h>
struct height
{
    int ft;
    int inch;
}h[5];
  void display(struct height h[])
  {
    for(i=1;i<n;i++)
    {
      a=h[i].inch+h[i-1].inch;
      h[i].ft=h[i].ft+h[i-1].ft+(a/12);
      h[i].inch=(a%12);
    }
    printf("the total height is:");
    printf("%d %d",h[n-1].ft ,h[n-1].inch);
}
int main()
{
    int i,n,a;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("enter the height in feet");
      scanf("%d",&h[i].ft);
      printf("enter the height in inch");
      scanf("%d",&h[i].inch);
    }
}
    display();
