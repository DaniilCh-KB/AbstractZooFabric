#pragma once

#include <memory>

class AbstractFish {
public:
	virtual void swim() = 0;
};

class AbstractAnimal {
public:
	virtual void noise() = 0;
};

class AbstractInsect {
public:
	virtual void fly() = 0;
};

using PtrAbstractFish = std::shared_ptr<AbstractFish>;
using PtrAbstractAnimal = std::shared_ptr<AbstractAnimal>;
using PtrAbstractInsect = std::shared_ptr<AbstractInsect>;