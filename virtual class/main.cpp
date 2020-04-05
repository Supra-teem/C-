#include <iostream>

using namespace std;

class Animal

{
    public:
    Animal()
    {
        cout<<"Constructor of Animal"<<endl;

    }
};
class Tiger:virtual public Animal

{
    public:
    Tiger()
    {
        cout<<"Constructor of Tiger"<<endl;

    }
};
class Lion:virtual public Animal
{
    public:
     Lion()
     {
         cout<<"Constructor of Lion"<<endl;
     }
};

class Liger: public Tiger,public Lion
{
    public:
    Liger()
    {
        cout<<"Constructor of Liger"<<endl;
    }
};

int main()
{
    Liger supro;

}
