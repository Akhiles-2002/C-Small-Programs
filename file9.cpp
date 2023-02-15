#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
   const int N=80;
   char name[N];
   ifstream ob1,ob2;
   ob1.open("country.txt",ios::in);
   ob2.open("capital.txt",ios::in);
   for(int i=1;i<=10;i++)
   {
       if(ob1.eof()!= 0)
       {
           cout<<"exit from country \n";
           exit(1);
       }
       else
        {
       ob1.getline(name,N);
       cout<<"capital of "<<name<<endl;
        }
            if(ob2.eof() != 0)
       {
           cout<<"exit from capital \n";
           exit(1);
       }
       else
        {
       ob2.getline(name,N);
       cout<<name<<endl;
        }



   }
}

