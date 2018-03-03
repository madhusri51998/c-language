#include<stdio.h>
struct start
{
	int hours,minutes,seconds;
}a;
struct stop
{
	int hours,minutes,seconds;
}b;
main()
{
	printf("enter start time\n");
	scanf("%d%d%d",&a.hours,&a.minutes,&a.seconds);
    printf("enter stop time") ;
    scanf("%d%d%d",&b.hours,&b.minutes,&b.seconds);
    diff(a.hours,a.minutes,a.seconds,b.hours,b.minutes,b.seconds);
}
diff(int h1,int m1,int s1,int h2,int m2,int s2 )
{
	int h,m,s;
	h=h1-h2;
	m=m1-m2;
	s=s1-s2;
	printf(" TIME DIFFERENCE %d:%d:%d - %d:%d:%d =%d:%d:%d",h1,m1,s1,h2,m2,s2,h,m,s);
}
