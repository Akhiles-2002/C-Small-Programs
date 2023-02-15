/*
2- Binary search :
->number(order (asc/desc)
->searching element at mid position
arr[7]={11,23,45,66,87,90,100}
num=23
l=0
u=6
=>mid=l+u/2
mid=3
if(arr[mid]==num)
 cout<<"found";
 if(num>arr[mid])
     90>66
     l=mid+1
     l=4
  else
   u=mid-1
    u=3-1
    u=2
=>
 mid=l+u/2
    =4+6/2
    mid=5
=>
  l=mid+1
  l=5+1
  mid=l+u/2


*/
#include<iostream>
using namespace std;
int main()
{

    int arr[7]={11,23,45,66,87,90,100};
    int num,l=0,u=6,mid=0,x;
    cout<<"Array Element\n (Ascending orer)\n";
    for(x=0;x<7;x++)
    {

     cout<<arr[x]<<"\t";
    }
   cout<<"\n Enter number to search \n";
   cin>>num;

   for(mid=(l+u)/2;l<=u;mid=(l+u)/2)
   {
       if(arr[mid]==num)
       {

           cout<<"Found ";
       }
       if(num>arr[mid])
       {
           l=mid+1;
       }
       else
       {

           u=mid-1;
       }

   }
}
