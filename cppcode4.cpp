#include<iostream>
using namespace std;
int main()
{
	int a[100],n,i,j,tmp;
	cout<<"enter the value for N";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]>a[j])
			{
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	cout<<"acsending order"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}

		for(int i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	cout<<"descending order"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
