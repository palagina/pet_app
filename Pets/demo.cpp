#include <iostream>
using namespace std;
#include <string>
#include "Pet.h"
#include "Dog.h"
#include "Turtle.h"


int main() {
	Dog fido("Fido", 5, 120, "Great Dane");
	Dog pippen("Pippen", 2, 45, "Dalmatian");
	Turtle rocco("Rocco", 99, 1);
	cout << fido.getName() << ", age " << fido.getAge()
		<< ", weight " << fido.getWeight() << ", breed "
		<< fido.getBreed() << endl;
	cout << fido.getLifespan() << endl << endl;
	cout << pippen.getName() << ", age " << pippen.getAge()
		<< ", weight " << pippen.getWeight() << ", breed "
		<< pippen.getBreed() << endl;
	cout << pippen.getLifespan() << endl << endl;
	cout << rocco.getName() << ", age " << rocco.getAge()
		<< ", weight " << rocco.getWeight() << endl;
	cout << rocco.getLifespan() << endl << endl;
	return 0;
}