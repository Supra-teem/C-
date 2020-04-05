#include<iostream>
using namespace std;

class complex{
	private:
		int r,i;
	public:
		void get_data(int real,int img){
			r = real;
			i = img;
		}
		int real(){
			return r;
		}
		int imaginary(){
			return i;
		}
		void display()
		{
		    cout<<"Result for complex addition : "<<r<<"+"<<i<<"i"<<"\n";
		}
		friend complex add_num(complex ,complex );
};

class Add{
	public:
		int add_num(int a,int b){
			return (a+b);
		}
		float add_num(float a,float b,int c){
			return (a+b+(float)c);
		}

};
		complex add_num(complex a,complex b){
			complex c;
			/*int img = a.imaginary() + b.imaginary();
			int rel = a.real() + b.real();
			c.get_data(rel,img);*/
			c.r=a.r+b.r;
			c.i=a.i+b.i;
			return c;
		}


int main(){
	Add obj;
	complex c1,c2;
	int res = obj.add_num(2,3);
	float resfl = obj.add_num(2.2,2.3,1);
	c1.get_data(2,3);
	c2.get_data(3,2);
	complex c = add_num(c1,c2);
	cout<<"Result for int addition : "<<res<<"\n";
	cout<<"Result for float addition : "<<resfl<<"\n";
	c.display();
	return 0;
}
