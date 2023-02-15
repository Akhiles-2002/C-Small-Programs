/*
constructor outside of class
*/
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
int roll;
string name;
public:
//Student(int rn,string nm);
Student(int ,string );
void disp();
};

Student::Student(int rn,string nm) //constructor
{
roll=rn;
name=nm;
}
void Student:: disp()
{

cout<<roll<<endl;
cout<<name<<endl;
}

int main()
{
//Student ob(1001,"Akhilesh");  //implicit
Student ob=Student(100,"Akhilesh"); //explicit
ob.disp();
}


