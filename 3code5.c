#include<stdio.h>
main()
{
	FILE *f;
	f=fopen("student.txt","w");
	char name[10],address[20];
	int age,sem1,sem2,sem3,sem4,sem5,sem6;
	if(f==NULL)
	{
		printf("error");
	}
	printf("enter name");
	scanf("%s",name);
	printf("enter age");
	scanf("%d",&age);
	printf("address");
	scanf("%s",address);
	printf("enter semester wise percentages");
	scanf("%d%d%d%d%d%d",&sem1,&sem2,&sem3,&sem4,&sem5,&sem6);
	fprintf(f,"%s%d%s%d%d%d%d%d%d",name,age,address,sem1,sem2,sem3,sem4,sem5,sem6);
	fclose(f);
}
