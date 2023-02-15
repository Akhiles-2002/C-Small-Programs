//first program of class and object
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    //private://not accessible
private:
    int roll;
    char name[20];
    public:
  void disp()
  {
      roll=100;
      strcpy(name,"Amit");
  cout<<"ROLL : "<<roll<<endl;
  cout<<"NAME : "<<name<<endl;

  }

};
int main()
{
  Student s;  //s is object
  s.disp();  //access member function disp()


}
