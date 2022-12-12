#include<stdio.h>
#include<math.h>
void main()
{
    int a[10],n,key,i,j,m,start,end,c=0;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the element to be searched");
    scanf("%d",&key);
    i=0;
    m=sqrt(n);
    while(i<n && key>a[i]){
    i=i+m;}
    if(i<n)
    {
      if(a[i]==key){
      printf("the element is found");
      }
      else
      {
        start=i-1;
        end=i-m;
        for(j=start;j>=end;j--)
        {
            if(key==a[j])
            {
            c++;
            break;
            }
        }   
if(c==1)
  printf("the element is found");
else
  printf("the element is not found");
}
    }
}

