#include <iostream>
using namespace std;
class Animal
{
	public:
	virtual void makeSound()
	{
	cout<<"animals make sound ";	
	}
};
class Dog:public Animal
{
	public:
		virtual void makeSound()
		{
			cout<<"dog woau woau "<<endl;
		}
};
class Cat:public Animal
{
	public:
	virtual void makeSound()
	{
		cout<<"cat meow meow ";
	}
};
int main()
{
Dog dog;
dog.makeSound();
Cat cat;
cat.makeSound();	
}

