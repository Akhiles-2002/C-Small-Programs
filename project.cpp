#include<iostream>
#include<stdio.h>
#include<fstream>
#include<iomanip>
#include<string.h>
using namespace std;
int menu();
class book
{
    int bookid;
    char title[20];
    float price;
protected:
    int allotbookid();
    void showheader();
public:
    void getbook();
    void showbook();
    void addbook();
    void viewbook();
    void searchbook();
    void deletebook();
    void modifybook();

};
int book::allotbookid()
{
    ifstream fin;
    book temp;
    int id=0;
    fin.open("books.txt",ios::in|ios::binary);
    if(!fin)
    {
        return(id+1);
    }
    else
    {
        fin.read((char*)&temp,sizeof(temp));
        while(!fin.eof())
        {

            id=temp.bookid;
             fin.read((char*)&temp,sizeof(temp));
        }
        id++;
        return(id);
    }
}
void book::showheader()
{
    cout<<left;
    cout<<"\n"<<setw(10)<<"BOOK ID"<<setw(10)<<"PRICE"<<setw(10)<<"title\n";
}
void book::getbook()
{
    cout<<"enter book title: ";
    fflush(stdin);
    gets(title);
    cout<<"price of book : ";
    cin>>price;
    bookid=allotbookid();
}
void book::showbook()
{
     cout<<left;
    cout<<"\n"<<setw(10)<<bookid<<setw(10)<<price<<setw(10)<<title;
}
void book::addbook()
{
    ofstream fout;
    fout.open("books.txt",ios::in|ios::app|ios::binary);
    if(!fout)
    {
        cout<<"file can not open";
    }
    else
    {

        fout.write((char*)this,sizeof(*this));
    }
    fout.close();
}
void book::viewbook()
{
    ifstream fin;
    fin.open("books.txt",ios::in|ios::binary);
    if(!fin)
    {
        cout<<"file can not open";
    }
    else
    {
        showheader();
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            showbook();
             fin.read((char*)this,sizeof(*this));
        }
    }
    fin.close();
}
void book::searchbook()
{
    ifstream fin;
    char str[20];
    fin.open("books.txt",ios::in|ios::binary);
    cout<<"enter the name of book to search : ";

fflush(stdin);
    gets(str);
    if(!fin)
    {
        cout<<"file not found";
    }
    else
    {
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            if(!strcmp(this->title,str))
        {
            showheader();
            showbook();
            break;
        }
        fin.read((char*)this,sizeof(*this));
    }
    if(fin.eof())
    {
        cout<<"\n record not found ";
    }
    }
    fin.close();

}
void book::modifybook()
{
    int id,r=0;
    fstream file;
    file.open("books.txt",ios::in|ios::out|ios::ate|ios::binary);

    cout<<"\n enter record number to modify (book id) :";
    cin>>id;
    file.seekg(0);
    if(!file)
    {
        cout<<"file not found";
    }
    else
    {
         file.read((char*)this,sizeof(*this));
         while(!file.eof())
         {
             showheader();

             showbook();
             cout<<"\n re-enter book details: \n";
             cout<<"enter book tittle :";
             fflush(stdin);
             gets(title);
             cout<<"enter book price :";
             cin>>price;
             file.seekp((r-1)*sizeof(book),ios::beg);
              file.write((char*)this,sizeof(*this));
              break;

         }
          file.read((char*)this,sizeof(*this));
    }
    if(file.eof())
    {
        cout<<"record not found ";
    }
    file.close();
}
void book::deletebook()
{
    ifstream fin;
    ofstream fout;
    int id;
    char x;
    fin.open("books.txt",ios::in|ios::binary);
    fout.open("tempbooks.txt",ios::out|ios::app|ios::binary);
    cout<<"enter book id to delete record : ";
    cin>>id;
    if(!fin)
    {
        cout<<"file not found";
    }
    else
    {
     fin.read((char*)this,sizeof(*this));
     while(!fin.eof())
     {
         if(this->bookid==id)
         {
             cout<<"record you want to delete is : \n\n";
             showheader();
             showbook();
             cout<<"\n Are you sure you want to delete this record(y/n) :";
             fflush(stdin);
             cin>>x;
             if(x=='y'||x=='Y')

                 cout<<"\n record is deleted";
                 //fout.write((char*)this,sizeof(*this));

             else

                // cout<<"\n record is deleted";
                fout.write((char*)this,sizeof(*this));

        }
         else

             fout.write((char*)this,sizeof(*this));
             fin.read((char*)this,sizeof(*this));



     }
      fin.close();
         fout.close();
         system("erase books.txt");//DELETE
         system("rename tempbooks.txt books.txt"); //RENAME
    }//else

} //delet
int menu()
{
   // system("cls");
    cout<<" \n 1 -> ADD NEW BOOK ";
    cout<<" \n 2 -> VIEW ALL BOOK ";
    cout<<" \n 3 -> SEARCH BOOK ";
    cout<<" \n 4 -> MODIFY BOOK ";
    cout<<" \n 5 -> DELETE BOOK ";
    cout<<" \n 6 -> EXIT ";
    cout<<" \n\n enter your choice ";
    int ch;
    cin>>ch;
    return(ch);
}
int main()
{
    book b;
    int ch;
    while(1) // IN C/C++ 1 OR 0 BUT IN JAVA true/false
    {
        ch=menu();
        switch(ch)
        {
        case 1:
            b.getbook();
            b.addbook();
            break;
        case 2:
            b.viewbook();
            break;
        case 3:
            b.searchbook();
            break;
        case 4:
            b.modifybook();
            break;
        case 5:
            b.deletebook();
            break;
        case 6:
            exit(0);
        default:
             cout<<"\n\n Enter Valid Choice";
                }
    }
}

