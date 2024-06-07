#include<iostream>
using namespace std;
class Box{
	private:
		int length;
		int* breadth;
		int height;
	public:
		Box() //default constructor
		{
			breadth = new int;	
		}
		void set_Diamention(int len,int bre,int hei)
		{
		length = len;
		*breadth = bre;
		height = hei;	
		}
		
		void showData()
		{
			cout<<length<<breadth<<height;
		}
		
		//copy constructor
		
		Box(Box & b1)
		{
			length = b1.length;
			breadth = new int;
			*breadth = *b1.breadth;
			height = b1.height;
		}
		~Box()
		{
			delete breadth;
		}
			
};

int main()
{
	//object of class 
	Box first;
	
	
	//set Diamention
	
	first.set_Diamention(12,14,16);
	
	//Display Diamention
	
	first.showData();
	
	
	//when data get will be copied then all the resources will also get allocated to the new object
	
	Box second = first ;
	
	//Display the diamention
	
	second.showData();
	
	return 0;
}
