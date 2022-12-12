#include<stdio.h>
void TOH(int n,char A,char B,char C)
{
    if(n==1){
    printf("Move disc:%dfrom%cto%c \n5",1,A,C);
    return;}
    else
    {
    TOH(n-1,A,C,B);
    printf("Move disc:%dfrom%cto%c \n",n,A,B);
    TOH(n-1,B,A,C);
    }
}
  void main()
  {
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
        TOH(n,'A','B','C');

  }
