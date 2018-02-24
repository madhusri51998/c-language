#include<stdio.h>
main()
{
	int hours,wage,total;
	printf("enter no.of hours employee worked");
    scanf("%d",&hours);
    printf("\nenter hourly wage");
    scanf("%d",&wage);
    total=hours*wage;
    printf("\ntotal %d",total);
}
