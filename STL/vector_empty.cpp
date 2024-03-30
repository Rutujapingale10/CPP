//std::vector::empty
//Test the vector is empty or not
//it return true if container size is 0 , false otherwise
//vector::empty

#include<iostream>
#include<vector>

int main()
{
	std::vector<int>myvector;
	int sum(0);
	
	for(int i=0;i<=10;i++)
	{
		myvector.push_back(i);
	}
	
	while(!myvector.empty())
	{
		sum = sum+myvector.back();
		
		myvector.pop_back();
		
	}
	
	std::cout<<"total : "<<sum;
	
	return 0;
}
