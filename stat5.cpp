#include<iostream>
using namespace std;
class item
{
    static int z;
    int number;
public:
    void getdata(int a)
    {
        number = a;
        z++;

       cout<<"z :"<<z<<endl;
       cout<<number<<endl;
    }
    void getcount()
    {
        cout<<"z :"<<z<<endl;
    }

};
//int item::z;
int main()
{
    int item::z;
    item a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(100);
    b.getdata(2);
    c.getdata(3);

    a.getcount();
    b.getcount();
    c.getcount();



}
