//input value
#include<iostream>
#include<fstream>  //ifstream -read and ofstream write
using namespace std;
int main()
{
ifstream ob("abc1.txt",ios::in); //read mode
int roll;
char name[30];
cout<<"ROLL\t\tNAME\n";
while(!ob.eof())
{
ob>>roll;
cout<<roll<<"\t";
ob>>name;
cout<<name<<endl;
//cout<<roll<<"\t";
//cout<<name<<endl;
}





ob.close();
}
