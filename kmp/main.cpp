#include <iostream>
#include<string.h>
using namespace std;
void get_data(char p[],char t[])
{
    int n,m,i;
    cout<<"Enter the testing string and it length: ";
    cin>>n;
    for(i=0;i<n;i++)
        cin>>t[i];
    cout<<"Enter the pattern string and it length: ";
    cin>>m;
    for(i=0;i<m;i++)
        cin>>p[i];
}
void failure(char p[],int f[])
{
    int m=strlen(p);
    int i=1,j=0;
    //f[0]=0;
    while(i<m)
    {
        if(p[i]==p[j])
        {
            f[i]=j+1;
            i++;
            j++;
        }
        else
        {
            if(j>0)
            {
                j=f[j-1];
            }
            else
            {
                f[i]=0;
                i++;
            }
        }
    }
    cout<<"Failure array is "<<m<<endl;
    for(i=0;i<m;i++)
    {
        cout<<f[i];
    }
    cout<<endl;

}
void Kmp(char p[],char t[],int f[])
{
    int n=strlen(t);
    int m=strlen(p);
    failure(p,f);
    int i=0,j=0;
    while(i<n)
    {
        if(t[i]==p[j])
        {
            if(j == m-1)
            {
                cout<<"Pattern found with shift: "<<i-j<<endl;
                j=f[j-1];
            }
            else
            {
                i++;
                j++;
            }
        }
        else
        {
            if(j>0)

                j=f[j-1];
            else
                i++;
        }
    }
}
int main()
{
    char p[100]={0},t[100]={0};
    int f[100]={0};
    get_data(p,t);
    Kmp(p,t,f);
    return 0;
}
