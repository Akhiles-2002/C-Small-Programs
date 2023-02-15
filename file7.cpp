#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream ob("item.txt",ios::out);
     char name[30];
    cout<<"enter item name : "<<endl;
    cin>>name;
    ob<<name<<endl;
    float cost;
    cout<<"enter item cost : "<<endl;
    cin>>cost;
    ob<<cost<<endl;
    int n;
    cout<<"number of item  : "<<endl;
    cin>>n;
    ob<<n<<endl;
    int total;
    total=n*cost;
    ob<<total<<endl;

    ob.close();
    ifstream ob1("item.txt",ios::in);
    ob1>>name;
    ob1>>cost;
    ob1>>n;
    cout<<endl;
    cout<<"item name : "<<name<<endl;
    cout<<"item cost : "<<cost<<endl;
    cout<<"number of items : "<<n<<endl;
    cout<<"total cost : "<<total<<endl;

    ob1.close();
}
