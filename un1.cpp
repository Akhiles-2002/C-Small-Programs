/*
structure :-
->define
->input
->output
->multiple s1,s2
->array of structure s[50]
struct std
{
 int  roll;
 char name[20];
 int sub[5];
 }s[3];
 for(x)
 {
 roll,name
  for(y)
  {

  }

 }

 union  :-
 ->It is like structure
 ->But main difference is that structure takes different
 memory location but union takes same memory location


*/
#include<iostream>
using namespace std;
union student
{
   int roll;
   char name[20];

}u;
int main()
{
    cout<<"Enter roll  ";
    cin>>u.roll;
    cout<<"Enter name  ";
    cin>>u.name;
    cout<<"\n-----Record -----\n";
    cout<<"ROLL  : "<<u.roll<<endl;
    cout<<"Name  : "<<u.name<<endl;

}





