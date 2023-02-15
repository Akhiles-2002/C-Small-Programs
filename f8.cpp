/*4- no arg but return(output in main(),
input+process-function's body*/
#include<iostream>
using namespace std;
class Sum
{
	 public:
	 	int disp()
	 	{
	 		int a,b;
	 	cout<<"Enter value of a and b ";
		 cin>>a>>b;
		 return(a+b);	
		 }
};
int main()
{
	Sum ob;
	cout<<"sum  : "<<ob.disp();
}

