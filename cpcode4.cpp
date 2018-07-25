#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    public:

    char *name[10];
	int age;
	int contact;
	
	void getdata(char g,int h,int i)
	{   name=g;
		cout<<name;
		age=h;
		cout<<age;
		contact=i;
		cout<<contact;
		
	}
	friend class Sd;
}s;
class Sd
{public:
	void fun(char g,int h,int i)
	{
		s.getdata(g,h,i);
	}
}v;
int main()
{

	char name1[10];
	int age1;
	int contact1;
	cin>>name1;
	cin>>age1;
	cin>>contact1;
	
	v.fun(name1[10],age1,contact1);
	return 0;
	
}


