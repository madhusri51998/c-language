#include<stdio.h>
main()
{
	char name[10],address[25];
	int age,height;
	printf("enter name\n");
	scanf("%s",name);
	printf("enter address\n");
	scanf("%s",address);
	printf("enter age\n");
	scanf("%d",&age);
	printf("enter height\n");
	scanf("%d",&height);
	printf("name:%s\naddress:%s\nage:%d\nheight:%d",name,address,age,height);
}
