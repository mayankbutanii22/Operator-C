#include<stdio.h>
#include<conio.h>
main()
{
int a,b;
int square;
clrscr();
printf("Enter a Value: ");
scanf("%d%d",&a,&b);
square=(a+b)*(a+b);
printf("is the value square %d: ",square);
getch();
}