#include<iostream>
using namespace std;
void myFun(int&);
void myFun(int &b)
{
	b=99;
	
}
int main()
{
	int a=10;
	myFun(a);
	cout<<"value of a in main function is "<<a;
	return 0;
}
