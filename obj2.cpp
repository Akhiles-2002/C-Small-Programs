//first program of class and object
#include<iostream>
using namespace std;
class Student
{
    //private://not accessible
    public:
  void disp()
  {
  cout<<"This is OOPs";

  }

};
int main()
{
  Student s;  //s is object
  s.disp();  //access member function disp()


}
