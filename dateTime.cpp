#include <iostream>
#include "dateTime.hpp"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

DateTime::DateTime(string input){
	string delims="/ :";
	int args[6];

	args[0]=atoi(strtok(input,delims));
	for(int i=1;i<6;i++){
		args[i]=atoi(strtok(NULL,delims));
	}



	//this->setDateTime(args[0],args[1],args[2],args[3],args[4],args[5]);
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
