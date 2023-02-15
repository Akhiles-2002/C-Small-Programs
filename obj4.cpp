//first program of class and object
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    //private://not accessible
//private:
public:
    int roll;
    char name[20];
    public:
  void disp()
  {
     cout<<"\nThanks";
  }

};
int main()
{
  Student s;  //s is object
  cout<<"Roll : "<<(s.roll=100)<<endl;
  cout<<"Name : "<<(strcpy(s.name,"Siddhu"))<<endl;
  s.disp();  //access member function disp()


}
