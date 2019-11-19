#ifndef TURTLE_H
#define TURTLE_H
#include "Pet.h"
#include <iostream>
#include <string>
using namespace std;

class Turtle : public Pet {
public:
	Turtle();
	Turtle(const string& name, const int& age, const double& weight);
	string getLifespan();
	~Turtle();
};

#endif