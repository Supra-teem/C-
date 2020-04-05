#include<iostream>
using namespace std;
int m[100][100];
int s[100][100];
void matrixChaining(int p[])
{
    int i,j,k,l,n,q;
    n=4;
    for(i=1;i<=n;i++)
        m[i][i]=0;
    for(l=2;l<=n;l++)
    {
        for(i=1;i<=n-l+1;i++)
        {
            j=i+l-1;
            m[i][j]=INT_MAX;
            for(k=i;k<=j-1;k++)
            {
                q=m[i][k]+m[k+1][j]+(p[i-1]*p[k]*p[j]);
                if(q<m[i][j])
                {
                    m[i][j]=q;
                    s[i][j]=k;
                }
            }
        }
    }
}
void printOpti(int i,int j)
{
    if(i==j)
    {
        cout<<"A"<<i;
    }
    else
    {
        cout<<"(";
        printOpti(i,s[i][j]);
        printOpti(s[i][j]+1,j);
        cout<<")";
    }
}
int main()
{
    int i,j,n;
    cout<<"Enter the number of matrices: ";
    cin>>n;
    int p[n];
    cout<<"Enter the size of each matrices: ";
    for(i=0;i<=n;i++)
        cin>>p[i];
    matrixChaining(p);
    cout<<"--M matrix---"<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<m[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"--S matrix---"<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<s[i][j]<<"\t";
        }
        cout<<endl;
    }
    printOpti(1,4);
}
