/*
default argument  :
->when function call does not send any value then
function definition takes default value(which already initialized in function header)

void disp(int a=10)//default argument

}
*/
#include<iostream>
using namespace std;
void disp(int a)  //without  default argument
    cout<<"a ="<<a;

}
int main()
{
    disp(10);
   // disp();  error



}
