#include<stdio.h>
void main()
{
    int arr[100],x,pos,size=5,i;
    printf("enter the elements of the array");
    for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
    }
    printf("enter the position");
    scanf("%d",&pos);
    printf("enter the element");
    scanf("%d",&x);
    for(i=size-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=x;
    for(i=0;i<size+1;i++)
    printf("%d",arr[i]);
    
    
}