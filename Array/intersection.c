#include<stdio.h>
void main()
{
    int A[10],B[10],C[10];
    int i,j,k;
    int m,n;
    printf("DAKSH KANSAL\n");
    printf("2100320100056\n");
    printf("enter the size of A\n");
    scanf("%d",&m);
    printf("enter the elements of array A\n");
    for (i=0;i<m;i++){
    scanf("%d",&A[i]);}
    printf("enter  the size of B\n");
    scanf("%d",&n);
    printf("enter the elements of array B\n");
    for (j=0;j<n;j++){
    scanf("%d",&B[j]);}
    i=0,j=0,k=0;
    while (i<m && j<n){
        if (A[i]<B[j]){
        C[k]=A[i];
        i=i+1;
        }
        else if (A[i]>B[j]){
        C[k]=B[j];
        j=j+1;}
        else if(A[i]=B[j]){
            C[k]=A[i];
            i=i+1;
            k=k+1;
            j=j+1;
        }
    }
    printf("the array of C is");
    for (i=0;i<k;i++){
    printf("\t%d",C[i]);
}
}





