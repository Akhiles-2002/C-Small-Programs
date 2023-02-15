/*
static
1-variable
2-function
1-variable
->by default initialize zero
->To initialize once
define :
static int a=10;
or
static int a;
a=0
 2-function
 static function called without object.
 It call with class.
 classname::static_fun();

*/
#include<iostream>
using namespace std;
int main()
{
 static int a;
 cout<<"a ="<<a;

}
