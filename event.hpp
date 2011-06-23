#ifndef INC_EVENT_H
#define INC_EVENT_H
#include <stdio.h>
#include <string>
#include "gender.hpp"

using namespace std;

class Event{
private:
	string name;
	string type;

	enum eventType{ENTER,LEAVE};
	eventType eventType;

	int age;
	//gender gender;
	//void parseEvent(string);
public:

};

#endif
