/*
2- TWO DIMENSIONAL ARRAY
It is used to store value in row and col form.
syntax:
datatype arrayname[row size][col size];
int a[2][3];
initilization :
a[2][3]={
            {12,45,56},
            {56,78,23}
         };
*/
#include<iostream>
using namespace std;
int main()
{
    int a[2][3]={
            {12,45,56},
            {56,78,23}
         };
   cout<<"\n************\n";
   cout<<a[0][0]<<"\t"<<a[0][1]<<"\t"<<a[0][2]<<endl;
   cout<<a[1][0]<<"\t"<<a[1][1]<<"\t"<<a[1][2]<<endl;
}
