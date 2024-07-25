#include <iostream>
using namespace std;
 class Car
{
	private:
string brand;
string model;
public:
int year;
Car(string B,string M,int Y)
{
brand=B;
model=M;
year=Y;	
}
Car(string B,string M)

{
brand=B;
model=M;
year=0;			
}
void displayInfo()
{
cout<<"the car brand :"<<brand<<endl;
cout<<"the car model :"<<model<<endl;
cout<<"the year :"<<year<<endlo;
	
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
Car car1("toyota","carina",2020);
car1.displayInfo();
Car car2("BMW","X5");
car2.displayInfo();





}

