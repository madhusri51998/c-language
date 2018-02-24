#include<stdio.h>
#include<string.h>
#define size 100
main()
{
	char str[size];
	int i,words;
	printf("enter striing");
	gets(str);
	i=0;
	words=1;
	while(str[i]!='\0')
	{
		if(str[i]==' '|| str[i]=='\n'||str[i]=='\t')
		{
			words++;
		}
		i++;
	}
	printf("total number of words=%d",words);
}
