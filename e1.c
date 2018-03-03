#include<stdio.h>
struct student
{
	char name[10];
	int age;
	double contact;
	char city[20];
	char email[10];
}s[10];
main()
{
	int roll;
	for(roll=0;roll<10;roll++)
	{
		printf("enter  student name,age,contact,city.mail");
		scanf("%s%d%ld%s",&s[roll].name,&s[roll].age,&s[roll].contact,&s[roll].city,&s[roll].email);
	}
		for(roll=0;roll<1;roll++)
	{
		printf("student  details %d",roll);
		printf("%s\t%d\t%ld\t%s",s[roll].name,s[roll].age,s[roll].contact,s[roll].city,s[roll].email);
			
	}
}
