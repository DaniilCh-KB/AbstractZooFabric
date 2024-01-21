#include "ZooFabricRussia.hpp"
#include "ZooAnimals.hpp"

PtrAbstractAnimal FabricRussia::CreateAnimal() {
	return std::make_shared<Ferret>();
}

PtrAbstractFish FabricRussia::CreateFish() {
	return std::make_shared<Perch>();
}
PtrAbstractInsect FabricRussia::CreateInsect() {
	return std::make_shared<Grasshopper>();
}

