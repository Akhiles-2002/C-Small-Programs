//strcmp(str1,str2)  : Compare-case sensitive
// 0 equal, 1 greater,-1 less
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   char user[20];
   cout<<"Enter user ";
   cin>>user;
   if(strcmp(user,"akki")==0)
   {

       cout<<"Welcome!!";
   }
   else
   {
    cout<<"Wrong user id!!!!";

   }

}
