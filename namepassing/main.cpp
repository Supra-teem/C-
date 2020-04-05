#include <iostream>
#include<string.h>
using namespace std;
class student
{
    char *p;
public:
    student(char *s)
    {
        p=new char[strlen(s)+1];
        strcpy(p,s);
        cout<<p;
    }
    student()
    {
        cout<<"Unknown"<<endl;;
    }
};
int main()
{
    //cout << "Hello world!" << endl;
    char s[10];
    cout<<"Enter your name: ";
    cin>>s;
    student a;
    student b(s);
    return 0;
}
