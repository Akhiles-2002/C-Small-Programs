//copy constructor
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

class student
{

    int roll;
    char name[30];
public:
    student()
    {
        roll=10;
        strcpy(name,"x");
    }
    student(student &o)
    {
        roll=o.roll;
        strcpy(name,o.name);
    }
    void input_data()
    {
        cout<<"\n Enter roll no.";
        cin>>roll;
        cout<<"\nEnter name:";
        cin>>name;
    }
    void show_data()
    {
        cout<<"\n roll no:"<<roll;
        cout<<"\n name:"<<name;
    }
};
int main()
{
    student s;
    s.show_data();
    student A(s);
    A.show_data();
    A.input_data();
    A.show_data();
    getch();
    return 0;

}
