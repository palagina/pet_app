#ifndef PET_H
#define PET_H
#include <iostream>
#include <string>
using namespace std;

class Pet {
public:
	Pet();
	Pet(string name, int age, double weight);
	string getName();
	int getAge();
	double getWeight();
	void setName(string newName);
	void setAge(int newAge);
	void setWeight(double newWeight);
	string getLifespan();
	~Pet();
private:
	string name;
	int age;
	double weight;
};

#endif
