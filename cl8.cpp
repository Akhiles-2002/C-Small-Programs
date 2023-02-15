//array of object
//ob[size];
//ob[5];
#include<iostream>
using namespace std;
class Stu
{

     int roll;
     char name[20];
 public:
    void input();
    void disp();
};
void Stu::input()
{
cout<<"Enter roll ";
cin>>roll;
cout<<"Enter name ";
cin>>name;
}
void Stu::disp()
{
    cout<<"Record\n";
    cout<<"ROLL "<<roll<<endl;
    cout<<"NAME "<<name<<endl;
}
int main()
{
 Stu ob[3];
 int x;
 for(x=0;x<3;x++)
 {
  ob[x].input();
 }
 cout<<"\n---------------\n";
 for(x=0;x<3;x++)
 {
  ob[x].disp();
 }

}
