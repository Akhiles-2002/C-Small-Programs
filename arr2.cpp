/*
Array: A single variable store multiple value(same type) is called
called
types of array
1-one dimensional
2-two/multi dimensional
1- dimensional array :
 syntax:
 datatype arrayname[size];
 int a[5];
 or
 float b[5];
 0 to size-1
 0,1,2,3,4(index/subscript)
 initialization :
 arrayname[size]={value};
 a[5]={123,44,66,4343,55};
 or
 a[0]=123;
 ---
 a[4]=55
 1-traverse/print/visit start-end
 2-searching
 3-sorting
 4-insertion
 5-deletion
*/
#include<iostream>
using namespace std;
int main()
{

    int a[5]={12,56,78,88,34};
    int x;
    for(x=0;x<5;x++)
    {
      cout<<"["<<x<<"]"<<"-> "<<a[x]<<endl;

    }
}

