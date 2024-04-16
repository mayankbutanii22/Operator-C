#include<stdio.h>
#include<conio.h>
main()
{
int x,y;
int square;
clrscr();
printf("Enter a value: ");
scanf("%d%d",&x,&y);
square=(x-y)*(x-y);
printf("is the square value %d:",square);
getch();
}