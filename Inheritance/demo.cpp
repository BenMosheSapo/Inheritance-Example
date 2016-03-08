#include <iostream>
#include <string>
using namespace std;

class Animal{
protected:
	string name;
public:
	Animal(){ 
		name = "animal";
	}
	void whoAmI(void){
		cout << "I am " << name << endl;
	}
	void does(void){
		cout << "do nothing" << endl;
	}
};

class Dog : public Animal{
protected:
	int numberLegs;
public:
	Dog(){
		name = "dog";
		numberLegs = 4;
	}
	void does(void){
		cout << "Woof!" << endl;
	}
	int howManyLegs(){
		return numberLegs;
	}
};

int main(){
	Animal myAnimal;
	Dog myDog; 
	Animal *AnimalPtr;
	AnimalPtr = &myDog;
	myAnimal.whoAmI();
	myAnimal.does();
	myDog.whoAmI();
	myDog.does();
	cout << "Dogs have " << myDog.howManyLegs() << " legs" << endl;
	cout << "Using the base pointer to access derived class object" << endl;
	AnimalPtr->whoAmI();
	AnimalPtr->does();
}