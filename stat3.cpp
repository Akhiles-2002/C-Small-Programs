#include<iostream>
using namespace std;
class test
{

 public:
 void disp()
 {
 cout<<"Non-static \n";
 }
 static void disp2()
 {
 cout<<"static \n";
 }
 };
 int main()
 {
test ob;
ob.disp();
test::disp2();
 }
