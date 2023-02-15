/*
CONSTRUCTO AND DESTRUCTOR
constructor
->It is special member function
->Class name and function name same
->no any retunn type
->It is called automatically when create object
types of constructor
1-default
2-parameterized
3-copy
1- default : no pass any parameter
syntax:
class classname
{
access specifier:
constructorname()
{

}

 }

 2- parameterized constructor.
 class Abc
 {

  Abc(int roll,float fees)
  {
  }
 };

*/
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
int roll;
string name;

public:
Student(int rn,string nm) //constructor
{
roll=rn;
name=nm;
}
void disp()
{

cout<<roll<<endl;
cout<<name<<endl;
}
};
int main()
{
Student ob(1001,"Akhilesh");  //called constructor
ob.disp();
}


