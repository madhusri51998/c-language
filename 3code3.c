#include<stdio.h>
struct complex
{
	float r1,r2;
	float i1,i2;
}c;
void sum(float,float,float,float);
main()
{
	printf("for first complex number\n");
	printf("enter r1,i1\n");
	scanf("%f%f",&c.r1,&c.i1);
	printf("for second complex number\n");
	printf("enter r2,i2\n");
	scanf("%f%f",&c.r2,&c.i2);
	sum(c.r1,c.i1,c.r2,c.i2);
}
	
void sum(float a,float b,float c,float d)
	{
		int r,i;
		r=a+c;
		i=b+d;
		printf("%d+j%d",r,i);
	}
	


