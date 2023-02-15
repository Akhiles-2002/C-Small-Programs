/*
Pointer  :- A pointer is variable which stored address of another
variable.
a=10;
*ptr=&a;
& - address of operator/referencing
* - address at operator/dereferencing
declaration  :
datatype *pointername;
int *ptr;
initialization :
pointername=&varname;
ptr=&a;

*/
#include<iostream>
using namespace std;
int main()
{

 int a=10,*p;
 p=&a;
 cout<<"value  ="<<a<<endl;
 cout<<"value  ="<<*p<<endl;
 cout<<"add  ="<<p<<endl;
 cout<<"add ="<<&a<<endl;

}
