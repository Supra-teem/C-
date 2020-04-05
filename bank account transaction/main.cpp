#include <iostream>

using namespace std;
class Addamount
{
    int amount=50;
public:
    Addamount()
    {
        cout<<"No money is added!"<<endl;
    }
    Addamount(int money)
    {
        amount = amount+money;
    }
    void transfer(Addamount &obj,int money)
    {
        obj.amount=obj.amount+money;
        amount=amount-money;
    }
    void display()
    {
        cout<<"your current balance is: "<<amount<<endl;
    }
};
int main()
{
    Addamount obj;
    Addamount obj1(100);
    obj1.display();
    Addamount obj2(50);
    obj2.display();
    obj1.transfer(obj2,50);
    obj1.display();
    obj2.display();

    return 0;
}
