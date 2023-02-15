#include<stdio.h>

void simple(float p=3000,float r=12,float t=3);
int main()
{
simple(2000,10,2); //400
simple(2000,10); //600
simple(2000); //720
simple(); //1080


}
void simple(float p=3000,float r=12,float t=3)  //  default argument a=100
{
float s=p*r*t/100;
    cout<<"simple Interest  ="<<s<<endl;

}
