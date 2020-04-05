#include <iostream>

using namespace std;

class test1
{
    int value1,value2;
public:
    friend class test2;
};

class test2
{
    test1 obj;
    int value3,value4;
public:
    void getdata()
    {
        cout<<"Enter the data for value 1 and 2"<<endl;
        cin>>obj.value1>>obj.value2;
        cout<<"Enter the value for value 3 and 4"<<endl;
        cin>>value3>>value4;
    }
    void putdata()
    {
        cout<<"Value1 ="<<obj.value1<<" Value2= "<<obj.value2<<" Value3= "<<value3<<" Value4= "<<value4;
    }
};
int main()
{
    cout << "Hello world!" << endl;
    test2 obj;
    obj.getdata();
    obj.putdata();
    return 0;
}
