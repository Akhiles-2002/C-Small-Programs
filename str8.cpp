//strcpy() : to copy string

#include<iostream>
#include<string.h>  //c
//#include<string> //c++
using namespace std;
struct stu
{

    int roll;
    char name[20];
    char cname[20];
}s;
int main()
{
   cout<<"Enter name  ";
   cin>>s.name;
   cout<<"Enter roll  ";
   cin>>s.roll;
   strcpy(s.cname,s.name);
    cout<<"Roll : "<<s.roll<<endl;
    cout<<"Name : "<<s.cname<<endl;

}
