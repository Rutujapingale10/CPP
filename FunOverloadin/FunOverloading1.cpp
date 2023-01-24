#include<iostream>
using namespace std;
class complex{
	
		int real;
		int imaginary;
	public:
		complex()
		{
			this->real=1;
			this->imaginary=2;
		}
		complex(int r,int im)
		{
			this->real=r;
			this->imaginary=im;
		}
		complex add(int a)
		{	complex temp;
			temp.real=this->real+a;
			temp.imaginary=this->imaginary+a;
			return temp;
		}
		complex add(complex c2)
		{
			complex temp;
			temp.real=this->real+c2.real;
			temp.imaginary=this->imaginary+c2.imaginary;
			return temp;
		}
		void Display()
		{
			cout<<"complex no is"<<this->real<<"+"<<this->imaginary<<"\n";
		}
			
};

int main()
{
	complex c1;
	complex c2(3,10);
	complex c3=c1.add(20);
	complex c4=c1.add(c2);
	c1.Display();
	c2.Display();
	c3.Display();
	c4.Display();
}
