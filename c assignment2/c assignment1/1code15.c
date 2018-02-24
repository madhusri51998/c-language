#include<stdio.h>
main()
{
	int num,temp,sum=0;
	printf("num");
	scanf("%d",&num);
	while(num!=0)
	{
		temp=num%10;
		sum=sum+temp;
		num=num/10;
		
	}
	printf("%d",sum);
}
