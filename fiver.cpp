#include "fiver.hpp"


template <class T>
T Fiver<T>::get(int n){
	return this->array[n];
}

template <class T>
int Fiver<T>::getNumberOfElements(){
	return this->numberOfElements;
}

template <class T>
int Fiver<T>::getMax(){
	return 5;
}
