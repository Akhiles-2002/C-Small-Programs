/*
function definition use in two ways
1-inside class
2-outside class
1- inside class
class classname
{
return type functionname(arg)
{
//body
}
};
*/
#include<iostream>
using namespace std;
class Test
{

 private:
    int a,b,c;
    public:
    void disp()
    {
        cout<<"Enter  value of a and b ";
        cin>>a>>b;
        c=a+b;
        cout<<"sum : "<<c<<endl;
    }
};
int main()
{
    Test t;
    t.disp();

}
