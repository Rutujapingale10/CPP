//std::vector::resize
//resize the container so that it contain n elements 
//if n is smaller than current container size, the content is reduced to its first n elements removing those beyond and destroying them 

//if n is greater than current container size, the content is expanded by inserting at the end as many elements as needed to reach a size of n 
//if val is specified the new elements are initialised  as copies of Val, otherwise they are value initialized

//resizing vector
#include<iostream>
#include<vector>

int main()
{

	std::vector<int> myvector;
	//set some initial content
	
	for(int i=0;i<10;i++)
	{
		myvector.push_back(i);
			
	}	
	myvector.resize(5);//reduce the size upto 5
	myvector.resize(8,100);//increses size upto 8 and insert element 100 at empty places
	myvector.resize(12);//increses size upto 12 and insert 0 at remaining places
	
	
	
	std::cout<<"myvector contain : ";
	for(int i=0;i<myvector.size();i++)
	{
		std::cout<<" "<<myvector[i];
		
	}
	return 0;
}
