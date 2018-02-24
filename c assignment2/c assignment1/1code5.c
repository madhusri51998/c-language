#include<stdio.h>
main()
{
	int h,m,s;
	printf("enter");
	scanf("%d%d%d",&h,&m,&s);
	a:
	{
			if(h>24)
		h--;
		if(m>60)
		m--;}
		
		
	if(h<25&&m<61)
	{
		printf("%d:%d:%d",h,m,s);
	}
	else 
	goto a;
}
