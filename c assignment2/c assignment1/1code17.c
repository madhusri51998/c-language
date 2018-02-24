#include<stdio.h>
main()
{
	char item1[10],item2[10],item3[10];
	int cost1,cost2,cost3;
	int code1,code2,code3;
	char q1[5],q2[5],q3[5];
	char date1[8],date2[8],date3[8];
	printf("\nenter items name");
	scanf("%s%s%s",item1,item2,item3);
	printf("\nenter items cost");
	scanf("%d%d%d",&cost1,&cost2,&cost3);
	printf("\nenter each items codes");
	scanf("%d%d%d",&code1,&code2,&code3);
	printf("\nenter quantity");
	scanf("%s%s%s",q1,q2,q3);
	printf("\nenter manufacture dates");
	scanf("%s%s%s",date1,date2,date3);

	printf("\n%s\t%d\t%d\t%s\t%s\n%s\t%d\t%d\t%s\t%s\n%s\t%d\t%d\t%s\t%s",item1,cost1,code1,q1,date1,item2,cost2,code2,q2,date2,item3,cost3,code3,q3,date3);
}
