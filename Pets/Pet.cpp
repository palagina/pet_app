#include <iostream>
#include <string>
using namespace std;
#include "Pet.h"

Pet::Pet() : name(""), age(0), weight(0) {};
Pet::Pet(string name, int age, double weight) : name(name), age(age), weight(weight) {}
Pet::~Pet() {};

string Pet::getName() { return name; };
int Pet::getAge() { return age; };
double Pet::getWeight() { return weight; };

void Pet::setName(string newName) { name = newName; };
void Pet::setAge(int newAge) { age = newAge; };
void Pet::setWeight(double newWeight) { weight = newWeight; };

string Pet::getLifespan() { 
	string lifeSpan = "unknown lifespan";
	return lifeSpan; 
};
