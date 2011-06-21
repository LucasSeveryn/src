#ifndef INC_QUEUE_H
#define INC_QUEUE_H
#include "person.hpp"

class Queue{
private:
	int num_inqueue;
	int n;

	Person peopleInQueue[];
public:
	Queue(int);

	Queue(){};
	~Queue(){};
};

#endif
