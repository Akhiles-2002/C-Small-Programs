/*
2- two dimensional array :
To store data in rows and cols form.
datatype arrayname[row][col];
int arr[2][3];
arr[2][3]={
            {12,45,66},
            {45,67,89}

          };

*/
#include<iostream>
using namespace std;
int main()
{
int arr[2][3]={
            {12,45,66},
            {45,67,89}

          };
cout<<"["<<0<<","<<0<<"] "<<arr[0][0]<<"\t";
cout<<"["<<0<<","<<1<<"] "<<arr[0][1]<<"\t";
cout<<"["<<0<<","<<2<<"] "<<arr[0][2]<<"\t"<<endl<<endl;
cout<<"["<<1<<","<<0<<"] "<<arr[1][0]<<"\t";
cout<<"["<<1<<","<<1<<"] "<<arr[1][1]<<"\t";
cout<<"["<<1<<","<<2<<"] "<<arr[1][2]<<endl;

}

