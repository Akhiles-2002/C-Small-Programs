/*
searching  : To find any element in the array list.
1-linear search
2-binary search
1-linear/sequential search :
arr[5]={34,76,44,335,2};
num=335
Searching element  compare to  all  previous element.

*/
#include<iostream>
using namespace std;
int main()
{
    int arr[7]={23,56,77,80,34,23,87};
    int ser_ele,x;
    cout<<"\n--------Array's element---------\n";
    for(x=0;x<7;x++)
    {

       cout<<arr[x]<<"\t";
    }
    cout<<"\n\nEnter number to search : \n";
    cin>>ser_ele; //80
    //searching

    for(x=0;x<7;x++)
    {

         if(arr[x]==ser_ele)
         {
            break;

         }


    }
    if(x==7)
    {

        cout<<" Not found!!!";
    }
    else
    {

         cout<<"Found at "<<x+1<<" position ";
    }

}

