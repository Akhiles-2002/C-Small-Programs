#include<iostream>
using namespace std;
int main()
{

    int a[3][3],b[3][3],s[3][3];
    int r,c;

    cout<<"enter the 3*3=9 elements in a[3][3]:";

        for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {

        cin>>a[r][c];
        }

    }

  cout<<"enter the 3*3=9 elements in b[3][3]:";

        for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {

        cin>>b[r][c];
        }
    }


     cout<<"3*3=9 elements of a[3][3]:\n";

        for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {

        cout<<a[r][c]<<"\t";
        }
        cout<<endl;
    }

     cout<<"3*3=9 elements of b[3][3]:\n";

        for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {

        cout<<b[r][c]<<"\t";
        }
        cout<<endl;
    }

        for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {

        s[r][c]=a[r][c]+b[r][c];
        }
    }

     cout<<"sum of 3*3=9 elements :\n";

        for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {

        cout<<s[r][c]<<"\t";
        }
        cout<<endl;
    }



    return 0;
}
