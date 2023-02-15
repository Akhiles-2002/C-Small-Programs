//strrev()
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
   char name[20];
   cout<<"Enter name  ";
  // cin>>name;
  //cin.getline(name,20);
  gets(name);
   strrev(name);
   cout<<"Name : "<<name<<endl;


}
