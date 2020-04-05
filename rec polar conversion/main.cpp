#include<iostream>
using namespace std;
#include<math.h>

const double pi=3.141592654;

class rectangular
{
	double x,y;
	public:
	rectangular()
	{
		x=0;
		y=0;
	}
	rectangular(double a,double b)
	{
		x=a;
		y=b;
	}
	double getx()
	{
		return x;
	}
	double gety()
	{
		return y;
	}
	void input()
	{
		cout<<" \nENTER THE COORDINATES"<<endl;
		cin>>x>>y;
	}
	void output()
	{
		cout<<"("<<x<<","<<y<<")";
	}
};

class polar
{
	double theta,r;
	public:
	polar ()
	{
		theta=0;
		r=0;
	}
	polar(rectangular rect)
	{
		r=sqrt(rect.getx()*rect.getx()+rect.gety()+rect.gety());
		theta=atan(rect.gety()/rect.getx());
		theta=(theta*180)/pi;
	}

	operator rectangular()
	{
		double x,y;
		float atheta=theta*pi/180;
		x=r*cos(atheta);
		y=r*sin(atheta);
		return rectangular(x,y);
	}

	void input()
	{
		cout<<"\nENTER THE POLAR COORDINATE: ";
		cin>>r>>theta;
	}

	void output()
	{
		cout<<"\nr="<<r;
		cout<<"\ntheta="<<theta;
	}
};

int main()
{

	rectangular r1,r2;
	polar p1,p2;
	int ch,n;
	do{
	cout<<"\n\t\t-----------";
	cout<<"\n\t\t CONVERSION";
	cout<<"\n\t\t-----------";
	cout<<"\n1.RECTANGULAR TO POLAR \n2.POLAR TO RECTANGULAR:"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
			r1.input();
			p1=r1;
			cout<<"\nRECTANGULAR COORDINATES OF R:";
			r1.output();
			cout<<"\n Polar coordintes of polar:";
			p1.output();
			break;

		case 2:
			p2.input();
			r2=p2;
			cout<<"\nrectangular coordinates are:";
			r2.output();
			break;

	}

	cout<<"\nDO U WANT TO CONTINUE:1:yes 2:No";
	cin>>n;
	}

	while(n==1);

}
