#pragma once

#include "ZooAbstractInterface.hpp"

//ANIMALS
class Snake : public AbstractAnimal {
	virtual void noise() override;
};

class Ferret : public AbstractAnimal {
	virtual void noise() override;
};

class Jerboa : public AbstractAnimal {
	virtual void noise() override;
};

//FISH
class Carp : public AbstractFish {
	virtual void swim() override;
};

class Piranha : public AbstractFish {
	virtual void swim() override;
};

class Perch : public AbstractFish {
	virtual void swim() override;
};

//INSECTS
class Bug : public AbstractInsect {
	virtual void fly() override;
};

class Bee : public AbstractInsect {
	virtual void fly() override;
};

class Grasshopper : public AbstractInsect {
	virtual void fly() override;
};
