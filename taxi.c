#include<stdio.h>
main()
{
	char name[5],mailid[15],source[5],destination[10],date[8];
	double mobileno;
	int kilometer,amount,i,password,confirmpassword;
	printf("REGISTRATION");
	printf("enter name");
	scanf("%s",name);
	printf("enter mobile no");
	scanf("%lf",&mobileno);
	printf("enter mailid");
	scanf("%s",mailid);
	printf("enter password");
	scanf("%d",&password);
	printf("confirm password");
	scanf("%d",&confirmpassword);
	if(confirmpassword==password)
		{
		
		printf("tarrif menu");
		printf("\n");
		printf("enter 1 for daytime or enter 2 for night time");
		scanf("%d",&i);
		switch(i)
		{
			case 1:
				printf("day time\ntiming 6:00am to 8:00pm\ncost 29Rs/km\n");
			break;
			case 2:
				printf("night time\ntiming 8:00pm to 6:00 am\ncost 25Rs/km\n");
				break;
				default:
					printf("enter valid number");
				
		}
	}
	else
	{
		printf("enter valid password");
	}
		printf("enter the source\n");
		scanf("%s",source);
		printf("enter the destination\n");
		scanf("%s",destination);
		printf("enter no of kilometers\n");
		scanf("%d",&kilometer);
		if (i=1)
		{
			printf("total amount:%d\n",(kilometer*29));
		}
		else
		{
			printf("total amount:%d\n",(kilometer*25));
		}
		printf("enter date\n");
		scanf("%s",date);
		printf("THANK YOU");
		
		}

