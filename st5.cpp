/*
multiple variable
s1,s2
*/
#include<iostream>
using namespace std;
struct student
{
int roll;
char name[20];
float fees;
}stu,stu2;
int main()
{
    cout<<"Enter roll ";
    cin>>stu.roll;
    cout<<"Enter name ";
    cin>>stu.name;
    cout<<"Enter fees ";
    cin>>stu.fees;
    cout<<"Enter roll ";
    cin>>stu2.roll;
    cout<<"Enter name ";
    cin>>stu2.name;
    cout<<"Enter fees ";
    cin>>stu2.fees;

  cout<<"Roll : "<<stu.roll<<endl;
  cout<<"Name : "<<stu.name<<endl;
  cout<<"Fees : "<<stu.fees<<endl;
  cout<<"Roll : "<<stu2.roll<<endl;
  cout<<"Name : "<<stu2.name<<endl;
  cout<<"Fees : "<<stu2.fees<<endl;
}






