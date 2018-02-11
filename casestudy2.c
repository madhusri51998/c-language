#include<stdio.h>
void function1();
void function2();
void function3();
int main()
{
	 function1();
	 function2();
     function3();
return 0;
}
void function1()
{
	char name[5],dob[8],mailid[15],address[20];
	double mobileno;
	int i,j,k,l;
	printf("enter name\n");
for( i=0;i<=4;i++)
{

	scanf("%c",&name[i]);
}
printf("\n enter dob");
for(j=0;j<=7;j++)
{

	scanf("%c",&dob[j]);
}
printf("\n enter mailid");
for(k=0;k<=14;k++)
{

scanf("%c",&mailid[k]);
}
printf("\nenter address");
for(l=0;l<=19;l++)
{
scanf("%c",&address[l]);	
}
for(i=0;i<=4;i++)
{

	printf("%c",name);
}
for(j=0;j<=7;j++)
{
	printf("%c",dob[j]);
}
for(k=0;k<=14;k++)
{
	printf("%c",mailid[k]);
}
for(l=0;l<=19;l++)
{
	printf("%c",address[l]);
}
}

void function2()
{
	int ssc,inter,btechtotal,sem1,sem2,sem3,sem4;
	printf("enter academic details\n");
	printf("enter ssc marks\n");
	scanf("%d",&ssc);
	printf("enter inter %\n");
	scanf("%d",&inter);
	printf("enter individual sem results");
	scanf("%d%d%d%d",&sem1,&sem2,&sem3,&sem4);
	btechtotal=((sem1+sem2+sem3+sem4)/4);
	printf("ssc:%d\ninter:%d\nb.techtotal:%d\n",ssc,inter,btechtotal);
	}
	void function3()
	{
		char areaofinterest[20],hobbies[30],technical[20],nontechnical[20];
		printf("enter area of interst:\n");
		scanf("%s",areaofinterest);
		printf("hobbies:\n");
		scanf("%s",hobbies);
		printf("technical:\n");
		scanf("%s",technical);
		printf("nontechical:\n");
		scanf("%s",nontechnical);
		printf("area of interest %s\n",areaofinterest);
		printf("hobbies %s\n",hobbies);
		printf("technical %s\n",technical);
		printf("nontechnical %s\n",nontechnical);
		}
	
			

