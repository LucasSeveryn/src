#include <iostream>
#include "club.hpp"
#include "dateTime.hpp"

using namespace std;

Club::Club(string newName, int clubSize, int queueSize, int staffNumber,
		int dealersNumber, string newNow) {
	this->name=name;
	this->clubSize=clubSize;
	this->num_staff=staffNumber;
	this->num_dealers=dealersNumber;

	DateTime now(newNow);
	this->now=now;
}

void Club::setTick(int newTick){
	this->secondsPerTick=newTick;
}

void Club::setAgeLimit(int newAgeLimit){
	this->ageLimit=newAgeLimit;
}
