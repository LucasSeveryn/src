#ifndef INC_DRUG_DEALER_H
#define INC_DRUG_DEALER_H

#include "person.hpp"

class DrugDealer : public Person{
	public:
		int getValueOfATransaction();
		bool transactionTest();
		DrugDealer(string,int,int,int);
	protected:
	
	private:
		short int transactionChance; //0 - 100
		int moneyToOffer;
		int earned;

};

#endif
