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
	virtual void does(void){				// Once this function is declasrd as virtual in higher class then in all derived classes that function will be
											// virtual even if don't declare it but it is good practice to declare it in every one of the derived classes
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
	AnimalPtr = &myAnimal;
	AnimalPtr->does();
}