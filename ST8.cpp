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
}s;
int main()
{
    int x;

    cout<<"*********MARKSHEET*********\n";
     cout<<"enter your name :\n";
     cin>>s.name;
     cout<<"enter your roll number :\n";
     cin>>s.roll;



         cout<<"Enter number in hindi ";
         cin>>s.h;
         cout<<"Enter number in english ";
         cin>>s.eng;
         cout<<"Enter number in math ";
         cin>>s.math;
         cout<<"Enter number in science ";
         cin>>s.sci;
        cout<<"Enter number in social science ";
         cin>>s.sst;


     system("cls");
     cout<<"*********MARKSHEET********* \n";
    cout<<"Name\t\tRollno.\n ";
    cout<<s.name<<"\t\t"<<s.roll<<endl;
    cout<<"hindi :" <<s.h <<"\n english"<<s.eng << "\n math"<<s.math <<"\n science"<<s.sci <<" \n sst"<<s.sst;

    }



