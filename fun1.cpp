/*
inline function :-
To reduce function call time/code.
use inline keyword before function name.
inline void disp()
{
}
*/
#include<iostream>
using namespace std;
inline int disp(int x,int y)
{
    return(x+y);

}
int main()
{
   cout<<"disp = "<<disp(12,34)<<endl;
   cout<<"disp = "<<disp(15,34)<<endl;
   cout<<"disp = "<<disp(195,34)<<endl;

}
