#include<stdio.h>
struct student
{
    int r;
    char name[10];
    int m;
}s[2];
    void display(struct student s[])
    {
    int i;
    for(i=0;i<2;i++)
    {
        printf("%d %s %d\n",s[i].r,s[i].name,s[i].m);
    }
    }
void main()
{
    int i;
    for(i=0;i<2;i++)
    {
    s[i].r = i+1;
    printf("enter the roll no. of student");
    scanf("%d",&s[i].r);
    printf("enter the name of student");
    scanf("%s",s[i].name);
    printf("enter the marks of student");
    scanf("%d",&s[i].m);
    }
        display(s);

}