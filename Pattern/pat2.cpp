#include<iostream>
using namespace std;
int main()
{
	
	for( int row=0;row<3;row++)
	{
		for(int col=0;col<5;col++)
		{
			if(row==1&&(col>=1&&col<4))
			{
				cout<<"  ";
				
			}
			else
			{
			
			cout<<"* ";
		}
		}
		cout<<endl;
	}
}