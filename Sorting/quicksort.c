#include<stdio.h>
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i=(low-1); 
  
    for(int j=low;j<=high-1;j++)
     {
        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quicksort(int arr[],int low,int high)
{
   int pi;
   if(low<high)
   {
    int pi=partition(arr,low,high); 
   }
   quicksort(arr,pi,low-1);
   quicksort(arr,pi+1,high);
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("the sorted array is:");
        printf("%d",arr[i]);
}
void main()
{
    int arr[10],n,i;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   quicksort(arr,0,n-1);
   printf("the sorted array is:\n");
   printarray(arr,n);
}