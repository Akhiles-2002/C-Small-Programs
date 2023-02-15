//file open by open()
#include<iostream>
#include<fstream>
using namespace std;
int main()
{

ofstream ob;
ob.open("xyz.txt",ios::out);
ob<<"Akhilesh";
ob.close();
}
