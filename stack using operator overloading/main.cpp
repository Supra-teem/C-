#include <iostream>
using namespace std;

class stacko
{
    int top;
    int arr[5];
public:
    stacko()
    {
        top=-1;
    }
    void operator +()
    {
        int element;
        cout<<"enter the element to push into the stack:";
        cin>>element;
        top++;
        arr[top]=element;
    }
    void operator -()
    {
        int item=arr[top];
        cout<<"The "<<item<<" is popped from the stack"<<endl;
        top--;
    }
    void display()
    {
        int i;
        cout<<"your stack is now: "<<endl;
        for(i=top;i>=0;i--)
        {
            cout<<arr[i]<<"\t";
        }
        cout<<endl;
        cout<<endl;

    }
};
int main()
{
    stacko stk;
    stk+;
    stk+;
    stk+;
    stk.display();
    stk-;
    stk.display();
}
