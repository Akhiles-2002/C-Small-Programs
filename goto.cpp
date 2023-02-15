//use of goto
#include<iostream>
using namespace std;
int main()
{
int x=1;

start:
cout<<x<<"\t";
x++;
if(x<=8)
{
goto start;
}

}
