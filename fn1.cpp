/*
1- no arg and no return
2- with arg and no return
3-with arg and with return
sum of two number
*/
#include<iostream>
using namespace std;
int sum(int x,int y)
{
return(x+y);
}
int main()
{
    int a=12,b=5,c;
    c=sum(a,b);
    cout<<"sum  : "<<c;


}
