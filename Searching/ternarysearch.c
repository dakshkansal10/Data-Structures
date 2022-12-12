#include <iostream>
using namespace std;
int ts(int array[],int key,int l,int h)
{
    if(l<=h)
    {
    int mid1=l+(h-l)/3;
    int mid2=h-(h-l)/3;
    if(key==array[mid1])
    return mid1;
    else if(key==array[mid2])
    return mid2;
    else if(key<array[mid1])
    ts(array,key,l,mid1-1);
    else if(key>array[mid2])
    ts(array,key,mid2+1,h);
    else
        ts(array,key,mid1+1,mid2-1);
    }
}
int main()
{
    int key,size;
    cout<<"enter key and size";
    cin>>key>>size;
    int array[size];
    cout<<"enter elements";
    for(int a=0;a<size;a++)
        cin>>array[a];
    int h=size-1;
    int x=ts(array,key,0,h);
    cout<<"element found at"<<x;
    return 0;
    
}