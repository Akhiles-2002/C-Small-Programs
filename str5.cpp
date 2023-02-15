//input string variable
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  char name[20];
  int x;
  cout<<"Enter string  ";
  //cin>>name;
  //gets(name); c:  language
  cin.getline(name,20);//line oriented
  cout<<"Name : "<<name;
  /*for(x=0;x<10;x++)
  {


  cout<<name[x];
  }*/

}
