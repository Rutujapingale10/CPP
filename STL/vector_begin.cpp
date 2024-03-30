//return iterator pointing to the first element of the vector
//An iterator to the beginning of the sequence container.

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	
	std::vector<int>myvector ;
	for(int i=0;i<5;i++)
	{
		myvector.push_back(i);
	}
	
	std::cout<<"My vector contains ";
	
	for(std::vector<int>::iterator it = myvector.begin(); it!= myvector.end(); it++)
	{
		
		cout<<" "<<*it;
		
	}
		
	return 0;
}
