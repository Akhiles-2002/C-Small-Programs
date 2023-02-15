/*
5- Hybrid inheriatance
        A
   B        C
        D     
        virtual base class :
*/
#include<iostream>
using namespace std;
class A
{
	 public:
	 	void dispA()
	 	{
	 		cout<<"A\n";
		 }
};
class B:virtual public A
{
	 public:
	 	void dispB()
	 	{
	 		cout<<"B\n";
		 }
};
class C:virtual public A
{
	 public:
	 	void dispC()
	 	{
	 		cout<<"C\n";
		 }
};
class D:public B,public C
{
	 public:
	 	void dispD()
	 	{
	 		cout<<"D\n";
		 }
};
int main()
{
	C  ob;
	ob.dispA();
	ob.dispC();
	
	B ob2;
	ob2.dispA();
	ob2.dispB();
	
	D ob3;
	ob3.dispB();
	ob3.dispC();
	ob3.dispD();
	ob3.dispA();
	}
