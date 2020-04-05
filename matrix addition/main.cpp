#include <iostream>
using namespace std;

class Matrix{

    public:
        int rlimit,llimit,arr[25][25];
        void getdata(int r,int c){
            rlimit=r;
            llimit=c;
            cout<<"Enter the Matrix : \n";
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    cin>>arr[i][j];
                }
            }
        }
        void show(){
            for(int i=0;i<rlimit;i++){
                for(int j=0;j<llimit;j++){
                    cout<<arr[i][j]<<"\t";
                }
                cout<<"\n";
            }
        }
        friend void mulMatrix(Matrix , Matrix );
        /*void addMatrix(Matrix m1,Matrix m2){
            //cout<<"Hello";
            Matrix m3;
            int arr[25][25];
            if(m1.llimit==m2.llimit && m1.rlimit==m2.rlimit){
                for(int i=0;i<m1.rlimit;i++){
                    for(int j=0;j<m2.llimit;j++){
                        m1.arr[i][j]=m1.arr[i][j] + m2.arr[i][j];
                    }
                }
            }
            m1.show();
        }*/
};
        void mulMatrix(Matrix m1,Matrix m2){
            //cout<<"Hello";
            //Matrix m3;
            int arr[25][25];
            if(m1.llimit==m2.rlimit){
                cout<<"Matrix Multiplication Result\n";
                for(int i=0;i<m1.rlimit;i++){
                    for(int j=0;j<m2.llimit;j++){
                        arr[i][j]=0;
                        for(int k=0;k<m2.llimit;k++){
                            arr[i][j]+=m1.arr[i][k]*m2.arr[k][j];
                        }
                        cout<<arr[i][j]<<"\t";
                    }
                    cout<<"\n";
                }
                //m3.show();
            }

        }

int main()
{
    Matrix m1,m2;
    m1.getdata(2,2);
    m2.getdata(2,2);
    m1.show();
    m2.show();
    mulMatrix(m1,m2);
    return 0;
}
