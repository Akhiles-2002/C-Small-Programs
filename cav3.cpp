//CALL BY VALUE
#include<iostream>
using namespace std;

class abc
{
    public:
 void disp(int &p)
 {
 p++;
 cout<<"a2="<<p<<endl;

 }

};
int main()
{
int a=10;
cout<<"a1="<<a<<endl;

abc ob;
ob.disp(a);
cout<<"a3="<<a;


}
