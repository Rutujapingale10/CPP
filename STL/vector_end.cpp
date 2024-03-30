//return an iterator refering to the past last element of the vector 
//return an iterator to therotical last element of the vector

#include<iostream>
#include<vector>
 
int main()
{
	std::vector<int>myvector;
	for(int i=1;i<=5;i++)
	{
		myvector.push_back(i);
	}
	
	std::cout<<"myvector contains : ";
	for(std::vector<int>::iterator it = myvector.begin(); it!= myvector.end();it++)
	{
		std::cout<<" "<<*it;
	}
	
	std::cout<<"\n";
	
	
	
	
	return 0;
} 
