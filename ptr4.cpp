/*
Pointer  :
Pointer to pointer
----
int a=10
int *p=&a;
---
int **pp;
pp=&p;
-----
Pointer arithmetic  Add/Sub
*/
#include<iostream>
using namespace std;
int main()
{
  int a=10;
  int *ptr;

  ptr=&a;
  cout<<"a ="<<a<<endl;
  cout<<"ptr ="<<ptr<<endl;
  a++;
  ptr++;
  cout<<"a ="<<a<<endl;
  cout<<"ptr ="<<ptr<<endl;
  a--;
  ptr--;
  cout<<"a ="<<a<<endl;
  cout<<"ptr ="<<ptr<<endl;



}
