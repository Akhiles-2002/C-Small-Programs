//sum of two number by class and object
#include<iostream>
#include<string.h>
using namespace std;
class Cal
{

public:
    int a,b,c;
    public:
  void input()
  {
     cout<<"Enter value of a ";
     cin>>a;
     cout<<"Enter value of b ";
     cin>>b;

  }
  void output()
  {

      c=a+b;
     cout<<"\n sum : "<<c<<endl;
  }

};
int main()
{
 Cal ob;
 ob.input();
 ob.output();




}
