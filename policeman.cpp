#include "policeman.hpp"
#include <cstdlib>

bool Policeman::catchTest(){
	return (rand() % 100) < catchChance;
}

Policeman::Policeman(string newName, int newAge, int newCatchChance,int newBribeLimit):Person(newName,newAge){
	this->catchChance=newCatchChance;
	this->bribeLimit=newBribeLimit;
	this->earned=0;
}
