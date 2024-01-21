#pragma once

#include "ZooAbstractFabric.hpp"
#include "ZooAbstractInterface.hpp"

class FabricRussia : public ZooAbstractFabric {
	virtual PtrAbstractFish CreateFish() override;
	virtual PtrAbstractAnimal CreateAnimal() override;
	virtual PtrAbstractInsect CreateInsect() override;
};