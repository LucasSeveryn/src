#include "vip.hpp"

using namespace std;

Vip::Vip(string newName,int newAge,int newStatus):Person(newName,newStatus){
	this->status=newStatus;
}
