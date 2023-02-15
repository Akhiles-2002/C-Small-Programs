/*
vaiable
1-local variable(define and access within function's body)
2-global variable(define outside of main() and accessible whole program)

:: use/access for global vaiable if local and global name same
*/
#include<iostream>
using namespace std;
int p=1000;//global
class Abc
{


public:
    int t;
    void disp1()
    {
        t=500;
        int a=100; //local
        int p=900;
        cout<<"a in disp1 ="<<a<<endl;
        cout<<"p global  in disp1 ="<<p<<endl;
        cout<<"member t disp1="<<t<<endl;
        cout<<"\n\n local p in disp1="<<p<<endl;
        cout<<"\n\n global p in disp1="<<::p<<endl;//global
    }
    void disp2()
    {
        int b=200; //local
        cout<<"b in disp1 ="<<b<<endl;
       // cout<<"a in disp2 ="<<a<<endl; no access
        cout<<"p global  in disp2 ="<<p<<endl;
        cout<<"member t disp2="<<t<<endl;
    }

};
int main()
{
   Abc ob;
   ob.disp1();
   ob.disp2();
    cout<<"p glbal  in main() ="<<p<<endl;
   // cout<<"member t main="<<t<<endl; no access
   cout<<"member t disp1="<<ob.t<<endl;

}
