#include "client.hpp"

Client::Client(string newName,int newAge):Person(newName,newAge){
	//
}

string Client::getType(){
	return "client";
}
