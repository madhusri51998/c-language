#include<stdio.h>
main()
{
	int p;
	printf("percentage");
	scanf("%d",&p);
	
	if(p>=0&&p<=60)
	{
		printf("%d=F",p);
		
	}
	else if(p>=61&&p<=70)
	{
		if(p%10>=1&&p%10<=3)
		{
			printf("%d=D-");
		}
		else if(p%10>=4&&p%10<=7)
		{
			printf("%d=D");
		}
		else
		{
			printf("%d=D+");
		}
	}

	else if(p>=71&&p<=80)
	{
		if(p%10>=1&&p%10<=3)
		{
			printf("%d=C-");
		}
		else if(p%10>=4&&p%10<=7)
		{
			printf("%d=C");
		}
		else
		{
			printf("%d=C+");
		}
	}
		else if(p>=81&&p<=90)
	{
		if(p%10>=1&&p%10<=3)
		{
			printf("%d=B-");
		}
		else if(p%10>=4&&p%10<=7)
		{
			printf("%d=B");
		}
		else
		{
			printf("%d=B+");
		}
	}	else if(p>=91&&p<=100)
	{
		if(p%10>=1&&p%10<=3)
		{
			printf("%d=A-");
		}
		else if(p%10>=4&&p%10<=7)
		{
			printf("%d=A");
		}
		else
		{
			printf("%d=A+");
		}
	}	
}
