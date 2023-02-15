/*
oops(object oriented programming system)
1-class
2-object
3-inheritance
4-polymorphism
5-encapsulation
6-data abstraction
--------
class :- A class is group of data member(int a,int b) and
member function(methods)disp(),sum()).
or
A class is group of object.
object :- Instance of class.
(properties and methods)
ex-
pen(object)
propoerties=color,price
method/function: writing.
===
struct student
{
  int roll;
  char name[20];  //member
}s1,s2,s3;
--
class Student
{
int roll;
char name[20];  //data member
void input()
{
}
void disp()
{
}
}s1,s2,s3;

->class by default private
access specifier/modifier/visibility mode
->private
->protected(class A->class B)
->public
==========

define class :
class classname
{
access specifier://private/protected/public
datatype membername1;
datatype membername2;
access specifier://private/protected/public
returntype functionname(arglist)
{

//body of function
}

};

class Student
{
private:
int roll;
char name[20];
private:
void disp()
{
//body
}


};
---
create object
classname objectname;
Student  s;
...
access member
1-data member
  s.roll;
  s.name;
2-
ob.function(arg);
ob.disp();




*/
