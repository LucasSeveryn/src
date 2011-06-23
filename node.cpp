#include "queue.hpp"

Node::Node(Person newObject){
	this->object=newObject;
}

Node * Node::getNext(){
	return this->next;
}

Person Node::getObject(){
	return this->object;
}

void Node::setNext(Node * newNext){
	this->next=newNext;
}

bool Node::present(string searchKey){
	if(this->object.getName()==searchKey){
		return true;
	}else{
		return (*this->getNext()).present(searchKey);
	}
	return false;
}
