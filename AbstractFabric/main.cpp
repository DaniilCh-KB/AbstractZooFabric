#include <iostream>

#include "ZooAbstractFabric.hpp"
#include "ZooAbstractInterface.hpp"
#include "ZooFabricAfrica.hpp"
#include "ZooFabricAsia.hpp"
#include "ZooFabricRussia.hpp"

int main() {
	PtrZooAbstractFabric FA1 = std::make_shared<FabricAfrica>();
	PtrZooAbstractFabric FA2 = std::make_shared<FabricAsia>();
	PtrZooAbstractFabric RA1 = std::make_shared<FabricRussia>();

	FA1->CreateAnimal()->noise();
	FA1->CreateFish()->swim();
	FA1->CreateInsect()->fly();

	FA2->CreateAnimal()->noise();
	FA2->CreateFish()->swim();
	FA2->CreateInsect()->fly();

	RA1->CreateAnimal()->noise();
	RA1->CreateFish()->swim();
	RA1->CreateInsect()->fly();

	return 0;
}
