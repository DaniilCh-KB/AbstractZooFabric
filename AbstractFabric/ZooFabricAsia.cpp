#include "ZooFabricAsia.hpp"
#include "ZooAnimals.hpp"

PtrAbstractAnimal FabricAsia::CreateAnimal() {
	return std::make_shared<Snake>();
}

PtrAbstractFish FabricAsia::CreateFish() {
	return std::make_shared<Carp>();
}

PtrAbstractInsect FabricAsia::CreateInsect() {
	return std::make_shared<Bee>();
}
