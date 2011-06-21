#ifndef INC_FIVER_H
#define INC_FIVER_H

using namespace std;


template <class T>
class Fiver{
private:
	T array[5];
	int numberOfElements;
protected:
	int getMax();
	int getNumberOfElements();
public:
	T get(int);
	Fiver();
};

#endif
