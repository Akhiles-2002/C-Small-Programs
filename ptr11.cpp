/*
this pointer  : To differentiate class vaiable and local vaiable
(in function as argument) but name same
*/
#include<iostream>
using namespace std;
class Abc
{

  int a,b;
  public:
  void input(int a,int b)
  {
  this.a=a;
  this.b=b;
  }
  void disp()
  {
  cout<<"a +b "<<a+b;
  }
 };
 int main()
 {
 Abc ob;
 ob.input(12,45);
 ob.disp();
 }
