#include<stdio.h>
#include<conio.h>
main()
{
	char user_name[10],password[10],i=0,ch;
	printf("user name");
	scanf("%s",user_name);
	printf("enter password");
	for(i=0;i<10;i++)
	{
		ch=getch();
		password[i]=ch;
		ch='*';
		printf("%c",ch);
	}
	password[i]=' ';
    for(i=0;i<8;i++)
    {
    	printf("%c",password[i]);
	}


}
