#include<iostream>
using namespace std;
template<class T>T Max(T a,T b) //can use typename instead class
{
	T a1=a>b?a:b;
	return a1;
}
int main()
{
	cout<<Max<int>(3,7)<<endl; //int is optional
	cout<<Max(3.4,9.8)<<endl;
	cout<<Max('a','z');
	return 0;
}
