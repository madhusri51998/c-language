#include<stdio.h>
# define size sizeof(int)*8
main()
{
	int n,count,i;
	printf("enter any number");
	scanf("%d",&n);
	count=0;
	for(i=0;i<size;i++)
	{
		if((n>>i)&1)
		{
			break;
		}
		count++;
}
printf("trailing zeros of %d is %d",n,count);
}
