#ifndef INC_POLICEMAN_H
#define INC_POLICEMAN_H

#include "person.hpp"

class Policeman : public Person{
	public:
		bool catchTest();
		Policeman(string, int, int,int);
	protected:
	
	private:
		short int catchChance; //0 - 100 //moznaby w ogole dac char ale brzydko wyglada :D
		int bribeLimit;
		int earned;
};

#endif
