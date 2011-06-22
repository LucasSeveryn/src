#include "queue.hpp"

Queue::Queue(Node newHead,int maxSize){
	this->head=newHead;
	this->n=maxSize;
	this->numberOfelements=0;
}

Node Queue::peak(){
	return this->head;
}

Node Queue::pop(){
	Node toReturn;
	toReturn=head;
	this->head=*(this->head.getNext());
	numberOfelements--;
	return toReturn;
}

void Queue::addToFront(Node newNode){
	if(numberOfElements==n){
		cout << "queue full";
	}
	else{
		Node * pointerToHead;
		pointerToHead=&(this->head);
		newNode.setNext(pointerToHead);
		numberOfelements++;
		head=newNode;
	}
}
