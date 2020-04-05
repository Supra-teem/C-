#include <iostream>

using namespace std;
class item
{
    int a,b;
public:

    void setdata(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void show()
    {
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    item i1,i2;
    i1.setdata(2,3);
    i1.show();
    i2.setdata(4,5);
    i2.show();
    i1=i2;
    i1.show();
    return 0;
}
