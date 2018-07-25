#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  char a[5]={'h','e','l','l','o'};
  int i=0,j=0;
  for(i=4;i>=0;i--)
  {
  	for(j=0;j<=i;j++)
  	{
  		cout<<a[j];
	  }
	  cout<<"\n";
  }
  for(i=1;i<5;i++)
  {
  	for(j=0;j<=i;j++)
  	{
  		cout<<a[j];
  		
	  }
	  cout<<"\n";
  }
  return 0;
}
