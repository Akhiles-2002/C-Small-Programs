/*
1- wap in c++ which print salary of 10 employess and calculate
total,ave0rage
2- total,avg,max,min
*/
#include<iostream>
using namespace std;
int main()
{
    int salary[10],total=0,min,max,choice;
    float average;
    int x;
cout<<"enter the salary of 10 employees:";
    for(x=0;x<10;x++)
    {
      cin>>salary[x];
    }
    system("cls");
    for(x=0;x<10;x++)
    {
      cout<<salary[x]<<endl;
    }
cout<<endl;
cout<<"press 1 for total salary:"<<endl;
cout<<"press 2 for average salary:"<<endl;
cout<<"press 3 for minimum salary:"<<endl;
cout<<"press 4 for maximum salary:"<<endl;
cout<<"enter your choice:";
cin>>choice;
switch (choice)
{
case 1:
for(x=0;x<10;x++)
    {
      cout<<salary[x]<<endl;
      total=total+salary[x];
    }
cout<<"total of 10 employees salary";
cout<<total<<endl;
break;

case 2:
cout<<"average of 10 employees salary"<<endl;

average=total/10;
cout<<average<<endl;
break;
case 3:
    min=salary[0];
for(x=0;x<10;x++)
    {
      if(salary[x]<salary[0])
      {
          min=salary[x];
      }
    }

    cout<<"minimum salary :";
    cout<<min;
 break;
 case 4:     max=salary[0];
    for(x=0;x<10;x++)
    {
      if(salary[x]>salary[0])
      {
          max=salary[x];
      }
    }
    cout<<"maximum salary :";
    cout<<max;
break;
 default:
cout<<"invalid choice";
    }
    }

