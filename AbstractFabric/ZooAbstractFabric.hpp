#pragma once

#include "ZooAbstractInterface.hpp"

class ZooAbstractFabric {
public:
	virtual PtrAbstractAnimal CreateAnimal() = 0;
	virtual PtrAbstractFish CreateFish() = 0;
	virtual PtrAbstractInsect CreateInsect() = 0;
};

using PtrZooAbstractFabric = std::shared_ptr<ZooAbstractFabric>;