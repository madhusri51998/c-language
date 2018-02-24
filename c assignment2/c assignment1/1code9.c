#include<stdio.h>
main()
{
int h,m,time;
printf("time\n");
scanf("%d",&time);
h=time/60;
m=time%60;
printf("%dhours%dminutes",h,m);
}
