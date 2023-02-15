//string swap
#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main()
{
    string name1,name2,temp;
    cout<<"Enter first name  ";
    cin>>name1;
    cout<<"Enter second name  ";
    cin>>name2;
    system("cls");
    cout<<"\n Before swapping  \n";
    cout<<"Name 1 : "<<name1<<" Name 2 "<<name2<<endl;
  temp=name1;
  name1=name2;
  name2=temp;
  cout<<"\n press any key ....\n";
  //system("pause");
 // getch();


 Sleep(5000);
   cout<<"\nAfter  swapping  \n";
    cout<<"Name 1 : "<<name1<<" Name 2 "<<name2<<endl;


}
