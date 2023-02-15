//nesting of member function
#include<iostream>
#define MAX_SIZE 100
using namespace std;
class Data
{
int num[MAX_SIZE];
int n;
public:
void get_data();
int largest();
void display();
};
void Data::get_data()
{
cout<<"\n enter the total number:"<<endl;
cin>>n;
cout<<"\n enter th number:"<<endl;
for(int i=0;i<n;i++)
{
cout<<"\nenter the number"<<i+1;
cin>>num[i];
}
}
int Data::largest()
{
int max;
max=num[0];

for(int i=1;i<n;i++)
{
if(max<num[i])
max=num[i];
}
return max;
}
void Data::display()
{
cout<<"The largest number:"<<largest()<<endl;
}
int main()
{
Data num;
num.get_data();
num.display();
}
