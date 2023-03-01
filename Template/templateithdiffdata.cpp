#include<iostream>
using namespace std;
template<class T,class T1>T1 add(T a,T1 b)  //if we want result in int then T1 add will replaced by T add
{
	T1 result = a+b;
	return result;
}
int main()
{
	cout<<"Addition of "<<add(2,1.5);
	return 0;
}
