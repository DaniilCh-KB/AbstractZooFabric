#pragma once

#include "ZooAbstractFabric.hpp"
#include "ZooAbstractInterface.hpp"

class FabricAfrica : public ZooAbstractFabric {
	virtual PtrAbstractFish CreateFish() override;
	virtual PtrAbstractAnimal CreateAnimal() override;
	virtual PtrAbstractInsect CreateInsect() override;
};