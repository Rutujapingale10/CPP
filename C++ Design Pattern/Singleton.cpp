#include<iostream>
using namespace std;
class GameSetting{
	private:
		static GameSetting* _instance;  //static var of type Gamesetting Pointer
		int _brightness;
		int _width;
		int _height;
		
		
		//private constructor
		GameSetting():_brightness(75),_width(786),_height(1300){
		} //default constructor
		
	protected:
	
	
	public:
		static GameSetting* getInstance()  //static memebr fun of Gamesetting* type
		{
			if(_instance==NULL)
			{
				_instance = new GameSetting();
				return _instance;
			}
		}
		
		void setBrightness(int brightness)
		{
			_brightness=brightness;
			
		}
		void setWidth(int width)
		{
			_width = width;
		}
		
		void setHeight(int height)
		{
			_height=height;
		}
		
		int getBrightness()
		{
			return _brightness;
			
		}
	
        int getHeight()
		{
			return _height;
				 
		} 	
		int getWidth()
		{
			return _widht;
					 
		}
		
		void Display()
		{
			cout<<"Brightness is :"<<_brightness<<endl;
			cout<<"Height is :"<<_height<<endl;
			cout<<"Width is :"<<_width<<endl<<endl;
		}
				 	
};

GameSetting* GameSetting:: _instance; //type classname var name
int main()
{
	GameSetting *setting = GameSetting::getInstance();
	setting->Display();
	
	setting->setBrightness(1500);
	setting->Display();
	return 0;
}
