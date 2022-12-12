#include<stdio.h>
int linearsearch();
int binarysearch();
int main()
{
    int i,x,l,h,size;
    int a[10];
    int flag=0;
    printf("enter the size of array");
    scanf("%d",&size);
    printf("enter the elements of array");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    printf("enter the element to be searched");
    scanf("%d",&x);
   // linearsearch(size,a,x);
    binarysearch(size,a,x);

}
int linearsearch(int size,int a[],int x)
{
    int i,flag;
     for(i=0;i<size;i++)
    {
    if(x==a[i])
    {
        flag=1;
        break;
    }
    }
if(flag==1){
    printf("the element is found");
}
else{
printf("the element is not found");
}
}
int binarysearch(int size,int a[],int x)
{
    int i,l,h,mid;
    int flag=0;
    l=0;
    h=size-1;    
    while(l<=h)
    {
    mid=(l+h)/2;
    if(x<a[mid]){
    h=mid-1;}
    else if(x>a[mid]){
    l=mid+1;}
    else if(x==a[mid])
    {
        flag=1;
        break;
    }
    }
    if(flag==1)
    {
        printf("the element is discovered");
    }
    else
    printf("the element is not found");
}
