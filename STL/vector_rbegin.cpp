//reverse iterator pointing to the past last element of the vector
//reverse iterator iterates backwards : increasing them moves them towards the beginning of the container
#include<iostream>
#include<vector>

int main()
{
	std::vector<int>myvector(5); //5 defaults constructed  ints 
	int i=0;
	
	std::vector<int>::reverse_iterator itr = myvector.rbegin();
	for(;itr!=myvector.rend();itr++)
	{
		*itr = ++i;
	}
	
	std::cout<<"myvector contain : ";
	
	for(std::vector<int>::iterator itr = myvector.begin();itr!=myvector.end();itr++)
	{
		std::cout<<*itr<<" ";
	}
	 
	
	return 0;
}
