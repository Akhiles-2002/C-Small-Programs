/*
CLASS AND OBJECT
1-NO ARG AND NO RETURN
2- WITH ARG NO RETURN
3- WITH ARG AND WITH RETURN
4- no arg but return
3- with arg and with return
(input,output -main(),but process in function body)
sum of two number.
*/
#include<iostream>
using namespace std;
class Sum
{
	 private:
	 int a,b,c;		
	 	public:
	 		void calc(int x,int y)  //x,y formal argument
	 		{
	 		
	 		a=x;
			 b=y;	
	 			
			}
			int show()
			{
				c=a+b;
				return(c);
			}
};
int main()
{
	Sum ob;
	int a,b;
	cout<<"Enter value of a and b ";
	 			cin>>a>>b;
	ob.calc(a,b); //a,b argument(actual)
	int res=ob.show();
	cout<<"main : sum  : "<<res;
}
