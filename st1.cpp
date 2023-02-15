/*
Structure :-
A single variable store multiple value but heterogeneous(different type)
is called structure.It used to store record(string/int/char/float)
define  :
struct structurename/tag name
{
datatype member1;
datatype member2;
datatype member3;
}structure_variable={values};

struct student
{
int roll;
char name[20];
float fees;
}stu={1001,"Amit",345.66};

access member/data member

syntax:
sturcture_var.memebrname;
or
sturcture_var.memebrname=value;
*/
#include<iostream>
using namespace std;
struct student
{
int roll;
char name[20];
float fees;
}stu={1001,"Amit",345.66};
int main()
{
  cout<<"Roll : "<<stu.roll<<endl;
  cout<<"Name : "<<stu.name<<endl;
  cout<<"Fees : "<<stu.fees<<endl;

}






