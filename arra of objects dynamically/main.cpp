#include <iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class book
{
    char aname[20],bname[20];
    int price;
public:
    void readbook()
    {
        cin.ignore(1);
        cout<<"Enter the book name: "<<endl;;
        gets(bname);
        //getline(cin,bname);
        cout<<"\nEnter the author name: "<<endl;;
        gets(aname);
        //getline(cin,aname);
        cout<<"\nEnter the price: "<<endl;
        cin>>price;

    }
    void showbook()
    {
        cout<<"\n"<<bname<<"\t\t"<<aname<<"\t\t"<<price;
    }
};
int main()
{
    book *b;
    int n, i;
    cout<<"Enter the number of records: ";
    cin>>n;
    b= new book[n];
    for(i=0;i<n;i++)
    {
        b[i].readbook();
    }
    cout<<"\nBookname\tAuthorname\tPrice"<<endl;
    cout<<"___________________________________"<<endl;
    for(i=0;i<n;i++)
    {
        b[i].showbook();
    }
    return 0;
}
