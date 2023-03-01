#include<iostream>
using namespace std;
template<class T,class T1>class A{
	public:
		T a;
		T b;
		public:
			A(T x,T1 y)
			{
			  a=x;
			  b=y;
			}//parameterised constructor
			void Display()
			{
				cout<<"Values of a and b are :"<<a<<" , "<<b<<endl;
			}
};
int main()
{
	A<float,int>d(4.5,9);
	d.Display();
	return 0;	
}
