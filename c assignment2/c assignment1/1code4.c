#include<stdio.h>
main()
{
	int age;
	printf("enter age");
	scanf("%d",&age);
	 a:
		age--;
		
    if(age>18)
    {
    	if(age<30)
    	{
    		printf("valid %d\n",age);
    		goto a;
		}
	}
    
	else
	{
		printf("not valid");
	}

	
}
