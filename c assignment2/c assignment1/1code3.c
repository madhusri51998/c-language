#include<stdio.h>
main()
{
	int i=0,n,x,sum=0,large=0;
	printf("enter n value");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter value");
		scanf("%d",&x);
		sum=sum+x;
		large=x>large?x:large;
	}
	printf("sum is %d",sum);
	printf("large value is %d",large);
}
