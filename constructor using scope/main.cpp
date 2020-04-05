#include <iostream>

using namespace std;
class Human
{
    int age;
    int wAge()
    {
        return age-5;
    }
public:
    Human();
   /* Human()
    {
        cout<<"Constructor is called";
    }*/

    void getAge(int value)
    {
        age=value;
    }
    void displayAge()
    {
        cout<<"My age is "<<wAge();
    }
};
Human::Human()
{
    cout<<"Constructor is called, when you create an object of Human"<<endl;
}
int main()
{
    cout << "Hello world!" << endl;
    Human abir;
    abir.getAge(20);
    abir.displayAge();
    return 0;
}
