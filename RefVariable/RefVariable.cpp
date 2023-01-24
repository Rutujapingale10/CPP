#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int& b=a;
	b=50;
	cout<<a<<"\n";
	a=90;
	cout<<b;
	return 0;
}
