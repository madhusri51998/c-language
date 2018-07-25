#include<iostream>
#include<string.h>
using namespace std;
struct name
{
	char s[15];
}a[10];
int main()
{
	char temp[10];
	cout<<"enter";
	for(int i=0;i<10;i++)
	{
		cin>>a[i].s;
	}
	 for(int i=0;i<=10;i++)
	 {
	 
      for(int j=i+1;j<=10;j++){
      	
         if(strcmp(a[i].s,a[j].s)>0){
            strcpy(temp,a[i].s);
            strcpy(a[i].s,a[j].s);
            strcpy(a[j].s,temp);
         }
     }
 }
 for(int i=0;i<=10;i++)
      puts(a[i].s);
}
