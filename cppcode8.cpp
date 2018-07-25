#include<iostream>
using namespace std;
int main()
{
	int ph_calls,age;
	int monthlybill;
	cout<<"enter no of phone calls you have made this month"<<endl;
	cin>>ph_calls;
	cout<<"your age"<<endl;
	cin>>age;
	if(age<60)
	{
		monthlybill=ph_calls*5;
		cout<<"your monthly bill is"<<monthlybill;
	}
	else
	{
		int amount;
			monthlybill=ph_calls*5;
			amount=monthlybill*(20/100);
			cout<<"manthly bill"<<amount;
	}
}
