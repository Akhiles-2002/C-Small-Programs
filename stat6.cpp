#include<iostream>
using namespace std;
class test
{
int code;
static int cnt;
public:
    void setcode()
    {
        code=++cnt;
        //cout<<code<<endl;
    }
    void showcode()
    {

        cout<<code<<endl;
    }
    static void showcount()
    {
        cout<<cnt<<endl;
    }

};
int test::cnt;
int main()
{
    test t1,t2;
    t1.setcode();
    t2.setcode();
    test::showcount();
    test t3;
    t3.setcode();
    test::showcount();
    t1.showcode();
    t2.showcode();
    t3.showcode();
}
