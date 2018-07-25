#include<iostream>
using namespace std;
void enough(int);
int main()
{
	int goal;
	cout<<"enter number";
	cin>>goal;
	enough(goal);
    return 0;
}
void enough(int x)
{
	int i,sum=0;
	for(i=1;sum<x;i++)
	{
		
		sum=sum+i;
	}
	cout<<i-1;
}
