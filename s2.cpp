/*
compare
*/
#include<iostream>
using namespace std;
int main()
{
string s1("Road");
string s2("Read");
string s3("Red");
int x;
x=s1.compare(0,2,s2,0,2);
cout<<x;
cout<<"\n";
cout<<"\n\ns2= "<<s2.size()-2<<endl;;
//int s=s2.compare(s2.size()-1,1,s3,size()-1,1);


}
