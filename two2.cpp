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
         int r,c;
   cout<<"\n**********************\n";
   for(r=0;r<2;r++)
   {

       for(c=0;c<3;c++)
       {
           cout<<a[r][c]<<"\t";
       }
       cout<<endl;
   }


}
