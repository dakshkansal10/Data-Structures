#include<stdio.h>
struct student
{
    int r;
    char name[20];
    int m;
}s,*s1;
void main()
{
    s1=&s;
    printf("enter the roll number");
    scanf("%d",&s1->r);
    printf("enter the name");
    scanf("%s",&s1->name);
    printf("enter the marks");
    scanf("%d",&s1->m);
    printf("%d %s %d",s1->r,s1->name,s1->m);
}