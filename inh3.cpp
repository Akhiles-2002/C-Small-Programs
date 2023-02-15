/*

2- multiple : More than one base class
A               B(base)
      C(derived)
      define :
class A
{

};
class B
{

};
class C:public A,public B
{
}

*/
#include<iostream>
using namespace std;
class A
{
public:
    int a;
public:
    void disp1()
    {
  a=100;
        cout<<"A\n";
        cout<<"\n a = "<<a<<endl;
    }

};
class B
{
public:
    int b;
public:
    void disp2()
    {
  b=100;
        cout<<"B\n";
        cout<<"\n b = "<<b<<endl;
    }

};
class C:public A,public B
{
int c;

public:
    void show()
    {
    c=300;
  cout<<"C  ="<<c<<endl;
  cout<<"A  ="<<a<<endl;
  cout<<"B  ="<<b<<endl;

        cout<<"C\n";
    }
};
int main()
{

    C ob;
    ob.disp1();
    ob.disp2();
    ob.show();

}
