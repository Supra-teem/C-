#include<iostream>
using namespace std;
void print(int *x,int n)
{
	cout<<"The solution vector";
	for(int i=1;i<=n;i++)
		cout<<x[i];
	cout<<endl;
}

void nextValue(int k,int **g,int *x,int m,int n)
{

    while(1)
    {
        int j;
        x[k]=(x[k]+1)%(m+1);
        if(x[k]==0)
            return;
        for(j=1;j<=n;j++)
        {
            if(g[k][j]!=0 && x[k]==x[j])
                break;
        }
        if(j==n+1)
            return;
    }
}
void gColoring(int k,int **g,int *x,int m,int n)
{

    while(1)
    {
        nextValue(k,g,x,m,n);
        if(x[k]==0)
            return;
        if(k==n)
        {
            print(x,n);
        }
        else
            gColoring(k+1,g,x,m,n);
    }
}
int main()
{
    int i,j,m,n;
    cout<<"Enter the number of vertices :";
    cin>>n;
    int *x=new int[n];
    int **g=new int *[n+1];
    for(i=1;i<=n;i++)
    {
		g[i]=new int[n+1];
		x[i]=0;

    }
    cout<<"Enter the chromatic number: ";
    cin>>m;
    cout<<"Enter the adjacency matrix: "<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>g[i][j];
        }
    }
    gColoring(1,g,x,m,n);
    return 0;
}
