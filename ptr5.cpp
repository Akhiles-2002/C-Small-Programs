#include<iostream>
using namespace std;
int main()
{
  int a=10;
  int *ptr;

  ptr=&a;
  cout<<"a ="<<a<<endl;
  cout<<"ptr ="<<ptr<<endl;
  a=a+2;
  ptr=ptr+2;
  cout<<"a ="<<a<<endl;
  cout<<"ptr ="<<ptr<<endl;
  a=a-2;
  ptr=ptr-2;
  cout<<"a ="<<a<<endl;
  cout<<"ptr ="<<ptr<<endl;
cout<<"\n value  ="<<*ptr/2;



}
