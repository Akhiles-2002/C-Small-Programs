/*
destructor
->It is like constuctor
->constructor called when object create/allocate memory but
destructor called when object destroy.
note  : no any return type
no any parameter
->no overload
define with ~(tilde)sign
*/
#include<iostream>
using namespace std;
class sum
{
public:
    sum()
    {

        int a=12,b=45,c;
        c=a+b;
        cout<<" sum  : "<<c<<endl;
    }
    ~sum()
    {
    cout<<"Cleanup memory1\n ";
    }
    };
    class sub
{
public:
    sub()
    {

        int a=120,b=45,c;
        c=a-b;
        cout<<" sub  : "<<c<<endl;
    }
    ~sub()
    {
    cout<<"Cleanup memory2 ";
    }
    };
    int main()
    {
    sum ob; //called constructor
    sub ob2;
    }
