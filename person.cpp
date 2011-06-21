#include "person.hpp"
#include "gender.hpp"
#include <string>
#include <cstdlib>
using namespace std;

Person::Person(string name, int age){
	this -> name = name;
	this -> age = age;

	int selector =(rand() % 2);
	if( selector > 1) this->m_gender=FEMALE;
	else if( selector>0) this->m_gender=MALE;
	else this->m_gender=ALIEN;

}

string Person::getName(){
	return name;
}

int Person::getAge(){
	return age;
}

gender Person::getGender(){
	return m_gender;
}
