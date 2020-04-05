#include <iostream>

using namespace std;
class fruit
{
public:
    static int fruit_count;
    fruit()
    {
        fruit_count++;
    }
    void total()
    {
        cout<<"There are "<<fruit_count<<" fruits in total"<<endl;
    }
};
int fruit::fruit_count=0;
int main()
{
    cout << "Hello world!" << endl;
    cout<<fruit::fruit_count<<endl;;
    fruit banana;
    //banana.total();
    fruit ob1;
    fruit ob2;
    fruit ob3;
    ob3.total();
    /*for(int i=0;i<6;i++)
    {
        cout<<obj.fruit_count<<endl;

    }
    obj.total();*/

    return 0;
}
