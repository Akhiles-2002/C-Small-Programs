//function template
#include<iostream>
using namespace std;
template<typename A> //class=typename
A ob(A &x,A &y)
{
	A temp=x;
	x=y;
	y=temp;
}
void fun(int m,int n,float a,float b)
{
	cout<<"m and n before swap:"<<m<<" "<<n<<endl;
	ob(m,n);
	cout<<"m and n after swap:"<<m<<" "<<n<<endl;
	cout<<"a and b before swap:"<<a<<" "<<b<<endl;
	ob(a,b);
	cout<<"a and b after swap:"<<a<<" "<<b<<endl;
	
}
int main()
{
	fun(100,200,11.22,33.44);
	return 0;
}
