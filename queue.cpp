#include "queue.hpp"

Queue::Queue(Node newHead){
	this->head=newHead;
}

Node Queue::peak(){
	return this->head;
}

Node Queue::pop(){
	Node toReturn;
	toReturn=head;
	this->head=*(this->head.getNext());
	return toReturn;
}

void Queue::addToFront(Node newNode){
	Node * pointerToHead;
	pointerToHead=&(this->head);
	newNode.setNext(pointerToHead);
	head=newNode;
}
