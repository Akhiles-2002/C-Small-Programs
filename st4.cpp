/*
input value by keyboard
*/
#include<iostream>
using namespace std;
struct student
{
int roll;
char name[20];
float fees;
}stu;
int main()
{
    cout<<"Enter roll ";
    cin>>stu.roll;
    cout<<"Enter name ";
    cin>>stu.name;
    cout<<"Enter fees ";
    cin>>stu.fees;

  cout<<"Roll : "<<stu.roll<<endl;
  cout<<"Name : "<<stu.name<<endl;
  cout<<"Fees : "<<stu.fees<<endl;

}






