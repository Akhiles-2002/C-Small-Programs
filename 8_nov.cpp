//relational operation on string objects

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string s1("abc");
	string s2("xyz");
	
	string s3=s1+s2;
	
	if(s1!=s2)
	{
		cout<<s1<<"is not equal to"<<s2<<endl;
    }
	
	if(s1>s2)
	{
		cout<<s1<<"is greater than "<<s2<<endl;
		
	}
	else
	{
		cout<<s2<<"is greater than"<<s1<<endl;
	}
	if(s3==s1+s2)
	{
		cout<<s3<<"is equal to"<<s1+s2<<"\n";
		
	}
	int x=s1.compare(s2);
	
	if(x==0)
	cout<<s1<<"="<<s2<<endl;
	else if(x>0)
	{
		cout<<s1<<">"<<s2<<endl;
	}
	else 
	cout<<s1<<"<"<<s2<<"\n";
	
	return 0;
}
	

