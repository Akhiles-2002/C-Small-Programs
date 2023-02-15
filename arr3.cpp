#include<iostream>
using namespace std;
int main()
{

    int a[5];
    int x;
    cout<<"Enter value of array ";
    for(x=0;x<5;x++)
    {
       cin>>a[x];

    }
    for(x=0;x<5;x++)
    {
      cout<<"["<<x<<"]"<<"-> "<<a[x]<<endl;

    }
}
