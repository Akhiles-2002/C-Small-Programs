/*
pointer and string
*/
#include<iostream>
using namespace std;
int main()
{
char name[10]="Amit";
char *name1="Sikha";
int marks[5]={67,77,66,55,90};
char *sub[5]={"Hindi","English","Maths","Science","SST"};
int x;
cout<<"Name  : "<<name<<endl;
cout<<"Name  : "<<name1<<endl;
for(x=0;x<5;x++)
{
  cout<<sub[x]<<"=>"<<marks[x]<<endl;

}
}
