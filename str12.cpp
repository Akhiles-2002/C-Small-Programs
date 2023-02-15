//strcat(),strrev()
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
   char name[20];
   cout<<"Enter name  ";
   cin>>name;
   strcat(name," ");
   strcat(name,"Singh");
   cout<<"Name : "<<name<<endl;


}
