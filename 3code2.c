#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,n,max=0;
	int *a;
	printf("enter n");
	scanf("%d",&n);
	a=(int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("enter");
		scanf("%d",&a[i]);
		max=max>a[i]?max:a[i];
	}
	

	printf("%d",max);
	
}
