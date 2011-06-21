#include "drugDealer.hpp"
#include <cstdlib>

using namespace std;
int DrugDealer::getValueOfATransaction(){
	return ((rand() % 91) + 10);
}

bool DrugDealer::transactionTest(){
	return (rand() % 100) < transactionChance;
}

DrugDealer::DrugDealer(string newName,int newAge,int newTransactionChance,int newMoneyToOffer):Person(newName,newAge){
	this->transactionChance=newTransactionChance;
	this->moneyToOffer=newMoneyToOffer;
	this->earned=0;
}
