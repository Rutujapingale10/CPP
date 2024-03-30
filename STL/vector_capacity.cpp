
//std::vector::capacity()
//Return size of allocated storage capacity
//This capacity is not necessarily equal to vector size.It can eqaul or greater with extra space allowing to accomodate growth without need to reallocate on 
//each insertion
//capacity does not suppose a limit on the size of the vector
//The theorotical limit on the size of vector is given by member max_size

//program comparing size, capacity,maxsize

#include<iostream>
#include<vector>
int main()
{
	std::vector<int>myvector;
	
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
