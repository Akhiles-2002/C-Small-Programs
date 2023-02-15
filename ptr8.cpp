// array of pointer
// int a[5]={23,55,5,67,54};
// int *ptr[size];
#include<iostream>
using namespace std;
int main()
{
  int a[5]={23,55,5,67,54};
 int *ptr[5];
 int x;
 for(x=0;x<5;x++)
 {

  ptr[x]=&a[x];
 cout<<"address  "<<ptr[x]<<" value  ="<<a[x]<<endl;
}
/*cout<<"\n"<<a1<<endl;
a1=20;
cout<<"\n"<<a1<<endl;*/


}
