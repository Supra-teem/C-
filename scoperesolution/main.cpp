#include <iostream>
#include<string>
using namespace std;

class Human
{
public:

    string name;
    int age;
    void introduce();
    void introduce(int);
};
class animal
{
public:

    string name;

    void introduce();
};
void Human::introduce()
{
    cout<<"Hi I'm "<<Human::name<<endl;
}
void Human::introduce(int)
{
    cout<<"My age is "<<Human::age<<endl;
}
void animal::introduce()
{
    cout<<"I am "<<animal::name;
}
int main()
{
    cout << "Hello world!" << endl;
    Human boy;
    animal tiger;
    boy.name= "Sagar";
    boy.age= 15;
    tiger.name= "Tiger";
    boy.introduce();
    boy.introduce(boy.age);
    tiger.introduce();
    return 0;
}
