#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,f,bv,hrd,da,gs,ta;

	clrscr();
	printf("\n\n Pls enter value of a=");
	scanf("%d",&a);
	printf(" Pls enter your value of b=");
	scanf("%d",&b);


	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nValue of a after swaping is=%d",a);
	printf("\nValue of b after swaping is=%d",b);

	printf("\n\nEnter value of c=");
	scanf("%d",&c);
	f=(c*9/5)+32;
	printf("f after c is=%d",f);

	printf("\n\nenter your base value=");
	scanf("%d",&bv);
	printf("enter hrd=");
	scanf("%d",&hrd);
	hrd=bv*hrd/100;
	printf("enter da=");
	scanf("%d",&da);
	da=bv*da/100;
	printf("enter ta=");
	scanf("%d",&ta);
	ta=bv*ta/100;
	gs=bv+hrd+da+ta;
	printf("gross value is = %drs",gs);
	getch();
}