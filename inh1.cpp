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

*/
#include<iostream>
using namespace std;
class A
{
public:
    void disp()
    {

        cout<<"A\n";
    }

};
class B:public A
{

public:
    void show()
    {

        cout<<"B\n";
    }
};
int main()
{

    B ob;
    ob.disp();
    ob.show();
}
