#include <iostream>
#include<string>
using namespace std;
class Human
{
    string name;
    int age;
public:
    Human()
    {
        cout<<"Default construtor"<<endl;
        name="null";
        age= 0;

    }
   /* Human(string iname)
    {
        cout<<"constructor with parameter as name"<<endl;
        name=iname;
        age=25;
    }*/
    Human(string iname, int iage=20)
    {
        cout<<"Constructor with parameter as name and age"<<endl;
        name=iname;
        age=iage;
    }


    void display()
    {
        cout<< name<< endl<< age<< endl;
    }
};
int main()
{
    cout << "Hello world!" << endl;
    Human alex;
    alex.display();
    /*Human binoy("Binoy");
    binoy.display();*/
    Human sexa("sexa",26);
    sexa.display();

    return 0;
}
