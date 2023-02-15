#include<iostream>
using namespace std;
int main()
{
int a=10,b=2,c;
try
{
  if(b!=0)
  {
c=a/b;
}
else
{
throw(b);
}
cout<<c;
}
catch(int y)

{
cout<<"can not divide zero y ="<<y<<endl;
}
cout<<"\n Thanks!!";

}
