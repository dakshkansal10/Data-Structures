#include<stdio.h>
struct student
{
    int r;
    char name[20];
    int m;
}s[2],*s1;
void main()
{
    s1=&s;
    int i;
    for(i=0;i<2;i++)
    {
    printf("enter the roll number ");
    scanf("%d",&(s1+i)->r);
    printf("enter the name ");
    scanf("%s",&(s1+i)->name);
    printf("enter the marks ");
    scanf("%d",&(s1+i)->m);
    }
    for(i=0;i<2;i++)
    {
    printf("%d %s %d",(s1+i)->r,(s1+i)->name,(s1+i)->m);
    }
}