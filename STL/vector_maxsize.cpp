//Retruns the maximum no of elements that vector can hold
//This maximum potential size the container can reach due to known system or library 
#include<iostream>
#include<vector>
int main()
{
	std::vector<int> myvector;
	
	//set some content in the vector
	for(int i=0;i<100;i++)
	{
		myvector.push_back(i);
	}
	
	std::cout<<"size : "<<myvector.size()<<"\n";
	std::cout<<"capacity : "<<myvector.capacity()<<"\n";
	std::cout<<"max_size : "<<myvector.max_size()<<"\n";
	
	
	return 0;
	
}
