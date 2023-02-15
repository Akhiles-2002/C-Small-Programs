#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream ob;
    ob.open("country.txt",ios::out);
    ob<<"united state of America \n";
    ob<<"united kingdom \n";
    ob<<"south korea \n";
    ob.close();
    ob.open("capital.txt",ios::out);
    ob<<"washington \n";
    ob<<"London \n";
    ob<<"Seoul \n";
    ob.close();
    const int N = 80;
    char name[N];
    ifstream ob1;
    ob1.open("country.txt",ios::in);
    cout<<" country \n";
    while(ob1)
    {
        ob1.getline(name,N);
        cout<<name<<"\n";
    }
    ob1.close();
     ob1.open("capital.txt",ios::in);
    cout<<"capital  \n";
    while(ob1)
    {
        ob1.getline(name,N);
        cout<<name<<"\n";
    }
    ob1.close();
}
