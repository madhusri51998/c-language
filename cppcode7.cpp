#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[10];
	cout<<"enter";
	gets(s);
	char m1[10]="january";
	char m2[10]="february";
	char m3[10]="march";
	char m4[10]="april";
	char m5[10]="may";
	char m6[10]="june";
	char m7[10]="july";
	char m8[10]="august";
	char m9[10]="september";
	char m10[10]="october";
	char m11[10]="november";
	char m12[10]="december";
	if(strcmp(s,m1)==0||strcmp(s,m3)==0||strcmp(s,m5)==0||strcmp(s,m7)==0||strcmp(s,m8)==0||strcmp(s,m10)==0||strcmp(s,m12)==0)
	{
		cout<<"31 days";
	}
	else if(strcmp(s,m2)==0)
	{
		cout<<"28 or 29 days";
	}
	else
	{
		cout<<"30 days";
	}
}
