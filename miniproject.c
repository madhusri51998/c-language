#include<stdio.h>
#include<stdlib.h>
int a;
main()
{
	printf("-------------------------------\n\twelcome\n\tto\n\tquiz game\n-------------------------------");
	select();
}
void select()
{
int i;
printf("\npress");
	printf("\n1 to start the game\n2 to view the high score\n3 to reset score\n4 to help");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
		s();
		break;
		case 2:
			v();
			break;
			case 3:
				r();
				break;
				case 4:
					h();
	}
}
	void s()
	{int score=0;
		char name[10];
		int i;
		printf("register your name");
		scanf("%s",name);
		printf("press 1 to continue the game");
		printf("\npress  any integer key to go to main menu");
		scanf("%d",&i);
		if(i!=1)
		{
			select();
		}
		else
		{   int i;
					printf("1+1?\n 1. 1\t 2. 2\n 3. 3\t 4. 4");
			scanf("%d",&i);
			if(i!=2)
			{
				printf("sorry u r not eligible for the second round ");
				select();
			}
			else
			{    label :
			{
			int i,j;
				printf(" welcome to second round");
				printf("3*2?\n1. 1 \t2.2 \n3. 3\t 4. 6");
				scanf("%d",&i);
				if(i==4)
				{
					printf("correct");
				score++;
				}
				else
				{
					printf("sorry wrong answer");
				}
				printf("\n2*4?\n1. 1\t 2. 2\n 3. 3\t 4. 8");
				scanf("%d",&j);
				if(j==4)
				{
					printf("correct");
					score++;
					a=score++;
				}
				
				else
				{
					printf("sorry wrong answer");
				}
				if(i==4&&j==4)
				{   int i;
					printf("\nu won the game");
					v(score);
					
					printf("\npress 1 to continue the game");
					printf("\n press any other integer key to go to main menu");
					scanf("%d",&i);
					if(i==1)
					{
						goto label;
						
					}
					else
					{
						select();
					}
					
				}
				
				
			}
			}
			
		}
		
	}

void v(int score)
{
	int k;
	printf("\n highest score");
	printf(":%d",a);
	printf("\npress 1 to go to main menu");
	scanf("%d",&k);
	if(k==1)
	{
		select();
	}
	else
	{
		printf("u quitted the game");
	}
}
void r(score)
{   
    int l;
	int b=0;
	a=b;
	printf("score is reset");
	printf("%d",a);
	printf("\npress 1 to go to main menu");
	scanf("%d",&l);
	if(l==1)
	{
		select();
	}
	else
	{
		printf("u quitted the game");
	}
}
void h()
{
	printf("nothing to help u");
}
