#ifndef INC_STAFF_H
#define INC_STAFF_H

#include "person.hpp"

class Staff : public Person{
	public:
		int getValueOfATip();
		bool tipTest();
		Staff(string,int,int);
	protected:
	
	private:
		short int tipChance; //0 - 100
};

#endif
