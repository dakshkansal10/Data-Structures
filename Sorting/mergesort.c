#include<iostream>
using namespace std;
void merge(int array[],int lb,int mid,int ub)
{
    int array1[ub-lb+1];
    int i=lb;
    int j=mid+1;
    int k=lb;
    while(i<=mid&&j<=ub)
    {
        if(array[i]<array[j])
        {
            array1[k]=array[i];
            i++;k++;
        }
        else
        {
            array1[k]=array[j];
            j++;k++;
        }
    }
    while(i<=mid)
    {
        array1[k]=array[i];
        i++;k++;
    }
    while(j<=ub)
    {
        array1[k]=array[j];
        j++;k++;
    }
    for(int x=lb;x<=ub;x++)
    array[x]=array1[x];
}
void mergesort(int array[],int lb,int ub)
{
    if(lb<ub)
    {
        int mid=(lb+ub)/2;
        mergesort(array,lb,mid);
        mergesort(array,mid+1,ub);
        merge(array,lb,mid,ub);
    }

}

int main()
{
    int n;
    cout<<"enter size";
    cin>>n;
    int array[n];
    for(int q=0;q<n;q++)
    cin>>array[q];
    mergesort(array,0,n-1);
    for(int k=0;k<=n-1;k++)
    cout<<array[k];
    return 0;
}