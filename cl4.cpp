/*
vaiable
1-local variable(define and access within function's body)
2-global variable(define outside of main() and accessible whole program)
*/
#include<iostream>
using namespace std;
int p=200;//global
class Abc
{


public:
    void disp1()
    {
        int a=100; //local
        cout<<"a in disp1 ="<<a<<endl;
        cout<<"p global  in disp1 ="<<p<<endl;
    }
    void disp2()
    {
        int b=200; //local
        cout<<"b in disp1 ="<<b<<endl;
       // cout<<"a in disp2 ="<<a<<endl; no access
        cout<<"p global  in disp2 ="<<p<<endl;
    }

};
int main()
{
   Abc ob;
   ob.disp1();
   ob.disp2();
    cout<<"p glbal  in main() ="<<p<<endl;

}
