#include<stdio.h>
main()
{
	int year,ld;
	printf("enter year");
	scanf("%d",&year);
	ld=year%100;
	printf("last two digits %2d",ld);
}
