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
public:
	Dog(){
		name = "dog";
	}
};

int main(){
	Animal myAnimal;
	Dog myDog; 
	myAnimal.whoAmI();
	myAnimal.does();
	myDog.whoAmI();
	myDog.does();

}