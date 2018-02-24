#include<stdio.h>
#include<string.h>
main()
{
	char str[100],ch;
	int i,frequency=0;
	printf("enter sentence");
	gets(str);
	printf("enter character");
	scanf("%c",&ch);
	for(i=0;str[i]!='\0';++i)
	{
		if(ch==str[i])
		++frequency;
	}
	printf("frequency of %c=%d",ch,frequency);
}
