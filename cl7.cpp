//multiple object of class
// ob1,ob2
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
 Stu ob1,ob2;
 ob1.input();
 ob2.input();
 ob1.disp();
 ob2.disp();

}
