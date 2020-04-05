#include <iostream>

using namespace std;
class complexo
{
    int real,img;
public:
    void getdata()
    {
        cout<<"Enter the real part: ";
        cin>>real;
        cout<<"Enter the imaginary part: ";
        cin>>img;
    }
    complexo addition(complexo a,complexo b)
    {
        complexo c;
        c.real=a.real+b.real;
        c.img=a.img+b.img;
        return c;
    }
    void result()
    {
        cout<<"The reult of this addition is : "<<real<<" +I"<<img;
    }

};
int main()
{
    complexo a,b,c;
    a.getdata();
    b.getdata();
    c = c.addition(a,b);
    c.result();
    return 0;
}
