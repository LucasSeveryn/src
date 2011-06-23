#include "queue.hpp"
#include <stdio.h>
#include <iostream>

using namespace std;

Queue::Queue(Node newHead,int maxSize){
	this->head=newHead;
	this->n=maxSize;
	this->numberOfElements=0;
}

Node Queue::peak(){
	return this->head;
}

Node Queue::pop(){
	Node toReturn;
	toReturn=head;
	this->head=*(this->head.getNext());
	this->numberOfElements--;
	return toReturn;
}

bool Queue::present(string searchKey){
	if(this->head.getObject().getName()==searchKey){
		return true;
	}
	else{
		return this->head.getNext()->present(searchKey);
	}
}

void Queue::addToFront(Node newNode){
	if(this->numberOfElements==n){
		cout << "queue full";
	}
	else{
		Node * pointerToHead;
		pointerToHead=&(this->head);
		newNode.setNext(pointerToHead);
		this->numberOfElements++;
		head=newNode;
	}
}
