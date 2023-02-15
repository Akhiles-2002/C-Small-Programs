// pointer and array
// int a[5]={23,55,5,67,54};
// int *ptr;
#include<iostream>
using namespace std;
int main()
{
  int a[5]={23,55,5,67,54};
 int *ptr;
 int a1=10;
 ptr=&a[0];
 cout<<"address  ="<<ptr<<" value  ="<<a[0]<<endl;
ptr=&a[1];
 cout<<"address  ="<<ptr<<" value  ="<<a[1]<<endl;

cout<<"\n"<<a1<<endl;
a1=20;
cout<<"\n"<<a1<<endl;


}
