/*
1- sum of two array
a[5]
b[5]
c[5]
2- sum of two matrix
3*3
*/
#include<iostream>
using namespace std;
int main()
{

    int a[5],b[5],c[5];
    int x;
cout<<"enter 5 element for a[5]:";
 for(x=0;x<5;x++)
    {
        cin>>a[x];
    }
 cout<<"enter 5 element for b[5]:";
 for(x=0;x<5;x++)
    {
        cin>>b[x];
    }
cout<<" 5 element of a[5]:\n";
 for(x=0;x<5;x++)
    {
        cout<<a[x]<<"\t";
    }
    cout<<endl<<endl;
    cout<<"5 element of b[5]:\n";
 for(x=0;x<5;x++)
    {
        cout<<b[x]<<"\t";
    }
    cout<<endl<<endl;
 for(x=0;x<5;x++)
    {
        c[x]=a[x]+b[x];
    }
    cout<<"sum of :\n"<<endl;
for(x=0;x<5;x++)
{
    cout<<c[x]<<"\t";
}
cout<<endl<<endl<<endl;
}
