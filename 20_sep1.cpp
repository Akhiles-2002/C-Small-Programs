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
cout<<arr[0][0]<<"\t";
cout<<arr[0][1]<<"\t";
cout<<arr[0][2]<<"\t"<<endl<<endl;
cout<<arr[1][0]<<"\t";
cout<<arr[1][1]<<"\t";
cout<<arr[1][2]<<endl;

}

