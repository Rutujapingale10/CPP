#include<iostream>
#include<string>
using namespace std;
class Vehicle{
	public:
		virtual void createVehicle()=0;
		
		
};
class bike:public Vehicle
{
	public:
		void createVehicle()
		{
			
		
	        cout<<"creting bike"<<endl;
        }
};

class car:public Vehicle{
	public:
		void createVehicle()
		{
			cout<<"Creating car"<<endl;
		}
};
//factory Method
class vehicleFactory{
	public:
	      static Vehicle* getVehicle(string vehicleType) //without creating obj we can access fun
		{
			
			Vehicle* vehicle;
				if(vehicleType=="car")
				{
					vehicle = new car();
				}
				else if(vehicleType=="bike")
				{
					vehicle=new bike();
				}
				else
				{
					cout<<"Wrong choice"<<endl;
				}
	
				return vehicle;
		      
		  	
		}	
};

int main()
{
	string vehicleType;
	cout<<"Enter type"<<endl;
	cin>>vehicleType;
	Vehicle* vehicle=vehicleFactory::getVehicle(vehicleType);
	vehicle->createVehicle();
	return 0;
}


//without using factory
/*
int main()
{
	string vehicleType;
	cout<<"Enter type"<<endl;
	cin>>vehicleType;
	Vehicle* vehicle;
	if(vehicleType=="car")
	{
		vehicle = new car();
	}
	else if(vehicleType=="bike")
	{
		vehicle=new bike();
	}
	
	vehicle->createVehicle();
	
	
}*/
