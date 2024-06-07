#include<iostream>
using namespace std;
//Box class
class Box{
	private:
		int length;
		int breadth;
		int height;
		public:
		Box()
		{
			length = 0;
			breadth = 0;
			height = 0;
			
		}
		Box(int l1,int b1,int h1)
		{
			length = l1;
			breadth = b1;
			height = h1;
		}
		void setVal(int len,int bre, int heig)
		{
			length = len;
			breadth = bre;
			height = heig; 
		}
		void showdata()
		{
			cout<<"length is : "<<length<<"breadth is : "<<breadth<<"height is : "<<height<<endl;
			
		}
		
};
int main()
{
	
	//objects of class
	Box B1;
	
	//set diamention of box
	B1.setVal(12,13,14);
	B1.showdata();
	
	//when copying data of object 
	//at the time of initialisation copy is made through implicit copy constructor or though 
	Box B2 = B1;
	B2.showdata();
	
	
	
	
	
	return 0;
}
