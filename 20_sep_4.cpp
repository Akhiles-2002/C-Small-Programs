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
int arr[2][3];
          int r,c;
          cout<<"Enter 2*3 =6 element \n";
          for(r=0;r<2;r++)
          {

              for(c=0;c<3;c++)
              {
               cin>>arr[r][c];

              }

          }

cout<<"\n *******arr[2][3]*********\n";
          for(r=0;r<2;r++)
          {

              for(c=0;c<3;c++)
              {
               cout<<arr[r][c]<<"\t";

              }
              cout<<endl;
          }



}

