#include<iostream>
using namespace std;
int main(){
	int a[10],i,l,s,index=0;
	cout<<"enter 10 values"<<endl;
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	l=a[0];
	s=a[0];
	for(i=1;i<10;i++)
	{
		if(a[i]>l)
		{
			l=a[i];
			index=i+1;
		}
	}
	cout<<"large is"<<l<<"index"<<index<<endl;
		for(i=1;i<10;i++)
	{
		if(a[i],s)
		{
			s=a[i];
			index=i+1;
		}
	}
	cout<<"small is"<<s<<"index"<<index<<endl;
}
