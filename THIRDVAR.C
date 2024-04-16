#include<stdio.h>
#include<conio.h>
main()
{
int a=10;
int b=20;
int c;
clrscr();
printf("Enter two number: ");
scanf("%d%d",&a,&b);

c=a;
a=b;
b=c;
printf("%d %d ",a,b);
getch();
}
