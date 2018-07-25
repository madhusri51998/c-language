#include<iostream>

using namespace std;
int main()
{
	int a[6];
	int i=0;
	cout<<"enter 6 values";
	for(i=0;i<6;i++)
	{
		cin>>a[i];
	}
	int j=0;
	int max;
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			if(a[j]>a[i])
			{
				max=a[j];
			}
		}
	}
	float n;
	n=(float)max;
	cout<<"max is"<<n;
	return 0;
}
