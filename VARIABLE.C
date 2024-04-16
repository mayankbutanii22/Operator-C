#include<stdio.h>
#include<conio.h>
main()
{
int a=10;
int b=20;
clrscr();
printf("Enter two number: ");
scanf("%d%d",&a,&b);
a=a+b;
printf("%d %d",a,b);

getch();
}