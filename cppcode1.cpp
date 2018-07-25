#include<iostream>
using namespace std;
void sum_from_to(int,int);
int main()
{
	int a,b;
	cout<<"enter a,b";
	cin>>a>>b;
	sum_from_to(a,b);
	return 0;
}
void sum_from_to(int x,int y)
{
	int i,sum=0;
	for(i=x;i<=y;i++)
	{
		sum=sum+i;
	}
	cout<<sum;
}
