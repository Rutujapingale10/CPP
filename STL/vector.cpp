//Add element to vector
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>num{1,2,3,4,5};
	cout<<"Initial vector : ";
	for(const int&i:num)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	num.push_back(6);
	num.push_back(7);
	cout<<"Updated vector : ";
	for(const int&i:num)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	//acessing vect element
	cout<<"Element at index 0  : "<<num.at(0)<<"\n";
	cout<<"Element at index 1  : "<<num.at(1);	
	cout<<endl;
	
	//change vect element
	
	num.at(0)=30;
	num.at(1)=35;
	cout<<"updated vect : ";
	for(const int&i:num)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	//delete number from vector
	num.pop_back();
	cout<<"updated vector after deletion : ";
	for(const int&i:num)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	//vector iterator
	vector<int>::iterator itr;
	itr=num.begin();
	cout<<"First element of vactor :num[0] "<<*itr;
	cout<<endl;
	itr=num.begin()+2;
	cout<<"second element of vector : num[2] : "<<*itr<<endl;
	//iterator points to last element
	itr=num.end()-1;
	cout<<"last element of vector : "<<*itr<<endl;
	
	//use iterator with loop
	cout<<"iterating over vector using itr :";
	for(itr=num.begin();itr!=num.end();itr++)
	{
		cout<<*itr<<"  ";
	}
	
	return 0;
}
