//input value
#include<iostream>
#include<fstream>  //ifstream -read and ofstream write
using namespace std;
int main()
{
ofstream ob("abc1.txt",ios::out); //write mode
int roll;
string name;
cout<<"Enter roll and name  ";
cin>>roll>>name;
ob<<roll<<"\n"<<name<<endl;   //cout<<"Hello " ostream
ob.close();
}
