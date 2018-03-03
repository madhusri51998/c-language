#include<stdio.h>
#include<string.h>
main()
{
	char u1[]="madhusri",u2[]="tejaswi",u3[]="saru",u4[10];
	int p1=123,p2=234,p3=345,p4,r1,r2,r3;
	printf("ENTER USERNAME");
	scanf("%s",u4);
	printf("PASSWORD");
	scanf("%d",&p4);
	r1=strcmp(u1,u4);
	r2=strcmp(u2,u4);
	r3=strcmp(u3,u4);
if((r1==0)&&(p4==p1))
{
	printf("logged in");
}
else if(r2==0&&(p4==p2))
{
	printf("logged in");
}
else if(r3==0&&(p4==p3))
{
	printf("logged in");
}
else
{
	printf("invalid");
}
}
