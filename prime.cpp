/*
prime or not prime
*/
#include<iostream>
using namespace std;
int main()
{
    int n,a,check=1;
    cout<<"Enter any number  ";
    cin>>n;
    for(a=2;a<=n/2;a++)
    {
        if(n%a==0)  //14
        {
           check=0;
           break;
        }

    }
    if(check==1)
    {
        cout<<"prime";

    }
    else
    {

        cout<<"Not Prime";
    }

}
