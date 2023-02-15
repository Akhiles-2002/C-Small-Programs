//input value
#include<iostream>
#include<fstream>  //ifstream -read and ofstream write
using namespace std;
int main()
{
ifstream ob("abc1.txt",ios::in); //read mode
int roll;
string name;
ob>>roll;
ob>>name;


cout<< " ROLL : "<<roll<<"\n";
cout<<"NAME  :"<<name<<endl;
ob.close();
}
