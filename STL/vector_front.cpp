//retrun refernce to the first element in the vector
//vector front
#include<iostream>
#include<vector>
int main()
{
	std::vector<int>myvector;
	
	myvector.push_back(78);
	myvector.push_back(16);
	
	//Now fronts equal to 78 and back equal to 16 
	
	myvector.front() = myvector.front()-myvector.back();
	
	std::cout<<"myvector front is : "<<myvector.front();
	
	return 0;
}
