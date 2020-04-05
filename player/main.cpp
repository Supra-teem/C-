#include <iostream>
#include "string"
using namespace std;

class Player{
    string name;
    int match;
    double runs,avg;
public:
    Player(){
        name="Unknown";
        match=0;
        runs=avg=0.0;
    }
    void setdata(string nme,int n,double rn){
        name=nme;
        match=n;
        runs=rn;
        avg=(runs/(double)match);
    }
    double getavg(){
        return avg;
    }
    void max_avg(Player p[],int n){
        int m=0,mi;
        for(int i=0;i<n;i++){
            if(p[i].getavg()>m){
                m=p[i].getavg();
                mi=i;
            }
        }
        cout<<"Maximum Avg : "<<m<<" by Player"<<mi+1<<endl;
    }
};



int main()
{
    int n,i;
    cout<<"Enter Number of Player : ";
    cin>>n;
    Player p[n];
    for(i=0;i<n;i++){
        string name;
        int match;
        double runs;
        cout<<"Enter Name["<<i+1<<"] : ";
        cin>>name;
        cout<<"Enter Match["<<i+1<<"] : ";
        cin>>match;
        cout<<"Enter Runs["<<i+1<<"] : ";
        cin>>runs;
        p[i].setdata(name,match,runs);
    }
    p[0].max_avg(p,n);
    return 0;
}
