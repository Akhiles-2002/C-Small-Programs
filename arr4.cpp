#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int a[50];
    int x,n;
    cout<<"Enter n range ";
    cin>>n;
    cout<<"Enter value of array ";

    for(x=0;x<n;x++)
    {
       cin>>a[x];

    }
    system("cls");
    cout<<"\n press any key ...\n";
    getch();
    for(x=0;x<n;x++)
    {
      cout<<"["<<x<<"]"<<"-> "<<a[x]<<endl;

    }
   // system("pause");
}
