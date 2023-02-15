//string function c and c++
//c strlen(),strcpy(),strcmp(),strcat(),strcmpi())
//string.h
#include<iostream>
#include<string.h>  //c
//#include<string> //c++
using namespace std;
int main()
{
    char name[20]="Network Net";
    int l;
    l=strlen(name);
    cout<<"Length : "<<l;

}
