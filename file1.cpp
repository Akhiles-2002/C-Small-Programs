/*
file  :A collection of related record.
It is used to store data into file(harddisk).
1- open()
2- write/read
3-close
mode :
ios::out  write mode
ios::in read mode
ios::app  append mode
open file
1-by constructor
2- by open()

 1-by constructor
*/
#include<iostream>
#include<fstream>  //ifstream -read and ofstream write
using namespace std;
int main()
{
ofstream ob("abc.txt",ios::out); //write mode
ob<<"hello C++";   //cout<<"Hello " ostream
ob.close();
}
