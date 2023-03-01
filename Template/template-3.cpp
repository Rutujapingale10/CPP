#include<iostream>
using namespace std;
template<class T>void fun(T a)
{
	cout<<"value of a"<<a<<endl;
}
template<class T>T fun(T a,T b)
{
	T result =a+b;
	return result;
}
template<class T,class T1>T1 fun(T a,T1 b)
{
	T1 x=a+b;
	return x; 
}
/*template<class T1,class T2>void fun(T1 a,T2 b)
{
	cout<<"addition is"<<a+b<<endl;
}*/
int main()
{
	fun(5);
	cout<<"Addition is"<<fun(2,5);
	cout<<"Addition is :"<<fun(1,9.5);
	cout<<endl;
	cout<<"Addition is :"<<fun(4.4,9);
//fun(1.2,6);
  return 0;
}
