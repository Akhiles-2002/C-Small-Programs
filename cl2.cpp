/*
function definition use in two ways
1-inside class
2-outside class
2- outside class :- Function definition outiside of class
but prototype in class.
class classname
{
returntype functionname(arg);
};
returntype classname::functionname(arg)
{
//body
}
:: scope resolution operator(SRO)
*/
#include<iostream>
using namespace std;
class Test
{

 private:
    int a,b,c;
    public:
void disp();
};
    void Test::disp()
    {
        cout<<"Enter  value of a and b ";
        cin>>a>>b;
        c=a+b;
        cout<<"sum : "<<c<<endl;
    }

int main()
{
    Test t;
    t.disp();

}
