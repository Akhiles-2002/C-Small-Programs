/*
Inheritance :-
One class's property inerit to another class.
A(base/super/parent class)=>B(derived/sub/child)
1- single inheritance : one base class.
A=>B
class A
{
};
define derived class :-
class B:public A
{
}
access specifier
1-private : same class
2-protected : access to child class
3- public : any where
*/
#include<iostream>
using namespace std;
class A
{
public:
    int a;
public:
    void disp()
    {
  a=100;
        cout<<"A\n";
        cout<<"\n a = "<<a<<endl;
    }

};
class B:protected A
{

public:
    void show()
    {
  cout<<"a  ="<<a<<endl;
        cout<<"B\n";
    }
};
int main()
{

    B ob;
    ob.disp();
    ob.show();
    cout<<" a  ="<<ob.a;
}
