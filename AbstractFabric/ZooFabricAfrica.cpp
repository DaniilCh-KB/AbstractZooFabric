#include "ZooFabricAfrica.hpp"
#include "ZooAnimals.hpp"

PtrAbstractAnimal FabricAfrica::CreateAnimal() {
	return std::make_shared<Jerboa>();
}

PtrAbstractFish FabricAfrica::CreateFish() {
	return std::make_shared<Piranha>();
}

PtrAbstractInsect FabricAfrica::CreateInsect() {
	return std::make_shared<Bug>();
}
	
