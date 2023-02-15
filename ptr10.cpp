/*
pointer  and structure

*/
#include<iostream>
using namespace std;
struct student
{
    int roll;
    char name[20];

}s={101,"Amit"},*ptr;
int main()
{
ptr=&s;
   cout<<" ******Student*****   ";
   cout<<"ROLL  : "<<s.roll<<endl;
   cout<<"NAME  : "<<s.name<<endl;
    cout<<" ******Student*****   ";
   cout<<"ROLL  : "<<ptr->roll<<endl;
   cout<<"NAME  : "<<ptr->name<<endl;
   cout<<" ******Student*****   ";
   cout<<"ROLL  : "<<(*ptr).roll<<endl;
   cout<<"NAME  : "<<(*ptr).name<<endl;

}
