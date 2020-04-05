#include<iostream>
using namespace std;
class watch
{
	int h,m,s;
	public:

	void get_time()
	{
		cout<<"\nEnter Hour: ";
		cin>>h;
		cout<<"Enter Minute: ";
		cin>>m;
		cout<<"Enter Second: ";
		cin>>s;
	}
	void display(watch t)
	{
		cout<<"\nTime is now: "<<t.h<<" Hour : "<<t.m<<" Min : "<<t.s<<" Sec";

	}
	watch addition(watch a, watch b)
	{
		watch c;
		c.s= (a.s + b.s)%60;
		c.m= (((a.m+b.m)%60)+((a.s+b.s)/60));
		c.h = ((a.h+b.h)+((a.m+b.m)/60));
		return c;
	}
	watch sub(watch a, watch b)
	{
		watch t;
		int s1,s2,sec;
		s1 = ((a.h*3600)+(a.m*60)+a.s);
		s2 = ((b.h*3600)+(b.m*60)+b.s);
		sec = s1-s2;
		int min= sec/60;
		t.s= sec%60;
		t.m = min%60;
		t.h = min/60;
		return t;
	}
	/*void res_time(watch t)
	{
		cout<<"\nTime is now: "<<t.h<<" Hour : "<<t.m<<" Min : "<<t.s<<" Sec";

	}*/
};

int main()
{
	watch a,b,c,d;
	a.get_time();
	a.display(a);
	b.get_time();
	b.display(b);
	c=c.addition(a,b);
	d=d.sub(a,b);
	c.display(c);
	d.display(d);
	return 0;
}
