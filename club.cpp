#include <iostream>
#include "club.hpp"
#include "queue.hpp"
#include "dateTime.hpp"


using namespace std;

Club::Club(string newName, int clubSize, int queueSize, int staffNumber,
		int dealersNumber, string newNow){
	this->name=newName;
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

bool Club::checkRatio(){
	return (this->num_women)>(this->num_men);
}

bool Club::isFull(){
	return this->num_current==this->m;
}

Queue& Club::theQueue(){
	return this->queue;
}

