#include<iostream>
using namespace std;
int main()
{
    int a[6],x,n,y;
    cout<<"enter five elements : \n";
    for(x=0;x<5;x++)
    {

        cin>>a[x];
    }
      cout<<" five elements : \n";
    for(x=0;x<5;x++)
    {

        cout<<a[x]<<"\t";
    }
    cout<<"\n enter any number you want to add : \n";


    cin>>n;
    //a[5]=n;
    a[x]=a[x+1]; //room/space
    for(x=0;x<4;x++)
    {
     a[4+x]=n;
       cout<<a[x]<<"\t";
    }

}
