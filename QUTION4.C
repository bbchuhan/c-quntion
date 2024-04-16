#include<stdio.h>
#include<conio.h>
main()
{
int a;
int b;
int sum;
clrscr();
printf("enter the value of x");
scanf("%d",&a);
printf("enter the value of y");
scanf("%d",&b);
sum=(a*a)+(b*b)-(2*a*b);
printf("%d",sum);
getch();
}