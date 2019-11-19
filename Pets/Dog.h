#ifndef DOG_H
#define DOG_H
#include "Pet.h"
#include <iostream>
#include <string>
using namespace std;

class Dog : public Pet {
public:
	Dog();
	Dog(const string& name, const int& age, const double& weight, string breed);
	string getBreed();
	void setBreed(string newBreed);
	string getLifespan();
	~Dog();

private:
	string breed;
};

#endif