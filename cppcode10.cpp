#include<iostream>
using namespace std;
int main()
{
	int k,m;
	float f,i,c,mi;
	cout<<"enter distance in kilometers"<<endl;
	cin>>k;
	cout<<"distance in meters";
	m=k*1000;
	cout<<m<<endl;
	cout<<"distance in feet";
	f=k*3280.8398950131;
	cout<<f<<endl;
	cout<<"distance in inch";
	i=k*39370.078740157;
	cout<<i<<endl;
	cout<<"distance in centimeters";
	c=k*100000;
	cout<<c<<endl;
	cout<<"distance in millimeters";
	mi=k*1000000;
	cout<<mi<<endl;
}
