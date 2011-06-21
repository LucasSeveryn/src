#include "staff.hpp"
#include <cstdlib>

using namespace std;

int Staff::getValueOfATip(){
	return ((rand() % 10) + 1);
}

bool Staff::tipTest(){
	return (rand() % 100) < tipChance;
}

Staff::Staff(string newName,int newAge,int newTipChance):Person(newName,newAge){
	this->tipChance=newTipChance;
}
