#include <iostream>
#include <string>
using namespace std; 
#include "Dog.h"

Dog::Dog() :Pet() {}

Dog::Dog(const string& name, const int& age, const double& weight, string breed) 
	: Pet(name, age, weight),
	breed(breed){};

string Dog::getBreed() { return breed; };
void Dog::setBreed(string newBreed) { breed = newBreed; };
Dog::~Dog() {};

string Dog::getLifespan() {
	string lifeSpan;
	lifeSpan = getWeight() >= 100 ? "Approximately 7 years" : "Approximately 13 years";
	return lifeSpan;
};

