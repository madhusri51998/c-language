#include<stdio.h>
main()
{ char name[5];
int age;
printf("enter name and age");
scanf("%s",name);
scanf("%d",&age);
if(age<=18)
{
	printf("not eligible for gate exam");
}
	else if(age>=20)
	{
		printf("eligible for gate exam");
	}
else
{
	printf("your eligibility is after 20");
	}	

}
