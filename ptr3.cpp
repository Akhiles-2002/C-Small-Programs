//pointer to pointer : one pointer stores address of another pointer
//**ptr;
#include<iostream>
using namespace std;
int main()
{

 int a=10,*p,**pt;
 p=&a;
 pt=&p;
 cout<<"value  ="<<a<<endl;
 cout<<"value  ="<<*p<<endl;
 cout<<"value  ="<<**pt<<endl;
 cout<<"add  ="<<p<<endl;
 cout<<"add ="<<&a<<endl;
 cout<<"add of p   ="<<pt<<endl;

}
