/*
multiple variable
s1,s2
Array of structure
STRucture_variable[size];
s[5]
*/
#include<iostream>
#define SIZE 30
using namespace std;
struct student
{
 int roll;
 char name[20];
 int s[5],total;
 int h,eng,math,sci,sst;
}s[SIZE];
int main()
{
    int x,n;
    cout<<"Enter no. of record ";
    cin>>n;
    if(n>SIZE)
    {
        cout<<"Sorry!!! out of range ";
    }
    else
    {


    cout<<"Enter record of "<<n<<" student \n";
    for(x=0;x<n;x++)
    {
         cout<<"Enter Record no . "<<x+1<<endl;
         cout<<"Enter roll no. ";
         cin>>s[x].roll;
          cout<<"Enter name ";
         cin>>s[x].name;
          cout<<"Enter fees ";
         cin>>s[x].fees;

    }
    system("cls");
    cout<<"ROLL\t\tNAME\t\tFEES\n\n";
    for(x=0;x<n;x++)
    {
         cout<<s[x].roll<<"\t\t"<<s[x].name<<"\t\t"<<s[x].fees<<endl;

    }
    }

}
