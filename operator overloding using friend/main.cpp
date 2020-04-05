#include <iostream>

using namespace std;
class complexe
{
    int real,imaginary;
public:
    void getdata(int r,int i)
    {
        real=r;
        imaginary=i;
    }
    void display()
    {
        cout<<"The result is "<<real<<" +I"<<imaginary<<endl;
    }
    friend complexe operator +(complexe&,complexe&);
    friend complexe operator -(complexe&,complexe&);
    friend complexe operator *(complexe&,complexe&);
};

complexe operator +(complexe &a,complexe &b)
{
    complexe c;
    c.real=a.real+b.real;
    c.imaginary= a.imaginary+b.imaginary;
    return c;
}
complexe operator -(complexe &a,complexe &b)
{
    complexe c;
    c.real=a.real-b.real;
    c.imaginary=a.imaginary-b.imaginary;
    return c;
}
complexe operator *(complexe &a,complexe &b)
{
    complexe c;
    c.real=((a.real*b.real)-(a.imaginary*b.imaginary));
    c.imaginary=((a.real*b.real)+(a.imaginary*b.imaginary));
    return c;
}
int main()
{
    complexe a,b,c,d;
    a.getdata(5,3);
    b.getdata(2,1);
    c.getdata(6,4);
    d.getdata(1,1);
    complexe obj1= a-b;
    obj1.display();
    complexe obj2= c+d;
    obj2.display();
    complexe obj3= obj1*obj2;
    obj3.display();
    return 0;
}
