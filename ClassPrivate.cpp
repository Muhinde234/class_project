#include <iostream>
using namespace std;
 class Car
{
	private:
string brand;
string model;
public:
int year;
Car(string b,string m,int y)

{
	brand=b;
	model=m;
	year=y;
}
void displayInfo()
{
cout<<"the car brand :"<<brand<<endl;
cout<<"the car model :"<<model<<endl;
cout<<"the year :"<<year;
	
}
public:
void setBrand(string B)
{
brand=B;	
}
void setModel(string M)
{
	model=M;
}

string getBrand()
{
	return brand;
}
string  getModel()
{
	return model;
	}	
};
int main()
{

Car car1("toyota","carina",0);
car1.setBrand("toyota");
car1.setModel("carina");
car1.year=2020;
car1.displayInfo();


}
