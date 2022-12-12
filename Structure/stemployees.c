#include<stdio.h>
#include<conio.h>
void main()
{
struct employees
{
int sal;
char name[20];
int hrs;
}e[10];
int i;
for(i=0;i<2;i++)
{
printf("\n\n enter the salary,name,hours\n\n");
printf("\nenter the salary\n");
scanf("%d",&e[i].sal);
printf("\n enter the name\n");
scanf("%s",e[i].name);
printf("\n enter the hours\n");
scanf("%d",&e[i].hrs);
}
if(e[i].hrs==3)
{
    printf("\n\n The salary and name of employees working for 3 hours\n\n");
    printf("\n the name:-%s\n",e[i].name);
    printf("\n the salary:-%d\n",e[i].sal+50);
}
else if(e[i].hrs==6)
{
    printf("\n\n The salary and name of employees working for 6 hours\n\n");
    printf("\n the name:-%s\n",e[i].name);
    printf("\n the salary:-%d\n",e[i].sal+100);
}
}