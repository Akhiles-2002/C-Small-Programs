//employee by class
#include<iostream>
#include<string.h>
using namespace std;
class employee
{
    int id;
    int age;
    char name[20];
public:
    int salary;
    void get_data()
    {
        cout<<"Enter id:"<<endl;
        cin>>id;
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"Enter age:"<<endl;
        cin>>age;
        cout<<"Enter salary:"<<endl;
        cin>>salary;
    }
    void display_info()
     {

         cout<<"\n Id:"<<id<<endl;
         cout<<"Name :"<<name<<endl;
         cout<<"Age:"<<age<<endl;
         cout<<"Salary:"<<salary<<endl;
     }
};
int main()
{
    employee e1;
    employee e2;

    cout<<"enter basic information"<<endl;
    e1.get_data();
    cout<<"enter basic data";
    e2.get_data();
    cout<<"basic information";
    e1.display_info();
    cout<<"basic information";
    e2.display_info();
}
