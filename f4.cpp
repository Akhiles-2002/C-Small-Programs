#include <iostream>
#include <math.h>
using namespace std;
int main()
{
double xDegrees = 90.0,x,result;

  // converting degrees to radians
  x = xDegrees*3.14159/180;
  //result = sin(x);
 // cout<<"result = "<<result;
   cout << "sin ( "<<x<<" ) = "<<sin(x)<< endl;
}
