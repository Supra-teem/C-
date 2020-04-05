#include <iostream>

using namespace std;
int x[100];
int abs(int i)
{
    if(i<0)
        return -i;
    else
        return i;
}
bool can_be_placed(int k,int i)
{
    int j;
    for(j=1;j<=k-1;j++)
    {
        if((x[j]==i) || (abs(j-k)==abs(x[j]-i)))
            return false;
    }
    return true;
}
void nQueen(int k,int n)
{
    int i,j,m;
    static int c=1;
    for(i=1;i<=n;i++)
    {
        if(can_be_placed(k,i))
        {
            x[k]=i;
            if(k==n)
            {
                cout<<"\nSolution matrix "<<c++<<endl;
                //char arr[n+1][n+1];

                for(j=1;j<=n;j++)
                {
                    cout<<endl;
                    for(m=1;m<=n;m++)
                    {
                        if(m==x[j])
                        {
                            cout<<"Q\t";

                            //cout<<arr[j][m]<<"\t";
                        }

                        else
                        {
                            cout<<"_\t";
                            //cout<<arr[j][m]<<"\t";
                        }


                    }
                }

            }
            else
                {nQueen(k+1,n);}

        }

    }
}
int main()
{
    int n,k;
    cout<<"Enter the number of queens: ";
    cin>>n;
    nQueen(1,n);
    return 0;
}
