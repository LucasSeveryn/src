#include <iostream>
#include "dateTime.hpp"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

DateTime::DateTime(string input){

	string tmp;
	string args2[6];
	int c = 0;
	for(int i = 0; i < input.size(); i++) {
		if(input[i] == '/' || input[i] == ':' || input[i] == ' ') {
			args2[c].assign(tmp);
			c++;
			tmp.clear();
		} else {
			tmp.push_back(input[i]);
		}
	}

	int args[6];

	for(int i = 0; i < 6; i++) args[i] = atoi(args2[i].c_str());



	this->setDateTime(args[0],args[1],args[2],args[3],args[4],args[5]);
}

void DateTime::setDateTime(int d,int mon,int y, int h, int min, int s){
	this->day=d;
	this->month=mon;
	this->year=y;
	this->h=h;
	this->min=min;
	this->sec=s;
}

void DateTime::printDateTime(){
	cout << this->day <<"/" << this->month << "/" << this->year << " " << this->h << ":" << this->min << ":" << this->sec << endl;
}
