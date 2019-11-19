#include <iostream>
#include <string>
using namespace std;
#include "Turtle.h"

Turtle::Turtle() :Pet() {}

Turtle::Turtle(const string& name, const int& age, const double& weight)
	: Pet(name, age, weight) {};

Turtle::~Turtle() {};

string Turtle::getLifespan() {
	string lifeSpan;
	lifeSpan = "Hundreds of years";
	return lifeSpan;
};
