#include<iostream>
using namespace std;
int main()
{
	int rowCount,colCount;
	cout<<"Enter rowCount";
	cin>>rowCount;
	cout<<"Enter ColCount";
	cin>>colCount;
	for(int row=0;row<rowCount;row++)
	{
		for(int col=0;col<rowCount-row;col++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}