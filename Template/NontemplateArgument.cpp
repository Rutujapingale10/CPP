#include<iostream>
using namespace std;
template<class T,int size>class A
{
	public:
	T arr[size];
	void insert()
	{
		int i=11;
		for(int j=0;j<size;j++)
		{
			arr[j]=i;
			i++;
		}
		}	
	void Display()
	{
		for(int i=0;i<size;i++)
		{
			cout<<arr[i]<<" ";
		}
		}	
};
int main()
{
	A<int,10>a;
	a.insert();
	a.Display();
	return 0;
}
