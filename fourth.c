#include<stdio.h>
#include<conio.h>
main()
{
	int f1, i1, f2, i2, f, i;
	printf("Enter first distance in feet and inches: ");
	scanf("%d%d",&f1, &i1);
	printf("Enter second distance in feet and inches: ");
	scanf("%d%d",&f2, &i2);
	i=(i1+i2)%12;
	f=f1+f2+(i1+i2)/12;
	printf("Sum of the two distances %d ft %d in and %d ft %d in is %d feet and %d inches", f1,i1,f2,i2,f,i);
	getch();
}
