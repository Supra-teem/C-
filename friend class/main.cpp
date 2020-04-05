#include <iostream>
using namespace std;
class test1
{
    int a,b;
public:
    void getdata()
    {
        cout<< "Enter the value of a and b"<<endl;
        cin>>a>>b;
    }
    friend class test2;
};

class test2
{
public:
    void putdata(test1 &obj)
    {
        cout<<"A= "<<obj.a<<"and B= "<<obj.b<<endl;
    }
};

int main()
{
    cout << "Hello world!" << endl;
    test1 obj;
    test2 obj2;
    obj.getdata();
    obj2.putdata(obj);
    return 0;
}
