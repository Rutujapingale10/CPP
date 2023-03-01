#include<iostream>
using namespace std;
template<class T>T add(T a,T b)
{
	T result = a+b;
	return result;
}
int main()
{
	int i=3;
	int j=5;
	float m=1.2;
	float n=1.1;
	
	cout<<"Addition of i and j is : "<<add(i,j);
	cout<<endl;
	cout<<"Addition of m and n is : "<<add(m,n);
	return 0;
}
