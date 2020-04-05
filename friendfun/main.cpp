#include <iostream>
#include<string>
using namespace std;
class Human
{
    string name;
    int age;
public:
    Human(string iname, int iage)
    {
        name= iname;
        age= iage;
    }
    void show()
    {
        cout<<name<<endl<<age<<endl;
    }
    friend void display(Human);
};

void display(Human man)
{
    cout<<man.name<<endl<<man.age<<endl;
}
int main()
{
    cout << "Hello world!" << endl;
    Human bose("Supro",21);
    bose.show();
    Human suar("Suar",32);
    display(suar);

    return 0;
}
