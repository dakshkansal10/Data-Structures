#include<stdio.h>
struct student
{
    int r;
    char name[10];
    int m1,m2,m3,m4,m5,m6;
}s[10];
int main()
{
    int i,sum=0,m1,m2,m3,m4,m5,m6;
    for(i=0;i<1;i++)
    {
    s[i].r = i+1;
    printf("enter the roll no. of student");
    scanf("%d",&s[i].r);
    printf("enter the name of student");
    scanf("%s",s[i].name);
    printf("enter the marks of student");
    scanf("%d",&s[i].m1);
    scanf("%d",&s[i].m2);
    scanf("%d",&s[i].m3);
    scanf("%d",&s[i].m4);
    scanf("%d",&s[i].m5);
    scanf("%d",&s[i].m6);
    }
    for(i=0;i<1;i++)
    {
      printf("%d %s %d %d %d %d %d %d \n",s[i].r,s[i].name,s[i].m1,s[i].m2,s[i].m3,s[i].m4,s[i].m5,s[i].m6);
      sum=(m1+m2+m3+m4+m5+m6);
      if(sum>=500)
      printf("the student is eligible");
      else
      printf("the student is not eligible");
    }
    return 0;
}
