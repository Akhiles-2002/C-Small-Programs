//using dafault data type in a class definition
#include<iostream>
using namespace std;
template<class t1=int,class t2=int> //GENERIC TEMPLATE
//default data types specified as int 

class test
{
	t1 a; //GENERIC DATATYPE
	t2 b; //GENERIC DATARYPE
	public:test(t1 x,t2 y)
	{
		a=x;
		b=y;
	}
	void show()
	{
		cout<<a<<" and "<<b<<endl;
		
	}
};
int main()
{
	test<float,int>test1(1.23,123);
	test<int,char>test2(100,'w');
	test<>test3('a',12.983); //declaration of class object
	//without types specification
	test1.show();
	test2.show();
	test3.show();
	return 0;
}

