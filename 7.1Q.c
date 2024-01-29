#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();
	printf("Enter Any Number:  ");
	scanf("%d",&a);
	printf("Enter Any another Number:  ");
	scanf("%d",&b);
	if(a<b)
{
	printf("%d is Mini Number",a);
}
	else
{
	printf("%d is Mini",b);
}
	getch();
}