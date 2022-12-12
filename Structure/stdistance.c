#include<stdio.h>
struct student
{
    int x;
    int y;
}s[10];
int main()
{
    int i;
    for(i=0;i<2;i++)
    {
    s[i].r = i+1;
    printf("enter the 1st distance");
    scanf("%d",&s[i].x);
    printf("enter the 2nd distance");
    scanf("%s",&s[i].y);
    }
    for(i=0;i<2;i++)
    {
        printf("%d %s %d\n",s[i].r,s[i].name,s[i].m);
    }
    return 0;
}
