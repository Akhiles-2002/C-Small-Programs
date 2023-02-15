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

*/
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
int roll;
char name[20];

public:
Student()
{
roll=101;
strcpy(name,"Amit");
cout<<roll<<endl;
cout<<name<<endl;
}

};
int main()
{
Student ob;  //called
}


