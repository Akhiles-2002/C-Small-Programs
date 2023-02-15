#include<iostream>
using namespace std;
class Test
{

 private:
    int a,b,c;
    public:
    void input();
    void process();
    void disp();
};
void Test::input()
{
    cout<<"Input...\n";
cout<<"Enter value of a and b ";
cin>>a>>b;

}
void Test::process()
{
    cout<<"Process....";
c=a+b;
}
void Test::disp()
{
cout<<"sum : "<<c;
}
int main()
{
Test t;
t.input();
t.process();
t.disp();
}
