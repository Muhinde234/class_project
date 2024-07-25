#include <iostream>
using namespace std;

class Car
{
	public:
		string brand;
		string model;
		int year;
		Car()
		{
		string B=brand;
		string M=model;
		int Y =year;	
		}
		void displayInfo()
		{
			cout<<"the car brand :"<<brand<<endl;
			cout<<"the car model :"<<model<<endl;
			cout<<"the year :"<<year;
		}
};
int main()
{
	Car car1;
	car1.brand="toyota";
	car1.model="carina";
	car1.year=2020;
	car1.displayInfo();
}
