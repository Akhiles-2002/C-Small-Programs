//strcpy() : to copy string

#include<iostream>
#include<string.h>  //c
//#include<string> //c++
using namespace std;
struct stu
{

    int roll;
    char name[20];
}s;
int main()
{
    s.roll=100;
    //s.name="Amit"; not allow
    strcpy(s.name,"Amit");
    cout<<"Roll : "<<s.roll<<endl;
    cout<<"Name : "<<s.name<<endl;

}
