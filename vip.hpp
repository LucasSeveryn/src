#ifndef INC_VIP_H
#define INC_VIP_H

#include "person.hpp"

using namespace std;

class Vip : public Person{
	private:
		int status;
	public:
		Vip(string,int,int);
};

#endif
