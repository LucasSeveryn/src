#ifndef INC_CLIENT_H
#define INC_CLIENT_H

#include "person.hpp"

class Client : public Person{
	Client(string,int);
public:
	string getType();
};

#endif
