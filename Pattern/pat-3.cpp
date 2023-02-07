#include<iostream>
using namespace std;
int main()
{
	int colCount,rowCount;
	cin>>rowCount;
	cin>>colCount;
	for(int row=0;row<rowCount;row++)
	{
		if(row==0||row==rowCount-1)
		{
			for(int col=0;col<colCount;col++)
			{
				cout<<"*";
			}
		}
		else
		{
			//first star for other rows
			cout<<"*";
			//for spaces
			for(int i=0;i<colCount-2;i++)
			{
				cout<<" ";
			}
			//last star
			cout<<"*";
		}
		cout<<endl;
		
	}
	return 0;
}