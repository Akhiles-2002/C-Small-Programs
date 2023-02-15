/*
constructor overloading
more than one constructor but parameter are different

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
    sum(int a)
    {
        int b=34,c;
        c=a+b;
        cout<<"sum  "<<c<<endl;
    }
    sum(int a,int b)
    {
        int c;
        c=a+b;
        cout<<"sum  "<<c<<endl;
    }
    sum(float a,float b)
    {

        float c;
        c=a+b;
        cout<<"sum  : "<<c<<endl;
    }


};
int main()
{

    sum ob;
    sum ob1(10);
    sum ob2(45,66);
    sum ob3(45.5f,67.7f);

}
