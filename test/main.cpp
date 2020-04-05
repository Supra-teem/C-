#include <iostream>

using namespace std;

class Human
{
public:

    void display()
    {
        cout<< "Hello Im a human";
    }
};

int main()
{
    cout << "Hello world!" << endl;
    Human me;
    me.display();
    return 0;
}
