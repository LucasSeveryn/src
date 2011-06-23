
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
	bool present(string);
};


class Queue{
private:
	int numberOfElements;
	int n;
	Node head;
public:
	Queue(){};
	Queue(Node,int);
	void addToFront(Node);
	Node peak();
	Node pop();
	bool present(string);

	~Queue(){};
};

#endif
