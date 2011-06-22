
#ifndef INC_QUEUE_H
#define INC_QUEUE_H
#include "person.hpp"

using namespace std;

class Node{
private:
	Person object;
	Node* next;
public:
	Person getObject();
	Node* getNext();
	void setNext(Node*);
	Node(Person);
	Node(){};
	~Node(){};
};


class Queue{
private:
	int num_inqueue;
	int n;
	Node head;
public:
	Queue(){};
	Queue(Node);
	void addToFront(Node);
	Node peak();
	Node pop();

	~Queue(){};
};

#endif
