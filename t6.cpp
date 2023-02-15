#include<iostream>
using namespace std;
int main()
{
    int a[3][3],x,y,sum=0;
     cout<<"enter elements :\n";

     for(x=0;x<3;x++)
     {

         for(y=0;y<3;y++)
         {

             cin>>a[x][y];
         }
     }
     cout<< "matrix a[3][3]\n";
      for(x=0;x<3;x++)
     {

         for(y=0;y<3;y++)
         {

             cout<<a[x][y]<<"\t";
             sum=sum+a[x][y];
             sum=0;

         }

cout<<sum;
 cout<<"\n";
     }
}
