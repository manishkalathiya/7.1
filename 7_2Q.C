#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	int b;
	clrscr();
	printf("Enter any Number:  ");
	scanf("%d",&a);
	printf("Enter any another Number:  ");
	scanf("%d",&b);
	if(a>b)
{
	printf("%d is Mini",a);
}
	else if(a<b)
{
	printf("%d is Mini",a);
}
	else
{
	printf("You have Wrote Wrong Number Go Ahed");
}
	getch();
}
