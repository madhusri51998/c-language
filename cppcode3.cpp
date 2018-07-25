#include<iostream>
using namespace std;
int g_c_d(int,int);
int main()
{
	int a,b,g;
	cout<<"enter two integers";
	cin>>a>>b;
    g=g_c_d(a,b);
	cout<<"the greatest common divisor is"<<g;
	return 0;
}
int g_c_d(int x,int y)
{
	int l,i,gcd;
	if(x>y)
	{
		l=x;
	}
	else
	{
		l=y;
	}
	for(i=1;i<=x;i++)
	{
		if(x%i==0&&y%i==0)
		{
			gcd=i;
		}
	
	}
		return(gcd);
}
