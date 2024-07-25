#include <iostream>
using namespace std;
 class Vehicle 
 {
 	public:
 	string brand;
 	int year;
 };
 class Car: public Vehicle
 {
 	public:
 	string model;
 	displayInfo()
 	{
 	cout<<"brand :"<<brand<<"\nmodel:"<<model<<"\nyear"<<year;
	 }
 };
 int main()
 {
 	Car car;
 	car.brand="X5";
 	car.model="BMW";
 	car.year=2020;
 	car.displayInfo();
 }
