#include<iostream>
using namespace std;

//class
class complex{
	public:
		int real;
		int imaginary;
		complex()
		{
			this->real=1;
			this->imaginary=1;
		}
		complex(int r,int im)
		{
			this->real=r;
			this->imaginary=im;
			
		}
		//setter
		void setreal(int r)
		{
			this->real=r;
		}
		void setimg(int im)
		{
			this->imaginary=im;
		}
		//getter
		int getreal()
		{
			return this->real;
			
			
		}
		int getimag(int img)
		{
			return this->imaginary;
		}
		//function
		void Display()
		{
			cout<<this->real<<"+"<<this->imaginary<<"i"<<"\n";
		}
};
int main()
{
	complex *c1;
	c1=new complex();
	c1->Display(); //ptr to one variable 
	int r,im;
	delete c1; //deallocate memory (delete and make available for further allocation)
	c1=new complex[3];//ptr to array
	
	for(int i=0;i<3;i++)
	{
		cout<<"Enter Real no\n";
		cin>>r;
		cout<<"Enter imaginary no\n";
		cin>>im;
		c1[i].setreal(r);//ptr to array - using . operator to access sequential member
		c1[i].setimg(im);
		
		
	}
	for(int i=0;i<3;i++)
	{
		c1[i].Display();
	}
	c1=new complex(10,20);
	c1->Display();
	cout<<sizeof(c1);
	//delete[] c1;
	return 0;
	
	
	
}
