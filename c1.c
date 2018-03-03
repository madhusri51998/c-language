#include<stdio.h>
main()
{
	char c[100],a                                    ;
	int i=0,n;
	printf("enter string size");
	scanf("%d",&n);
	printf("enter sentence");
	scanf("%s",c);
    printf("%c",c[0]-32);
	for(i=1;i<n;i++)
	{
		if(c[i]==' '|| c[i]=='\n'||c[i]=='\t')
		{
			a=c[i]-32;
			printf("%c",a);
		}
		else
		{
			printf("%c",c[i]);
		}
		
	}
}
