#include "ZooAnimals.hpp"

#include <iostream>

void Snake::noise() {
	std::cout << "Hissing snake" << std::endl;
}

void Ferret::noise() {
	std::cout << "Heavily breathing ferret" << std::endl;
}

void Jerboa::noise() {
	std::cout << "Digging jerboa" << std::endl;
}

void Perch::swim() {
	std::cout << "Swimming perch" << std::endl;
}

void Piranha::swim() {
	std::cout << "Blood-soaked swimming piranha" << std::endl;
}

void Carp::swim() {
	std::cout << "Swimming carp" << std::endl;
}

void Bug::fly() {
	std::cout << "Flying bug" << std::endl;
}

void Bee::fly() {
	std::cout << "Flying tired bee" << std::endl;
}

void Grasshopper::fly() {
	std::cout << "Shrieking jumping grasshopper" << std::endl;
}