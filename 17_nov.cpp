#include<iostream>
using namespace std;

class integer
{
	int m,n;
	public:
		integer(int,int);
		void display()
		{
			cout<<"m="<<m<<endl;
			cout<<"n="<<n<<endl;
		}
		
};
integer::integer(int x,int y)   //constructor defined
{
  m=x;
  n=y;	
}
int main()
{
	integer int1(0,100); 
	integer int2=integer (25,75);
	cout<<"\n OBJECT1"<<"\n";
	int1.display();
	cout<<"\n OBJECT2"<<"\n";
	int2.display();
	return 0;
}
