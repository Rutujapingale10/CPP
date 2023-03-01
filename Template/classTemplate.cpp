#include<iostream>
using namespace std;
template<class T>class A{
	public:
		T a=5;
		T b=10;
		void add()
		{
			T res=a+b;
			cout<<"addition is"<<res;
		}
};
int main()
{
	A<int>d; //d is object
	d.add(); //calling member fun
	return 0;
}
